#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3d00);

#define public_65d3d16 _public_65d3d16
#define public_65d3d21 _public_65d3d21
#define public_65d3d25 _public_65d3d25
#define public_65d3d2f _public_65d3d2f
#define public_65d3d3b _public_65d3d3b
#define public_65d3d44 _public_65d3d44

PROC_DECLARE(0x65d3d00, internal_65d3d00, public_65d3d00);
extern "C" NAKED register_t __cdecl internal_65d3d00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push ebx
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x2D]
        test bl, bl
        jne public_65d3d25
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_65d3d21
        public_65d3d16 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_65d3d16
        public_65d3d21 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_65d3d25 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_65d3d3b
        public_65d3d2f : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_65d3d2f
        public_65d3d3b : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_65d3d44
        mov dword ptr ds : [ecx], eax
        public_65d3d44 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d3d00)
    }
}

#undef public_65d3d16
#undef public_65d3d21
#undef public_65d3d25
#undef public_65d3d2f
#undef public_65d3d3b
#undef public_65d3d44
