#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63128e0);
CLANG_FORWARD_PROC_SYMBOL(public_6312970);
CLANG_FORWARD_PROC_SYMBOL(public_6312dd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396ad8);

PROC_DECLARE(0x631afe0, internal_631afe0, public_631afe0);
extern "C" NAKED register_t __cdecl internal_631afe0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396ad8 @0x631afe2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396ad8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        push 4
        lea eax, ss:[esp+0x34]
        mov esi, ecx
        push eax
        mov ecx, edi
        call public_63128e0
        mov ecx, dword ptr ss : [esp+0x30]
        push 4
        lea edx, ss:[esp+0x34]
        mov dword ptr ds : [esi], ecx
        push edx
        mov ecx, edi
        call public_63128e0
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        call public_6312970
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, edi
        mov byte ptr ds : [esi+8], al
        call public_6312dd0
        push eax
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x2C], 0
        call public_630dda0
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x631afe0)
    }
}
