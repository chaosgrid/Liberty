#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec54b0);

#define public_6ec54c4 _public_6ec54c4
#define public_6ec54ce _public_6ec54ce
#define public_6ec54d2 _public_6ec54d2
#define public_6ec54d7 _public_6ec54d7

PROC_DECLARE(0x6ec54b0, internal_6ec54b0, public_6ec54b0);
extern "C" NAKED register_t __cdecl internal_6ec54b0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6ec54d7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6ec54c4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_6ec54ce
        mov eax, dword ptr ds : [eax+8]
        jmp public_6ec54d2
        public_6ec54ce : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6ec54d2 : nop
        cmp eax, ecx
        jne public_6ec54c4
        pop esi
        public_6ec54d7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6ec54b0)
    }
}

#undef public_6ec54c4
#undef public_6ec54ce
#undef public_6ec54d2
#undef public_6ec54d7
