#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c5af0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2020);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e60);
CLANG_FORWARD_PROC_SYMBOL(public_62d6750);
CLANG_FORWARD_PROC_SYMBOL(public_62d77d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d8970);
CLANG_FORWARD_PROC_SYMBOL(public_62da500);
CLANG_FORWARD_JUMP_SYMBOL(public_6394b4f);

PROC_DECLARE(0x62c5af0, internal_62c5af0, public_62c5af0);
extern "C" NAKED register_t __cdecl internal_62c5af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394b4f @0x62c5af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394b4f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62d2020
        xor edi, edi
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0x14], edi
        call public_62d4e60
        lea ecx, ds:[esi+0xA4]
        mov byte ptr ss : [esp+0x14], 1
        call public_62d6750
        lea ecx, ds:[esi+0x164]
        mov byte ptr ss : [esp+0x14], 2
        call public_62da500
        lea ecx, ds:[esi+0x178]
        call public_62d77d0
        lea ecx, ds:[esi+0x258]
        mov byte ptr ss : [esp+0x14], 3
        call public_62d8970
        mov ecx, 0x3FC00000
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x314], ecx
        mov dword ptr ds : [esi+0x318], edi
        mov dword ptr ds : [esi+0x31C], edi
        mov dword ptr ds : [esi+0x320], edi
        mov dword ptr ds : [esi+0x338], edi
        mov dword ptr ds : [esi+0x340], edi
        mov dword ptr ds : [esi+0x348], edi
        mov dword ptr ds : [esi+0x328], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x34C], eax
        mov dword ptr ds : [esi+0x350], eax
        mov dword ptr ds : [esi], offset public_639f564
        mov dword ptr ds : [esi+0x324], 0x43FA0000
        mov dword ptr ds : [esi+0x32C], 0x42C80000
        mov dword ptr ds : [esi+0x330], 0x40A00000
        mov dword ptr ds : [esi+0x334], 0x40400000
        mov dword ptr ds : [esi+0x33C], 0x40C00000
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62c5af0)
    }
}
