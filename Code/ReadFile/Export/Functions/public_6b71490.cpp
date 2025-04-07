#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71490);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

PROC_DECLARE(0x6b71490, internal_6b71490, public_6b71490);
extern "C" NAKED register_t __cdecl internal_6b71490()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0xC
        mov byte ptr ds : [esi], al
        call public_6b782ac
        add esp, 4
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b71490)
    }
}
