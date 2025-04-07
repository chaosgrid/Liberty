#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1090);
CLANG_FORWARD_PROC_SYMBOL(public_6d12b10);

PROC_DECLARE(0x6d12b10, internal_6d12b10, public_6d12b10);
extern "C" NAKED register_t __cdecl internal_6d12b10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        lea ecx, ds:[eax+0x40]
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x28], ecx
        jmp public_6ce1090
        UNREACHABLE_TRAP(0x6d12b10)
    }
}
