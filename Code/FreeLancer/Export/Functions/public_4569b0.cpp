#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4569b0);

PROC_DECLARE(0x4569b0, internal_4569b0, public_4569b0);
extern "C" NAKED register_t __cdecl internal_4569b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, eax
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x1C], 0
        mov byte ptr ds : [ecx+0x20], 1
        ret 4
        UNREACHABLE_TRAP(0x4569b0)
    }
}
