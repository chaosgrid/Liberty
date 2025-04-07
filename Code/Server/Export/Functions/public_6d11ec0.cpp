#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d11ec0);

PROC_DECLARE(0x6d11ec0, internal_6d11ec0, public_6d11ec0);
extern "C" NAKED register_t __cdecl internal_6d11ec0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        lea ecx, ds:[eax+0x54]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        jmp public_6ce1090
        UNREACHABLE_TRAP(0x6d11ec0)
    }
}
