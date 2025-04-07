#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d7610);
CLANG_FORWARD_PROC_SYMBOL(public_62e5ba0);

PROC_DECLARE(0x62d7610, internal_62d7610, public_62d7610);
extern "C" NAKED register_t __cdecl internal_62d7610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        mov ecx, eax
        push ecx
        push edx
        mov dword ptr ds : [esi+0x90], eax
        call public_62e5ba0
        fstp dword ptr ds : [esi+0x94]
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62d7610)
    }
}
