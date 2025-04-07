#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627a70);

#define public_6627a84 _public_6627a84
#define public_6627a8e _public_6627a8e
#define public_6627a92 _public_6627a92
#define public_6627a97 _public_6627a97

PROC_DECLARE(0x6627a70, internal_6627a70, public_6627a70);
extern "C" NAKED register_t __cdecl internal_6627a70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ecx
        je public_6627a97
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6627a84 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jge public_6627a8e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6627a92
        public_6627a8e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6627a92 : nop
        cmp edx, ecx
        jne public_6627a84
        pop esi
        public_6627a97 : nop
        ret 4
        UNREACHABLE_TRAP(0x6627a70)
    }
}

#undef public_6627a84
#undef public_6627a8e
#undef public_6627a92
#undef public_6627a97
