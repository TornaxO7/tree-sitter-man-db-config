#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage *tree_sitter_mandbconfig();

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
  0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports["name"] = Napi::String::New(env, "mandbconfig");
    auto language = Napi::External<TSLanguage>::New(env, tree_sitter_mandbconfig());
    language.TypeTag(&LANGUAGE_TYPE_TAG);
    exports["language"] = language;
    return exports;
}

NODE_API_MODULE(tree_sitter_mandbconfig_binding, Init)
