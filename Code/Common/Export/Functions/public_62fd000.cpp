#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd000);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);

#define public_62fd013 _public_62fd013
#define public_62fd025 _public_62fd025

PROC_DECLARE(0x62fd000, internal_62fd000, public_62fd000);
extern "C" NAKED register_t __cdecl internal_62fd000()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_62fd025
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_62fd013 : nop
        push ebx
        push esi
        call public_630cd00
        add esp, 8
        add esi, 4
        dec edi
        jne public_62fd013
        pop esi
        pop ebx
        public_62fd025 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x62fd000)
    }
}

#undef public_62fd013
#undef public_62fd025
