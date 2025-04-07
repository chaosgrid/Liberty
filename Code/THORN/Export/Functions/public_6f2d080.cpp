#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d080);

PROC_DECLARE(0x6f2d080, internal_6f2d080, public_6f2d080);
extern "C" NAKED register_t __cdecl internal_6f2d080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        sub esp, 0x200
        push esi
        sub esp, 0x18
        fstp qword ptr ss : [esp+0x10]
        mov esi, ecx
        fld dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x1C]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x220]
        fstp qword ptr ss : [esp]
        push eax
        push ecx
        call dword ptr ds : [public_6f5a06c]
        add esp, 0x20
        lea edx, ss:[esp+4]
        push edx
        mov ecx, esi
        call public_6f2cda0
        pop esi
        add esp, 0x200
        ret 8
        UNREACHABLE_TRAP(0x6f2d080)
    }
}
