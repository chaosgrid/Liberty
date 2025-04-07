#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

#define public_622b7d6 _public_622b7d6

PROC_DECLARE(0x622b7b0, internal_622b7b0, public_622b7b0);
extern "C" NAKED register_t __cdecl internal_622b7b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF0004D58
        jne public_622b7d6
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622b7d6 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623fb50
        UNREACHABLE_TRAP(0x622b7b0)
    }
}

#undef public_622b7d6
