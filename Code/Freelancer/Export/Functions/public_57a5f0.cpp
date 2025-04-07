#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a5f0);

PROC_DECLARE(0x57a5f0, internal_57a5f0, public_57a5f0);
extern "C" NAKED register_t __cdecl internal_57a5f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        ret 0x10
        UNREACHABLE_TRAP(0x57a5f0)
    }
}
