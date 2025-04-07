#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f3f0);

#define public_6f3f406 _public_6f3f406
#define public_6f3f411 _public_6f3f411
#define public_6f3f415 _public_6f3f415
#define public_6f3f420 _public_6f3f420
#define public_6f3f42c _public_6f3f42c
#define public_6f3f435 _public_6f3f435

PROC_DECLARE(0x6f3f3f0, internal_6f3f3f0, public_6f3f3f0);
extern "C" NAKED register_t __cdecl internal_6f3f3f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x11]
        test bl, bl
        jne public_6f3f415
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        jne public_6f3f411
        public_6f3f406 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x11]
        test bl, bl
        je public_6f3f406
        public_6f3f411 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3f415 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f3f42c
        nop 
        public_6f3f420 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f3f420
        public_6f3f42c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f3f435
        mov dword ptr ds : [ecx], eax
        public_6f3f435 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3f3f0)
    }
}

#undef public_6f3f406
#undef public_6f3f411
#undef public_6f3f415
#undef public_6f3f420
#undef public_6f3f42c
#undef public_6f3f435
