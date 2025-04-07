#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c23f90);

PROC_DECLARE(0x6c23f90, internal_6c23f90, public_6c23f90);
extern "C" NAKED register_t __cdecl internal_6c23f90()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        lea eax, ds:[edi+4]
        push eax
        call public_6c23dc0
        lea ecx, ds:[edi+0x18]
        push ecx
        call public_6c23dc0
        lea edx, ds:[edi+0x2C]
        push edx
        call public_6c23dc0
        lea eax, ds:[edi+0x40]
        push eax
        call public_6c23dc0
        lea ecx, ds:[edi+0x54]
        push ecx
        call public_6c23dc0
        mov ecx, 0x1C
        xor eax, eax
        add esp, 0x14
        rep stosd
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6c23f90)
    }
}
