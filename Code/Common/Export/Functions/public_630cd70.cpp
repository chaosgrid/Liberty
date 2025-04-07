#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cd70);

PROC_DECLARE(0x630cd70, internal_630cd70, public_630cd70);
extern "C" NAKED register_t __cdecl internal_630cd70()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_6399248]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        push 2
        push 0
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0x80]
        push ecx
        call dword ptr ds : [public_639924c]
        mov edx, dword ptr ds : [esi+0x80]
        push 0
        push 0
        push edx
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x84], 0
        call edi
        add esp, 0x1C
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x630cd70)
    }
}
