#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed27d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3350);

#define public_6ed27e3 _public_6ed27e3
#define public_6ed27f5 _public_6ed27f5

PROC_DECLARE(0x6ed27d0, internal_6ed27d0, public_6ed27d0);
extern "C" NAKED register_t __cdecl internal_6ed27d0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6ed27f5
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6ed27e3 : nop
        push ebx
        push esi
        call public_6ed3350
        add esp, 8
        add esi, 0x3C
        dec edi
        jne public_6ed27e3
        pop esi
        pop ebx
        public_6ed27f5 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6ed27d0)
    }
}

#undef public_6ed27e3
#undef public_6ed27f5
