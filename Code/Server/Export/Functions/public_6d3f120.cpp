#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3f120);

#define public_6d3f136 _public_6d3f136
#define public_6d3f141 _public_6d3f141
#define public_6d3f145 _public_6d3f145
#define public_6d3f150 _public_6d3f150
#define public_6d3f15c _public_6d3f15c
#define public_6d3f165 _public_6d3f165

PROC_DECLARE(0x6d3f120, internal_6d3f120, public_6d3f120);
extern "C" NAKED register_t __cdecl internal_6d3f120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x29]
        test bl, bl
        jne public_6d3f145
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_6d3f141
        public_6d3f136 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_6d3f136
        public_6d3f141 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6d3f145 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6d3f15c
        nop 
        public_6d3f150 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6d3f150
        public_6d3f15c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6d3f165
        mov dword ptr ds : [ecx], eax
        public_6d3f165 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d3f120)
    }
}

#undef public_6d3f136
#undef public_6d3f141
#undef public_6d3f145
#undef public_6d3f150
#undef public_6d3f15c
#undef public_6d3f165
