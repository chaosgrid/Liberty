#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f4f0);

PROC_DECLARE(0x6f4f4f0, internal_6f4f4f0, public_6f4f4f0);
extern "C" NAKED register_t __cdecl internal_6f4f4f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4f270
        mov edx, dword ptr ds : [eax+0x10]
        xor ecx, ecx
        add esp, 4
        cmp edx, 0xFFFFFFFA
        setne cl
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6f4f4f0)
    }
}
