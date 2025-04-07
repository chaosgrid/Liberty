#include "Server-PCH.h"

PROC_DECLARE(0x6cffa80, internal_6cffa80, public_6cffa80);
extern "C" NAKED register_t __cdecl internal_6cffa80()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call dword ptr ds : [public_6d64514]
        mov al, byte ptr ds : [edi+0x28]
        pop edi
        mov byte ptr ds : [esi+0x28], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cffa80)
    }
}
