#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244360);

PROC_DECLARE(0x6224a40, internal_6224a40, public_6224a40);
extern "C" NAKED register_t __cdecl internal_6224a40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6244360
        xor eax, eax
        mov dword ptr ds : [esi+0xB4], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi], offset public_624dd90
        mov dword ptr ds : [esi+0xBC], offset public_6257a48
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6224a40)
    }
}
