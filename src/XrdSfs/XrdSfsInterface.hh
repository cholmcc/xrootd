#define SFS_O_LOCAL    0x0800000         // used for locate only (local cmd)
#define SFS_FSCTL_STATCC  5 // Return Cluster Config status
// The following macros are used for dealing with special local paths
//
#define SFS_LCLPRFX    "/=/"
#define SFS_LCLPLEN    3
#define SFS_LCLPATH(x) !strncmp(x, SFS_LCLPRFX, SFS_LCLPLEN)

//-----------------------------------------------------------------------------
//! Notify filesystem that a client has disconnected.
//!
//! @param  client - Client's identify (see common description).
//-----------------------------------------------------------------------------

virtual void           Disc(const XrdSecEntity     *client = 0) {}

//!                  SFS_FSCTL_STATCC  Return cluster config status