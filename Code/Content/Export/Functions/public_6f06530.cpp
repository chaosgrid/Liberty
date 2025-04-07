#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f06530);

PROC_DECLARE(0x6f06530, internal_6f06530, public_6f06530);
extern "C" NAKED register_t __cdecl internal_6f06530()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [eax], offset public_6fb8230
        ret 8
        UNREACHABLE_TRAP(0x6f06530)
    }
}
