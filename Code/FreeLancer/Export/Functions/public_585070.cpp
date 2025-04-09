#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_585070);

PROC_DECLARE(0x585070, internal_585070, public_585070);
extern "C" NAKED register_t __cdecl internal_585070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x520
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x585070)
    }
}
