#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c020);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f760);

#define public_6f4f773 _public_6f4f773
#define public_6f4f790 _public_6f4f790

PROC_DECLARE(0x6f4f760, internal_6f4f760, public_6f4f760);
extern "C" NAKED register_t __cdecl internal_6f4f760()
{
    __asm
    {
        push edi
        call public_6f4c020
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jle public_6f4f790
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        public_6f4f773 : nop
        mov eax, dword ptr ds : [esi+4]
        push 0
        push eax
        call public_6f4b7c0
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_6f4b3b0
        add esp, 0xC
        add esi, 8
        dec edi
        jne public_6f4f773
        pop esi
        public_6f4f790 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4f760)
    }
}

#undef public_6f4f773
#undef public_6f4f790
