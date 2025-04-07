#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f51230);
CLANG_FORWARD_PROC_SYMBOL(public_6f51270);
CLANG_FORWARD_PROC_SYMBOL(public_6f55490);

PROC_DECLARE(0x6f51230, internal_6f51230, public_6f51230);
extern "C" NAKED register_t __cdecl internal_6f51230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        xor ecx, ecx
        push eax
        mov dword ptr ds : [eax], 0xA
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x24], 1
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+8], ecx
        call public_6f51270
        add esp, 4
        jmp public_6f55490
        UNREACHABLE_TRAP(0x6f51230)
    }
}
