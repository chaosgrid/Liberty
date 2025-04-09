#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_575920);
CLANG_FORWARD_PROC_SYMBOL(public_575b80);

#define public_575933 _public_575933
#define public_575945 _public_575945

PROC_DECLARE(0x575920, internal_575920, public_575920);
extern "C" NAKED register_t __cdecl internal_575920()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_575945
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_575933 : nop
        push ebx
        push esi
        call public_575b80
        add esp, 8
        add esi, 0x24
        dec edi
        jne public_575933
        pop esi
        pop ebx
        public_575945 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x575920)
    }
}

#undef public_575933
#undef public_575945
