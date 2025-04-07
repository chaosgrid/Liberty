#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6277c10);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

PROC_DECLARE(0x6277c10, internal_6277c10, public_6277c10);
extern "C" NAKED register_t __cdecl internal_6277c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], eax
        push edx
        lea eax, ds:[esi+0xC]
        push eax
        mov dword ptr ds : [esi+4], ecx
        call public_6334400
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea edx, ds:[esi+0x10]
        push edx
        call public_6334400
        add esp, 0x10
        mov byte ptr ds : [esi+8], 0
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6277c10)
    }
}
