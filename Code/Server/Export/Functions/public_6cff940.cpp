#include "Server-PCH.h"

PROC_DECLARE(0x6cff940, internal_6cff940, public_6cff940);
extern "C" NAKED register_t __cdecl internal_6cff940()
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
        mov ecx, dword ptr ds : [edi+0x44]
        mov dword ptr ds : [esi+0x44], ecx
        mov edx, dword ptr ds : [edi+0x48]
        mov dword ptr ds : [esi+0x48], edx
        mov al, byte ptr ds : [edi+0x4C]
        pop edi
        mov byte ptr ds : [esi+0x4C], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cff940)
    }
}
