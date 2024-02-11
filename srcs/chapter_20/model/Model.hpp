#ifndef MODEL_HPP
#define MODEL_HPP

#include <iostream>
#include <vector>
#include <ai.h>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

#include "Mesh.hpp"
#include "Shader.h"


class Model {
    public:
        Model(char *path) {
            loadModel(path);
        }
        void Draw(Shader &shader);

    private:
        std::vector<Mesh> meshes;
        std::string directory;

        void loadModel(std::string path);
        void processNode(aiNode *node, const aiScene *scene);
        Mesh processMesh(aiMesh *mesh, const aiScene *scene);
        std::vector<Texture> loadMaterialTextures(
            aiMaterial *mat, aiTextureType type, std::string typeName);
};

#endif
