#include "Content-PCH.h"

PROC_DECLARE(0x6ec5b00, internal_6ec5b00, public_6ec5b00);
extern "C" NAKED register_t __cdecl internal_6ec5b00()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call dword ptr ds : [public_6fb3040]
        pop edi
        mov byte ptr ds : [esi+0x10], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec5b00)
    }
}
