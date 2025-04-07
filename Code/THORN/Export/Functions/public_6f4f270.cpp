#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

PROC_DECLARE(0x6f4f270, internal_6f4f270, public_6f4f270);
extern "C" NAKED register_t __cdecl internal_6f4f270()
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
        dec ecx
        push ecx
        push edx
        call public_6f4f090
        add esp, 8
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f4f270)
    }
}
