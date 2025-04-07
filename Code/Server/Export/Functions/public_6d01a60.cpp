#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee6e0);

PROC_DECLARE(0x6d01a60, internal_6d01a60, public_6d01a60);
extern "C" NAKED register_t __cdecl internal_6d01a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6cee6e0
        mov dword ptr ds : [esi+0x90], 0
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d01a60)
    }
}
