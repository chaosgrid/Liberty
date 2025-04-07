#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f524e0);

#define public_6f5252b _public_6f5252b

PROC_DECLARE(0x6f52520, internal_6f52520, public_6f52520);
extern "C" NAKED register_t __cdecl internal_6f52520()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        test edx, edx
        jne public_6f5252b
        xor eax, eax
        ret 
        public_6f5252b : nop
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        push eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push ecx
        call public_6f524e0
        add esp, 0x10
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f52520)
    }
}

#undef public_6f5252b
