#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cda0);

PROC_DECLARE(0x6f2d020, internal_6f2d020, public_6f2d020);
extern "C" NAKED register_t __cdecl internal_6f2d020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0xC]
        sub esp, 0x200
        push esi
        sub esp, 0x20
        fstp qword ptr ss : [esp+0x18]
        mov esi, ecx
        fld dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x24]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x228]
        fstp qword ptr ss : [esp]
        push eax
        push ecx
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x28
        lea edx, ss:[esp+4]
        push edx
        mov ecx, esi
        call public_6f2cda0
        pop esi
        add esp, 0x200
        ret 8
        UNREACHABLE_TRAP(0x6f2d020)
    }
}
