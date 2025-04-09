#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_50f230);

PROC_DECLARE(0x50f230, internal_50f230, public_50f230);
extern "C" NAKED register_t __cdecl internal_50f230()
{
    __asm
    {
        fld dword ptr ds : [public_613458]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        fmul dword ptr ds : [esi+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        push edx
        call public_421bd0
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+4]
        add esp, 0x18
        push 0
        sub esp, 8
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi]
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        pop esi
        ret 0x24
        UNREACHABLE_TRAP(0x50f230)
    }
}
