#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_522850);

PROC_DECLARE(0x51bdf0, internal_51bdf0, public_51bdf0);
extern "C" NAKED register_t __cdecl internal_51bdf0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        push edx
        call public_522850
        ret 4
        UNREACHABLE_TRAP(0x51bdf0)
    }
}
