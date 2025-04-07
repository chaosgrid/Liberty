#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6353560);
CLANG_FORWARD_PROC_SYMBOL(public_6353680);

PROC_DECLARE(0x6353680, internal_6353680, public_6353680);
extern "C" NAKED register_t __cdecl internal_6353680()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [0], 0
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+0x14]
        xor edx, 0x100
        push ecx
        mov dword ptr ds : [eax+0x14], edx
        call public_6353560
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6353680)
    }
}
