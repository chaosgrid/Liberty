#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);

PROC_DECLARE(0x6ec8710, internal_6ec8710, public_6ec8710);
extern "C" NAKED register_t __cdecl internal_6ec8710()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        xor eax, eax
        mov al, byte ptr ds : [ecx+0x10]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax+8]
        push edx
        call public_6f481e0
        push eax
        call dword ptr ds : [public_6fb33d4]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ec8710)
    }
}
