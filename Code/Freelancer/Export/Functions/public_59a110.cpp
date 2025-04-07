#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_59a110);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4c1d);

PROC_DECLARE(0x59a110, internal_59a110, public_59a110);
extern "C" NAKED register_t __cdecl internal_59a110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4c1d @0x59a112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4c1d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_57b370
        push 1
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c62c0]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 0
        call public_57b470
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x38], edi
        call dword ptr ds : [public_5c62bc]
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x4A8]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xC], ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 1
        call public_57b470
        mov ebx, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x38], edi
        call ebx
        push 0x828B
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_5c62b8]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 2
        call public_57b470
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x38], edi
        call dword ptr ds : [public_5c62b4]
        push 0
        push 0xFFFFFF00
        lea eax, ds:[esi+0x4C0]
        push eax
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c630c]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 3
        call public_57b470
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x38], edi
        call dword ptr ds : [public_5c6308]
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x4B4]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 4
        call public_57b470
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x38], edi
        call ebx
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x59a110)
    }
}
