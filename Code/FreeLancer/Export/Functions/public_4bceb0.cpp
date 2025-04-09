#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);

PROC_DECLARE(0x4bceb0, internal_4bceb0, public_4bceb0);
extern "C" NAKED register_t __cdecl internal_4bceb0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push edi
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        push 0
        mov esi, ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push 0
        push 0
        push 0
/*FIXUP push offset public_5cec64 @0x4bced7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cec64
/*FIXUP push offset public_5d5d98 @0x4bcedc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5d98
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 0x3ED0E561
        mov dword ptr ss : [esp+0x54], 0x3EEB020C
        mov dword ptr ss : [esp+0x58], 0xBFA00000
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        call public_5a0c90
        lea edi, ds:[esi+0x32C]
        push 0x3E4CCCCD
        mov ecx, edi
        mov dword ptr ds : [esi+0x34C], eax
        call public_55e120
        mov ecx, dword ptr ds : [esi+0x34C]
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0x3E947AE1
        mov dword ptr ss : [esp+0x1C], 0xBFA00000
        call public_55dee0
        mov edx, dword ptr ds : [esi]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esp
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x7C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        test al, al
        pop edi
        setne al
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4bceb0)
    }
}
