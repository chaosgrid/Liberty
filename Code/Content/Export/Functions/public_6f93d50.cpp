#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f945f0);

#define public_6f93d63 _public_6f93d63
#define public_6f93d75 _public_6f93d75

PROC_DECLARE(0x6f93d50, internal_6f93d50, public_6f93d50);
extern "C" NAKED register_t __cdecl internal_6f93d50()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6f93d75
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6f93d63 : nop
        push ebx
        push esi
        call public_6f945f0
        add esp, 8
        add esi, 0x68
        dec edi
        jne public_6f93d63
        pop esi
        pop ebx
        public_6f93d75 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f93d50)
    }
}

#undef public_6f93d63
#undef public_6f93d75
