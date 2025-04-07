#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ad30);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

PROC_DECLARE(0x6d1ad30, internal_6d1ad30, public_6d1ad30);
extern "C" NAKED register_t __cdecl internal_6d1ad30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push 0xC
        mov byte ptr ds : [esi], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1ad30)
    }
}
