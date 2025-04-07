#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4021a0);

PROC_DECLARE(0x4021a0, internal_4021a0, public_4021a0);
extern "C" NAKED register_t __cdecl internal_4021a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x748], eax
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x4021a0)
    }
}
