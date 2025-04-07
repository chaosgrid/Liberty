#include "Server-PCH.h"

PROC_DECLARE(0x6cff150, internal_6cff150, public_6cff150);
extern "C" NAKED register_t __cdecl internal_6cff150()
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
        pop edi
        mov dword ptr ds : [esi+0x2C], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cff150)
    }
}
