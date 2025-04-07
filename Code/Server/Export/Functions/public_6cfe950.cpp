#include "Server-PCH.h"

PROC_DECLARE(0x6cfe950, internal_6cfe950, public_6cfe950);
extern "C" NAKED register_t __cdecl internal_6cfe950()
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
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], ecx
        mov dl, byte ptr ds : [edi+0x30]
        pop edi
        mov byte ptr ds : [esi+0x30], dl
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfe950)
    }
}
