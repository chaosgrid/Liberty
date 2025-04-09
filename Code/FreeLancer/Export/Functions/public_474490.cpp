#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7670);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);

PROC_DECLARE(0x474490, internal_474490, public_474490);
extern "C" NAKED register_t __cdecl internal_474490()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push 0
/*FIXUP push offset public_5c95fc @0x474496*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        mov esi, ecx
        call public_41dde0
        mov dword ptr ds : [esi+0x70], 0x64
        mov dword ptr ds : [esi+0x78], 6
        call public_4a7670
        push esi
        mov byte ptr ds : [esi+0x32C], al
        call public_59d8c0
        mov dword ptr ss : [esp+0x10], 0x40000000
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0xB4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x14], 0x40000000
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        test al, al
        setne al
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x474490)
    }
}
