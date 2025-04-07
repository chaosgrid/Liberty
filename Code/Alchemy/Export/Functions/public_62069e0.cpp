#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206850);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);

#define public_6206a0c _public_6206a0c

PROC_DECLARE(0x62069e0, internal_62069e0, public_62069e0);
extern "C" NAKED register_t __cdecl internal_62069e0()
{
    __asm
    {
        mov ecx, offset public_625792c
        call public_6241070
        test eax, eax
        je public_6206a0c
        mov eax, dword ptr ds : [public_62578e8]
        mov ecx, dword ptr ss : [esp+4]
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        call public_6206850
        mov ecx, offset public_625792c
        call public_6241180
        public_6206a0c : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62069e0)
    }
}

#undef public_6206a0c
