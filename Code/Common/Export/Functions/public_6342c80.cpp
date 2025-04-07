#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342c80);
CLANG_FORWARD_PROC_SYMBOL(public_6349020);
CLANG_FORWARD_JUMP_SYMBOL(public_6397958);

PROC_DECLARE(0x6342c80, internal_6342c80, public_6342c80);
extern "C" NAKED register_t __cdecl internal_6342c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397958 @0x6342c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397958
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_63a53b4
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x18]
        fld dword ptr ds : [eax+0x10]
        mov edx, ecx
        mov dword ptr ds : [esi+0x2C], edx
        fstp dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ds : [esi+0x28]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ds : [esi+0x34]
        fstp dword ptr ds : [esi+0x38]
        fstp dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x44], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x48], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x4C], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x50], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [esi+0x54], ecx
        mov edx, dword ptr ds : [eax+0x98]
        mov dword ptr ds : [esi+0x58], eax
        mov eax, edx
        push eax
        push esi
        mov dword ptr ds : [esi+0x5C], edx
        call public_6349020
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 8
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6342c80)
    }
}
