#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346c00);
CLANG_FORWARD_PROC_SYMBOL(public_6346cf0);

PROC_DECLARE(0x6346c00, internal_6346c00, public_6346c00);
extern "C" NAKED register_t __cdecl internal_6346c00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, ss:[esp+4]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6346cf0
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [esi+0x74]
        fstp dword ptr ds : [esi+0x74]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0x78]
        fstp dword ptr ds : [esi+0x78]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x7C]
        fstp dword ptr ds : [esi+0x7C]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+0x84]
        fstp dword ptr ds : [esi+0x84]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x88]
        fstp dword ptr ds : [esi+0x88]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x8C]
        fstp dword ptr ds : [esi+0x8C]
        pop esi
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6346c00)
    }
}
