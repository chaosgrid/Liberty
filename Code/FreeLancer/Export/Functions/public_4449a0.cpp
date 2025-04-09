#include "Freelancer-PCH.h"

PROC_DECLARE(0x4449a0, internal_4449a0, public_4449a0);
extern "C" NAKED register_t __cdecl internal_4449a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x1C], eax
        mov byte ptr ds : [esi+0x378], 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4449a0)
    }
}
