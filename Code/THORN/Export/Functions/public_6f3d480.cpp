#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d480);

#define public_6f3d496 _public_6f3d496
#define public_6f3d4a1 _public_6f3d4a1
#define public_6f3d4a5 _public_6f3d4a5
#define public_6f3d4b0 _public_6f3d4b0
#define public_6f3d4bc _public_6f3d4bc
#define public_6f3d4c5 _public_6f3d4c5

PROC_DECLARE(0x6f3d480, internal_6f3d480, public_6f3d480);
extern "C" NAKED register_t __cdecl internal_6f3d480()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x25]
        test bl, bl
        jne public_6f3d4a5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6f3d4a1
        public_6f3d496 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6f3d496
        public_6f3d4a1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f3d4a5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f3d4bc
        nop 
        public_6f3d4b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f3d4b0
        public_6f3d4bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f3d4c5
        mov dword ptr ds : [ecx], eax
        public_6f3d4c5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3d480)
    }
}

#undef public_6f3d496
#undef public_6f3d4a1
#undef public_6f3d4a5
#undef public_6f3d4b0
#undef public_6f3d4bc
#undef public_6f3d4c5
