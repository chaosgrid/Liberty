#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f9fd0);

PROC_DECLARE(0x62f9fd0, internal_62f9fd0, public_62f9fd0);
extern "C" NAKED register_t __cdecl internal_62f9fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62efff0
        mov dword ptr ds : [esi], offset public_6399d6c
        mov dword ptr ds : [esi+0x10], 0x20000000
        mov dword ptr ds : [esi+0x5C], 0x41C80000
        mov dword ptr ds : [esi+0x60], 0
        mov dword ptr ds : [esi+0x64], 0x447A0000
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f9fd0)
    }
}
