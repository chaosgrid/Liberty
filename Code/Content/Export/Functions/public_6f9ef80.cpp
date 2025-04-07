#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9ef80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f9ef80, internal_6f9ef80, public_6f9ef80);
extern "C" NAKED register_t __cdecl internal_6f9ef80()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x14
        mov byte ptr ds : [esi+4], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], 0
        add esp, 4
        mov dword ptr ds : [esi], offset public_6fbd50c
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f9ef80)
    }
}
