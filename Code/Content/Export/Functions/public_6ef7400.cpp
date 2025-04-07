#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7400);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8110);

#define public_6ef7413 _public_6ef7413
#define public_6ef7428 _public_6ef7428

PROC_DECLARE(0x6ef7400, internal_6ef7400, public_6ef7400);
extern "C" NAKED register_t __cdecl internal_6ef7400()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6ef7428
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6ef7413 : nop
        push ebx
        push esi
        call public_6ef8110
        add esp, 8
        add esi, 0x80
        dec edi
        jne public_6ef7413
        pop esi
        pop ebx
        public_6ef7428 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6ef7400)
    }
}

#undef public_6ef7413
#undef public_6ef7428
