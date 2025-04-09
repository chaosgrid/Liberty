#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595f30);

PROC_DECLARE(0x595f30, internal_595f30, public_595f30);
extern "C" NAKED register_t __cdecl internal_595f30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x40C], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x410], edx
        ret 8
        UNREACHABLE_TRAP(0x595f30)
    }
}
