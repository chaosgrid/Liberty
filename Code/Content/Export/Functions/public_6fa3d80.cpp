#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3d80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4f70);

#define public_6fa3d93 _public_6fa3d93
#define public_6fa3da5 _public_6fa3da5

PROC_DECLARE(0x6fa3d80, internal_6fa3d80, public_6fa3d80);
extern "C" NAKED register_t __cdecl internal_6fa3d80()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6fa3da5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6fa3d93 : nop
        push ebx
        push esi
        call public_6fa4f70
        add esp, 8
        add esi, 0x14
        dec edi
        jne public_6fa3d93
        pop esi
        pop ebx
        public_6fa3da5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6fa3d80)
    }
}

#undef public_6fa3d93
#undef public_6fa3da5
