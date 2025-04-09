#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477ee0);
CLANG_FORWARD_PROC_SYMBOL(public_47fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_483df0);
CLANG_FORWARD_PROC_SYMBOL(public_4c55f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6140);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbfbd);

#define public_47fcf9 _public_47fcf9

PROC_DECLARE(0x47fbe0, internal_47fbe0, public_47fbe0);
extern "C" NAKED register_t __cdecl internal_47fbe0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bbfbd @0x47fbe2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbfbd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0x10], esi
        call public_59f860
        xor ebx, ebx
        lea ecx, ds:[esi+0x330]
        mov dword ptr ss : [esp+0x1C], ebx
        call public_4c6140
        lea ecx, ds:[esi+0x394]
        mov byte ptr ss : [esp+0x1C], 1
        call dword ptr ds : [public_5c69a0]
        mov al, byte ptr ss : [esp+0xB]
        push 0x28
        mov byte ptr ds : [esi+0x3A8], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x3AC], eax
        mov dword ptr ds : [esi+0x3B0], ebx
        lea ecx, ds:[esi+0x94C]
        mov byte ptr ss : [esp+0x1C], 2
        call dword ptr ds : [public_5c6364]
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_5d0eec
        mov dword ptr ds : [esi+0x7C], offset public_5d0ee0
        call public_477ee0
        mov dword ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [esi], offset public_5d192c
        mov dword ptr ds : [esi+0x7C], offset public_5d191c
        call public_477ee0
        mov eax, 1
        mov dword ptr ds : [esi+0x978], eax
        mov byte ptr ds : [esi+0x35C], al
        mov dword ptr ds : [esi+0x974], ebx
        mov dword ptr ds : [esi+0x980], eax
        mov byte ptr ds : [esi+0x984], bl
        mov dword ptr ds : [esi+0x988], eax
        mov byte ptr ds : [esi+0x9F4], al
        mov byte ptr ds : [esi+0x98C], bl
        mov dword ptr ds : [esi+0x9F8], ebx
        mov dword ptr ds : [esi+0x4E8], ebx
        call public_483df0
        fstp dword ptr ds : [esi+0x990]
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_47fcf9
        call public_4c55f0
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        public_47fcf9 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        push 4
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x14], ebx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x124]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x47fbe0)
    }
}

#undef public_47fcf9
