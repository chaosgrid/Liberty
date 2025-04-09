#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477cf0);
CLANG_FORWARD_PROC_SYMBOL(public_477ee0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6140);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbdf5);

PROC_DECLARE(0x477cf0, internal_477cf0, public_477cf0);
extern "C" NAKED register_t __cdecl internal_477cf0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbdf5 @0x477cf2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbdf5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        call public_59f860
        lea ecx, ds:[esi+0x330]
        mov dword ptr ss : [esp+0x14], 0
        call public_4c6140
        lea ecx, ds:[esi+0x394]
        mov byte ptr ss : [esp+0x14], 1
        call dword ptr ds : [public_5c69a0]
        mov al, byte ptr ss : [esp+7]
        push 0x28
        mov byte ptr ds : [esi+0x3A8], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x3AC], eax
        mov dword ptr ds : [esi+0x3B0], 0
        lea ecx, ds:[esi+0x94C]
        mov byte ptr ss : [esp+0x14], 2
        call dword ptr ds : [public_5c6364]
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5d0eec
        mov dword ptr ds : [esi+0x7C], offset public_5d0ee0
        call public_477ee0
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x477cf0)
    }
}
