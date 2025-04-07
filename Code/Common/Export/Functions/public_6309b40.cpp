#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309b40);

PROC_DECLARE(0x6309b40, internal_6309b40, public_6309b40);
extern "C" NAKED register_t __cdecl internal_6309b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], edx
        ret 4
        UNREACHABLE_TRAP(0x6309b40)
    }
}
