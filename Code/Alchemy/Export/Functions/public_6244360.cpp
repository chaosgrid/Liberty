#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb80);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);

PROC_DECLARE(0x6244360, internal_6244360, public_6244360);
extern "C" NAKED register_t __cdecl internal_6244360()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        call public_623fb80
        mov al, byte ptr ss : [esp+7]
        mov byte ptr ds : [esi+0x98], al
        xor eax, eax
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xA4], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi], offset public_624fbd0
        mov byte ptr ds : [esi+0x94], 1
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6244360)
    }
}
