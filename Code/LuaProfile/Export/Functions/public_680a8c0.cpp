#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_680a900);
CLANG_FORWARD_PROC_SYMBOL(public_680bc20);

PROC_DECLARE(0x680a8c0, internal_680a8c0, public_680a8c0);
extern "C" NAKED register_t __cdecl internal_680a8c0()
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
        call public_680a900
        add esp, 4
        jmp public_680bc20
        UNREACHABLE_TRAP(0x680a8c0)
    }
}
