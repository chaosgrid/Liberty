#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_466770);
CLANG_FORWARD_PROC_SYMBOL(public_46b6a0);

PROC_DECLARE(0x46b6a0, internal_46b6a0, public_46b6a0);
extern "C" NAKED register_t __cdecl internal_46b6a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_66da70]
        push eax
        call public_466770
        ret 
        UNREACHABLE_TRAP(0x46b6a0)
    }
}
