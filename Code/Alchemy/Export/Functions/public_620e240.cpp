#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206850);
CLANG_FORWARD_PROC_SYMBOL(public_620e240);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);

#define public_620e26f _public_620e26f

PROC_DECLARE(0x620e240, internal_620e240, public_620e240);
extern "C" NAKED register_t __cdecl internal_620e240()
{
    __asm
    {
        mov ecx, offset public_625792c
        call public_6241070
        test eax, eax
        je public_620e26f
        mov eax, dword ptr ds : [public_62578e8]
        inc eax
        mov dword ptr ds : [public_62578e8], eax
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0xC]
        call public_6206850
        mov ecx, offset public_625792c
        call public_6241180
        public_620e26f : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x620e240)
    }
}

#undef public_620e26f
