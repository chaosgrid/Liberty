#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

#define public_62328e5 _public_62328e5

PROC_DECLARE(0x62328c0, internal_62328c0, public_62328c0);
extern "C" NAKED register_t __cdecl internal_62328c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_62328e5
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [public_624b00c]
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        mov dword ptr ds : [ecx+0x60], eax
        xor eax, eax
        ret 0xC
        public_62328e5 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x62328c0)
    }
}

#undef public_62328e5
