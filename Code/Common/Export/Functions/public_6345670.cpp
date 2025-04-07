#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345670);
CLANG_FORWARD_PROC_SYMBOL(public_6345690);

PROC_DECLARE(0x6345670, internal_6345670, public_6345670);
extern "C" NAKED register_t __cdecl internal_6345670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi], offset public_63a5450
        call public_6345690
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6345670)
    }
}
