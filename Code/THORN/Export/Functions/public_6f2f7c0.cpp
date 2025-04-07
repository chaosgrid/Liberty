#include "THORN-PCH.h"


#define public_6f2f7d0 _public_6f2f7d0
#define public_6f2f7db _public_6f2f7db
#define public_6f2f7df _public_6f2f7df
#define public_6f2f7e5 _public_6f2f7e5

PROC_DECLARE(0x6f2f7c0, internal_6f2f7c0, public_6f2f7c0);
extern "C" NAKED register_t __cdecl internal_6f2f7c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        mov eax, dword ptr ds : [edx]
        je public_6f2f7db
        lea ecx, ds:[ecx]
        public_6f2f7d0 : nop
        dec ecx
        cmp eax, edx
        je public_6f2f7df
        test ecx, ecx
        mov eax, dword ptr ds : [eax]
        jne public_6f2f7d0
        public_6f2f7db : nop
        cmp eax, edx
        jne public_6f2f7e5
        public_6f2f7df : nop
        or eax, 0xFFFFFFFF
        ret 4
        public_6f2f7e5 : nop
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6f2f7c0)
    }
}

#undef public_6f2f7d0
#undef public_6f2f7db
#undef public_6f2f7df
#undef public_6f2f7e5
