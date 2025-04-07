#include "Server-PCH.h"

PROC_DECLARE(0x6cff550, internal_6cff550, public_6cff550);
extern "C" NAKED register_t __cdecl internal_6cff550()
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
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [esi+0x30], edx
        mov eax, dword ptr ds : [edi+0x34]
        mov dword ptr ds : [esi+0x34], eax
        add edi, 0x38
        mov ecx, dword ptr ds : [edi]
        add esi, 0x38
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cff550)
    }
}
