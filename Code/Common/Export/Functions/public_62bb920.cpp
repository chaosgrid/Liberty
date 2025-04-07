#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_62bb920);

PROC_DECLARE(0x62bb920, internal_62bb920, public_62bb920);
extern "C" NAKED register_t __cdecl internal_62bb920()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6285b50
        xor eax, eax
        mov byte ptr ds : [esi+0x10], al
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi], offset public_639bfdc
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62bb920)
    }
}
