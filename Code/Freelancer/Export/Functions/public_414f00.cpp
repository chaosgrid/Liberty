#include "Freelancer-PCH.h"

PROC_DECLARE(0x414f00, internal_414f00, public_414f00);
extern "C" NAKED register_t __cdecl internal_414f00()
{
    __asm
    {
        movsx eax, byte ptr ss : [esp+0xC]
        sub esp, 0xC
        push esi
        push eax
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
/*FIXUP push offset public_5c8d1c @0x414f11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8d1c
        lea edx, ss:[esp+0x10]
        push 0xA
        push edx
        call dword ptr ds : [public_5c71e8]
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x28]
        add esp, 0xC
        lea ecx, ss:[esp+0xC]
        fstp qword ptr ss : [esp]
        push ecx
        push esi
        call dword ptr ds : [eax+0x30]
        add esp, 0x10
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x414f00)
    }
}
