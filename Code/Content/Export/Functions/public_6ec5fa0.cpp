#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);

PROC_DECLARE(0x6ec5fa0, internal_6ec5fa0, public_6ec5fa0);
extern "C" NAKED register_t __cdecl internal_6ec5fa0()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        call public_6f481e0
        push eax
        call dword ptr ds : [public_6fb36b4]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ec5fa0)
    }
}
