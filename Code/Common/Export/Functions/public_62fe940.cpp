#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fe940);

PROC_DECLARE(0x62fe940, internal_62fe940, public_62fe940);
extern "C" NAKED register_t __cdecl internal_62fe940()
{
    __asm
    {
        push esi
        mov eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea esi, ds:[eax+0x38C]
        mov ecx, 0x1C
        rep movsd
        mov al, byte ptr ds : [eax+0x28]
        shr al, 1
        pop edi
        and al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62fe940)
    }
}
