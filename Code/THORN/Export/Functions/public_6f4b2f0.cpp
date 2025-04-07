#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d040);

PROC_DECLARE(0x6f4b2f0, internal_6f4b2f0, public_6f4b2f0);
extern "C" NAKED register_t __cdecl internal_6f4b2f0()
{
    __asm
    {
        push 3
        call public_6f4aff0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        sub ecx, 0x30
        push ecx
        call public_6f4d040
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0xFFFFFFE0
        add esp, 8
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4b2f0)
    }
}
