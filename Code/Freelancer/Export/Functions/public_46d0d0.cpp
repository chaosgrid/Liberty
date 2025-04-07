#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d0d0);

PROC_DECLARE(0x46d0d0, internal_46d0d0, public_46d0d0);
extern "C" NAKED register_t __cdecl internal_46d0d0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0xC], ecx
        ret 8
        UNREACHABLE_TRAP(0x46d0d0)
    }
}
