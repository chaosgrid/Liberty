#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

#define public_6204ab6 _public_6204ab6

PROC_DECLARE(0x6204a90, internal_6204a90, public_6204a90);
extern "C" NAKED register_t __cdecl internal_6204a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xBA0B3BB
        jne public_6204ab6
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6204ab6 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623fb50
        UNREACHABLE_TRAP(0x6204a90)
    }
}

#undef public_6204ab6
