#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

#define public_622baa5 _public_622baa5

PROC_DECLARE(0x622ba80, internal_622ba80, public_622ba80);
extern "C" NAKED register_t __cdecl internal_622ba80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_622baa5
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call dword ptr ds : [public_624b00c]
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        mov dword ptr ds : [ecx+0x60], eax
        xor eax, eax
        ret 0xC
        public_622baa5 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9e0
        UNREACHABLE_TRAP(0x622ba80)
    }
}

#undef public_622baa5
