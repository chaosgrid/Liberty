#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b740);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);

#define public_6f4b79d _public_6f4b79d

PROC_DECLARE(0x6f4b790, internal_6f4b790, public_6f4b790);
extern "C" NAKED register_t __cdecl internal_6f4b790()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jne public_6f4b79d
        jmp public_6f4b6c0
        public_6f4b79d : nop
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        call public_6f4b740
        add esp, 8
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4b790)
    }
}

#undef public_6f4b79d
