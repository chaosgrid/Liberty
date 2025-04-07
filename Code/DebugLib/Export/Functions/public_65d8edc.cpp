#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8edc);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f4e);
CLANG_FORWARD_PROC_SYMBOL(public_65dce16);
CLANG_FORWARD_PROC_SYMBOL(public_65dd253);

#define public_65d8f2c _public_65d8f2c

PROC_DECLARE(0x65d8edc, internal_65d8edc, public_65d8edc);
extern "C" NAKED register_t __cdecl internal_65d8edc()
{
    __asm
    {
        push esi
        call public_65dce16
        call dword ptr ds : [public_65e106c]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [public_65e3440], eax
        je public_65d8f2c
        push 0x74
        push 1
        call public_65dd253
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        je public_65d8f2c
        push esi
        push dword ptr ds : [public_65e3440]
        call dword ptr ds : [public_65e1068]
        test eax, eax
        je public_65d8f2c
        push esi
        call public_65d8f4e
        pop ecx
        call dword ptr ds : [public_65e1064]
        or dword ptr ds : [esi+4], 0xFFFFFFFF
        push 1
        mov dword ptr ds : [esi], eax
        pop eax
        pop esi
        ret 
        public_65d8f2c : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d8edc)
    }
}

#undef public_65d8f2c
