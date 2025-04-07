#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23f70);

PROC_DECLARE(0x6d23f70, internal_6d23f70, public_6d23f70);
extern "C" NAKED register_t __cdecl internal_6d23f70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_6d68f0c
        ret 0xC
        UNREACHABLE_TRAP(0x6d23f70)
    }
}
