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

/********
 * desc *
 ********/

/* telemetry data about an obj file  */

struct desc {                  
    int n_v;        /* number of position attributes */
    int n_vt;       /* number of texture attributes */
    int n_vn;       /* number of normal attributes */
    int n_pts;      /* number of points */
    int n_tr;       /* number of triangle faces */
};

struct obj* obj_load(char* file);
void obj_free(struct obj* obj);

#endif    /* OBJ_H */
