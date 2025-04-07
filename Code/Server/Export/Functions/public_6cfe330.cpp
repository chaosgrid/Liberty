#include "Server-PCH.h"

PROC_DECLARE(0x6cfe330, internal_6cfe330, public_6cfe330);
extern "C" NAKED register_t __cdecl internal_6cfe330()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call dword ptr ds : [public_6d64514]
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], eax
        mov cl, byte ptr ds : [edi+0x2C]
        pop edi
        mov byte ptr ds : [esi+0x2C], cl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfe330)
    }
}
