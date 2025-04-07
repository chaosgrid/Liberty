#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da380);
CLANG_FORWARD_PROC_SYMBOL(public_62e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_6332d30);

PROC_DECLARE(0x62da380, internal_62da380, public_62da380);
extern "C" NAKED register_t __cdecl internal_62da380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x16C]
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push 0x3F800000
        fstp dword ptr ds : [esi+0x50]
        push ecx
        mov dword ptr ds : [esi+0x14C], eax
        mov dword ptr ds : [esi+0x58], 2
        mov byte ptr ds : [esi+0x6D], 0
        call public_62e5af0
        fst dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x15C]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        call public_62e5ab0
        fstp dword ptr ds : [esi+0x160]
        mov ecx, dword ptr ds : [esi+0x14C]
        add esp, 0x14
        call public_6332d30
        fstp dword ptr ds : [esi+0x164]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62da380)
    }
}
