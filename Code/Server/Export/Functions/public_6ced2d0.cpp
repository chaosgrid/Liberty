#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced2d0);

PROC_DECLARE(0x6ced2d0, internal_6ced2d0, public_6ced2d0);
extern "C" NAKED register_t __cdecl internal_6ced2d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], offset public_6d65744
        call dword ptr ds : [public_6d6432c]
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ced2d0)
    }
}
