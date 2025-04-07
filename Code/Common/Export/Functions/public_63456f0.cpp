#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63456f0);
CLANG_FORWARD_PROC_SYMBOL(public_6345850);

PROC_DECLARE(0x63456f0, internal_63456f0, public_63456f0);
extern "C" NAKED register_t __cdecl internal_63456f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x18]
        push eax
        mov eax, dword ptr ds : [edx+0xFC]
        mov edx, dword ptr ds : [edx+0xF8]
        push eax
        push edx
        call public_6345850
        ret 4
        UNREACHABLE_TRAP(0x63456f0)
    }
}
