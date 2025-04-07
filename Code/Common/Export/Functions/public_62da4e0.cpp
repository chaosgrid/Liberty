#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da4e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);

PROC_DECLARE(0x62da4e0, internal_62da4e0, public_62da4e0);
extern "C" NAKED register_t __cdecl internal_62da4e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push 1
        push eax
        push ecx
        call public_62e5b70
        fstp dword ptr ds : [esi+0x154]
        add esp, 0xC
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62da4e0)
    }
}
