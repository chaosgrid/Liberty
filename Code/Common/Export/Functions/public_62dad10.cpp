#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62daa30);

PROC_DECLARE(0x62dad10, internal_62dad10, public_62dad10);
extern "C" NAKED register_t __cdecl internal_62dad10()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], offset public_639e0d0
        mov dword ptr ds : [esi+8], 0
        call public_62daa30
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi], offset public_639e0fc
        mov byte ptr ds : [esi+0x18], 0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62dad10)
    }
}
