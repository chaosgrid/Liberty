#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cce0);

PROC_DECLARE(0x6f4ccc0, internal_6f4ccc0, public_6f4ccc0);
extern "C" NAKED register_t __cdecl internal_6f4ccc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        push edx
        dec ecx
        push ecx
        push edx
        call public_6f4cce0
        add esp, 0xC
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4ccc0)
    }
}
