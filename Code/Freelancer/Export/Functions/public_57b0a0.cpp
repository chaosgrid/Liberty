#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b0a0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

PROC_DECLARE(0x57b0a0, internal_57b0a0, public_57b0a0);
extern "C" NAKED register_t __cdecl internal_57b0a0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x47C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x480]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x484]
        fadd dword ptr ds : [eax+8]
        lea eax, ss:[esp]
        push eax
        fstp dword ptr ss : [esp+0xC]
        call public_5a0880
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x57b0a0)
    }
}
