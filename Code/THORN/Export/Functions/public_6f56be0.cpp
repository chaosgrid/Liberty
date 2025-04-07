#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f55490);
CLANG_FORWARD_PROC_SYMBOL(public_6f56b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f56c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f56c0f _public_6f56c0f
#define public_6f56c20 _public_6f56c20

PROC_DECLARE(0x6f56be0, internal_6f56be0, public_6f56be0);
extern "C" NAKED register_t __cdecl internal_6f56be0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
        push 1
        call public_6f4f5e0
        push 2
        mov edi, eax
        call public_6f4f660
        add esp, 0xC
        call public_6f57f16
        mov esi, eax
        call public_6f55490
        mov ecx, esi
        dec esi
        test ecx, ecx
        jle public_6f56c20
        inc esi
        public_6f56c0f : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        push edi
        call public_6f56c30
        add esp, 8
        dec esi
        jne public_6f56c0f
        public_6f56c20 : nop
        call public_6f56b70
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f56be0)
    }
}

#undef public_6f56c0f
#undef public_6f56c20
