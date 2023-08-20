#ifndef OBJ_H
#define OBJ_H

/*******
 * obj *
 *******/

/* holds 3D object data (loaded from wavefront obj) */

struct obj {
    float* pts;     /* indexed triangle list representation */
    int* indices;
    int n_pts;
    int n_indices;
    int n_attr;     /* number of attributes in a point */
};

struct obj* obj_load(char* file);
void obj_free(struct obj* obj);

#endif    /* OBJ_H */
