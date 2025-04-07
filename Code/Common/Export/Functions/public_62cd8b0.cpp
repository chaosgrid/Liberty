#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9a60);

PROC_DECLARE(0x62cd8b0, internal_62cd8b0, public_62cd8b0);
extern "C" NAKED register_t __cdecl internal_62cd8b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0xA4]
        lea ecx, ds:[esi+0xA4]
        call dword ptr ds : [edx+0x10]
        mov ecx, esi
        call public_62d20f0
        mov ecx, dword ptr ds : [esi+0x24]
        push 1
        add ecx, 0x12C
        call public_62e9a60
        push 3
        push 1
        mov ecx, esi
        call public_62d21d0
        mov al, byte ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        and al, 0xFD
        push 0
        or al, 1
        push 8
        mov byte ptr ds : [esi+0x28], al
        call public_62d29a0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62cd8b0)
    }
}
