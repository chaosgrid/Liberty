#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebb540);

PROC_DECLARE(0x6ecb3d0, internal_6ecb3d0, public_6ecb3d0);
extern "C" NAKED register_t __cdecl internal_6ecb3d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        lea edx, ds:[ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push edx
        call public_6ebb540
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ecb3d0)
    }
}
