#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62fa090);

PROC_DECLARE(0x62fa090, internal_62fa090, public_62fa090);
extern "C" NAKED register_t __cdecl internal_62fa090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62efff0
        mov dword ptr ds : [esi], offset public_6399d88
        mov dword ptr ds : [esi+0x10], 0x40000000
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62fa090)
    }
}
