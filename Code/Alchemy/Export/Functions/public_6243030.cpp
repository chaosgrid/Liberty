#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6243280);
CLANG_FORWARD_PROC_SYMBOL(public_6246780);

PROC_DECLARE(0x6243030, internal_6243030, public_6243030);
extern "C" NAKED register_t __cdecl internal_6243030()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, esi
        call public_6243280
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+8], ecx
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x14]
        call public_6246780
        pop esi
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6243030)
    }
}
