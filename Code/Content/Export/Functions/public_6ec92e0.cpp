#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b310);

PROC_DECLARE(0x6ec92e0, internal_6ec92e0, public_6ec92e0);
extern "C" NAKED register_t __cdecl internal_6ec92e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        lea edx, ds:[ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push edx
        call public_6f1b310
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ec92e0)
    }
}
