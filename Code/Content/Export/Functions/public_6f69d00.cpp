#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);

#define public_6f69d16 _public_6f69d16
#define public_6f69d21 _public_6f69d21
#define public_6f69d25 _public_6f69d25
#define public_6f69d30 _public_6f69d30
#define public_6f69d3c _public_6f69d3c
#define public_6f69d45 _public_6f69d45

PROC_DECLARE(0x6f69d00, internal_6f69d00, public_6f69d00);
extern "C" NAKED register_t __cdecl internal_6f69d00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x1D]
        test bl, bl
        jne public_6f69d25
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f69d21
        public_6f69d16 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f69d16
        public_6f69d21 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f69d25 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f69d3c
        nop 
        public_6f69d30 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f69d30
        public_6f69d3c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f69d45
        mov dword ptr ds : [ecx], eax
        public_6f69d45 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f69d00)
    }
}

#undef public_6f69d16
#undef public_6f69d21
#undef public_6f69d25
#undef public_6f69d30
#undef public_6f69d3c
#undef public_6f69d45
