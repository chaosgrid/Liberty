#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee54e0);

PROC_DECLARE(0x6ee54e0, internal_6ee54e0, public_6ee54e0);
extern "C" NAKED register_t __cdecl internal_6ee54e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ee54e0)
    }
}
