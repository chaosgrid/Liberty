#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb79a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6eb79a0, internal_6eb79a0, public_6eb79a0);
extern "C" NAKED register_t __cdecl internal_6eb79a0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x2C
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6eb79a0)
    }
}
