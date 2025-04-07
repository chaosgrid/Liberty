#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6cd0);
CLANG_FORWARD_PROC_SYMBOL(public_4d6f10);

PROC_DECLARE(0x4d6cd0, internal_4d6cd0, public_4d6cd0);
extern "C" NAKED register_t __cdecl internal_4d6cd0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp], edx
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [public_5d8154]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5d8154]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5d8154]
        lea edx, ss:[esp+0xC]
        push edx
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x18]
        call public_4d6f10
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4d6cd0)
    }
}
