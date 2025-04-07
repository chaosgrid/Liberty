#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);

PROC_DECLARE(0x6286e40, internal_6286e40, public_6286e40);
extern "C" NAKED register_t __cdecl internal_6286e40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6285b50
        mov byte ptr ds : [esi+0x10], 0
        mov dword ptr ds : [esi], offset public_639be28
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6286e40)
    }
}
