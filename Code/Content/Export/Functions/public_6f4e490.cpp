#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e490);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e970);

#define public_6f4e4a3 _public_6f4e4a3
#define public_6f4e4b5 _public_6f4e4b5

PROC_DECLARE(0x6f4e490, internal_6f4e490, public_6f4e490);
extern "C" NAKED register_t __cdecl internal_6f4e490()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f4e4b5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f4e4a3 : nop
        push ebx
        push esi
        call public_6f4e970
        add esp, 8
        add esi, 0x10
        dec edi
        jne public_6f4e4a3
        pop esi
        pop ebx
        public_6f4e4b5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f4e490)
    }
}

#undef public_6f4e4a3
#undef public_6f4e4b5
