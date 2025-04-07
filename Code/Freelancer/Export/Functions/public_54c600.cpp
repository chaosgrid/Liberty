#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54c600);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x54c600, internal_54c600, public_54c600);
extern "C" NAKED register_t __cdecl internal_54c600()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        push edi
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0x60]
        xor edi, edi
        push ecx
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x44], edi
        call public_5b7e1d
        add esp, 8
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x58], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x54c600)
    }
}
