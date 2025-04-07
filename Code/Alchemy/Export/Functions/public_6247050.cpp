#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6247050);
CLANG_FORWARD_PROC_SYMBOL(public_6247110);

#define public_6247063 _public_6247063
#define public_6247075 _public_6247075

PROC_DECLARE(0x6247050, internal_6247050, public_6247050);
extern "C" NAKED register_t __cdecl internal_6247050()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6247075
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6247063 : nop
        push ebx
        push esi
        call public_6247110
        add esp, 8
        add esi, 0x10
        dec edi
        jne public_6247063
        pop esi
        pop ebx
        public_6247075 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6247050)
    }
}

#undef public_6247063
#undef public_6247075
