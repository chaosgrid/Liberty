#include "Freelancer-PCH.h"

PROC_DECLARE(0x52f400, internal_52f400, public_52f400);
extern "C" NAKED register_t __cdecl internal_52f400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [ecx]
        sub esp, 0xC
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x52f400)
    }
}
