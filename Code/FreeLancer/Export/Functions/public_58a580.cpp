#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_4159a0);
CLANG_FORWARD_PROC_SYMBOL(public_58a580);

PROC_DECLARE(0x58a580, internal_58a580, public_58a580);
extern "C" NAKED register_t __cdecl internal_58a580()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0x32C]
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        call public_4145d0
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x334]
        push edx
        push 0
        call public_4159a0
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x58a580)
    }
}
