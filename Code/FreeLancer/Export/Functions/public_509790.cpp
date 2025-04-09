#include "Freelancer-PCH.h"

PROC_DECLARE(0x509790, internal_509790, public_509790);
extern "C" NAKED register_t __cdecl internal_509790()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x509790)
    }
}
