#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73f20);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

PROC_DECLARE(0x6b73f20, internal_6b73f20, public_6b73f20);
extern "C" NAKED register_t __cdecl internal_6b73f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push 0x14
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], cl
        call public_6b782ac
        add esp, 4
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b73f20)
    }
}
