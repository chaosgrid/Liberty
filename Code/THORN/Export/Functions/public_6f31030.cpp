#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31030);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

PROC_DECLARE(0x6f31030, internal_6f31030, public_6f31030);
extern "C" NAKED register_t __cdecl internal_6f31030()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x1C
        mov byte ptr ds : [esi], al
        call public_6f57e9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f31030)
    }
}
