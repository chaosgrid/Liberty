#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711a50);

PROC_DECLARE(0x6711a50, internal_6711a50, public_6711a50);
extern "C" NAKED register_t __cdecl internal_6711a50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6711a50)
    }
}
