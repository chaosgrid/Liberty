#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac9e0);
CLANG_FORWARD_PROC_SYMBOL(public_62afa90);

PROC_DECLARE(0x62ac9e0, internal_62ac9e0, public_62ac9e0);
extern "C" NAKED register_t __cdecl internal_62ac9e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62afa90
        mov dword ptr ds : [esi], offset public_639e45c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ac9e0)
    }
}
