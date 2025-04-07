#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa50);

#define public_6f1fa63 _public_6f1fa63
#define public_6f1fa78 _public_6f1fa78

PROC_DECLARE(0x6f1fa50, internal_6f1fa50, public_6f1fa50);
extern "C" NAKED register_t __cdecl internal_6f1fa50()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f1fa78
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f1fa63 : nop
        push ebx
        push esi
        call public_6ed2a60
        add esp, 8
        add esi, 0x88
        dec edi
        jne public_6f1fa63
        pop esi
        pop ebx
        public_6f1fa78 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f1fa50)
    }
}

#undef public_6f1fa63
#undef public_6f1fa78
