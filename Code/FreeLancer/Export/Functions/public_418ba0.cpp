#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ba0);

PROC_DECLARE(0x418ba0, internal_418ba0, public_418ba0);
extern "C" NAKED register_t __cdecl internal_418ba0()
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
        ret 8
        UNREACHABLE_TRAP(0x418ba0)
    }
}
