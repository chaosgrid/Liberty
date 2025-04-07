#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b320);

PROC_DECLARE(0x6d1b320, internal_6d1b320, public_6d1b320);
extern "C" NAKED register_t __cdecl internal_6d1b320()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov byte ptr ds : [eax+0x1C], cl
        ret 0xC
        UNREACHABLE_TRAP(0x6d1b320)
    }
}
