#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68021e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802260);
CLANG_FORWARD_PROC_SYMBOL(public_68022b0);

#define public_68022bd _public_68022bd

PROC_DECLARE(0x68022b0, internal_68022b0, public_68022b0);
extern "C" NAKED register_t __cdecl internal_68022b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jne public_68022bd
        jmp public_68021e0
        public_68022bd : nop
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        call public_6802260
        add esp, 8
        pop edi
        ret 
        UNREACHABLE_TRAP(0x68022b0)
    }
}

#undef public_68022bd
