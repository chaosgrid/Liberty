#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556cb0);

PROC_DECLARE(0x556cb0, internal_556cb0, public_556cb0);
extern "C" NAKED register_t __cdecl internal_556cb0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        ret 
        UNREACHABLE_TRAP(0x556cb0)
    }
}
