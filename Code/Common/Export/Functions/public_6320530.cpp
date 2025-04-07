#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320530);
CLANG_FORWARD_PROC_SYMBOL(public_63241c0);

PROC_DECLARE(0x6320530, internal_6320530, public_6320530);
extern "C" NAKED register_t __cdecl internal_6320530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_64018bc]
        mov ecx, dword ptr ds : [public_64018b8]
        push 0
        push eax
        push ecx
        mov byte ptr ds : [public_6401934], 0
        call public_63241c0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6320530)
    }
}
