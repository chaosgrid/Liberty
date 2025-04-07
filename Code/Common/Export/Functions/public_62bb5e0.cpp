#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_62bb5e0);

PROC_DECLARE(0x62bb5e0, internal_62bb5e0, public_62bb5e0);
extern "C" NAKED register_t __cdecl internal_62bb5e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6285b50
        xor eax, eax
        mov byte ptr ds : [esi+0x10], al
        mov dword ptr ds : [esi+0x14], eax
        mov byte ptr ds : [esi+0x18], al
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi], offset public_639bf7c
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62bb5e0)
    }
}
