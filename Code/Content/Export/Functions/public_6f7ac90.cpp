#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7ac90);

PROC_DECLARE(0x6f7ac90, internal_6f7ac90, public_6f7ac90);
extern "C" NAKED register_t __cdecl internal_6f7ac90()
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
        UNREACHABLE_TRAP(0x6f7ac90)
    }
}
