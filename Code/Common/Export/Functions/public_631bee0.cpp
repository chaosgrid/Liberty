#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631be30);

PROC_DECLARE(0x631bee0, internal_631bee0, public_631bee0);
extern "C" NAKED register_t __cdecl internal_631bee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_631be30
        push eax
        call dword ptr ds : [public_63992f0]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x631bee0)
    }
}
