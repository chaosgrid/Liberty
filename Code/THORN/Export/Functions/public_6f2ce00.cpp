#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2cda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ce00);

PROC_DECLARE(0x6f2ce00, internal_6f2ce00, public_6f2ce00);
extern "C" NAKED register_t __cdecl internal_6f2ce00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x200
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x208]
        push eax
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        call dword ptr ds : [public_6f5a06c]
        add esp, 0xC
        lea eax, ss:[esp+4]
        push eax
        mov ecx, esi
        call public_6f2cda0
        pop esi
        add esp, 0x200
        ret 8
        UNREACHABLE_TRAP(0x6f2ce00)
    }
}
