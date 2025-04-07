#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f090);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f55010);
CLANG_FORWARD_PROC_SYMBOL(public_6f55040);
CLANG_FORWARD_PROC_SYMBOL(public_6f553e0);

#define public_6f55058 _public_6f55058

PROC_DECLARE(0x6f55040, internal_6f55040, public_6f55040);
extern "C" NAKED register_t __cdecl internal_6f55040()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push ebx
        call public_6f54f10
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6f55058
        pop esi
        pop ebx
        ret 
        public_6f55058 : nop
        push edi
        push esi
        call public_6f553e0
        mov edi, eax
        push esi
        push edi
        push ebx
        call public_6f55010
        dec esi
        push esi
        push edi
        call public_6f4f090
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f55040)
    }
}

#undef public_6f55058
