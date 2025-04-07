#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38af0);

#define public_6f38b03 _public_6f38b03
#define public_6f38b15 _public_6f38b15

PROC_DECLARE(0x6f38af0, internal_6f38af0, public_6f38af0);
extern "C" NAKED register_t __cdecl internal_6f38af0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f38b15
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f38b03 : nop
        push ebx
        push esi
        call public_6f310f0
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_6f38b03
        pop esi
        pop ebx
        public_6f38b15 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f38af0)
    }
}

#undef public_6f38b03
#undef public_6f38b15
