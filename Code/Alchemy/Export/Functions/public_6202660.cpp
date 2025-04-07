#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202660);
CLANG_FORWARD_PROC_SYMBOL(public_6240180);

PROC_DECLARE(0x6202660, internal_6202660, public_6202660);
extern "C" NAKED register_t __cdecl internal_6202660()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 4
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_6240180
        UNREACHABLE_TRAP(0x6202660)
    }
}
