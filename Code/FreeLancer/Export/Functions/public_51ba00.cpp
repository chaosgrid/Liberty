#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51ba00, internal_51ba00, public_51ba00);
extern "C" NAKED register_t __cdecl internal_51ba00()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x51ba00)
    }
}
