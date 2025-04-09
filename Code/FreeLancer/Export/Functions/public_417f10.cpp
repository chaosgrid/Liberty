#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_417f10);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422a70);
CLANG_FORWARD_PROC_SYMBOL(public_422ab0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8930);

#define public_417fa7 _public_417fa7

PROC_DECLARE(0x417f10, internal_417f10, public_417f10);
extern "C" NAKED register_t __cdecl internal_417f10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b8930 @0x417f18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8930
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push 0x1701
        call public_401e90
        add esp, 4
        call public_422a70
        call public_4225e0
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xFC]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xFC]
        mov al, byte ptr ds : [public_6105b5]
        test al, al
        je public_417fa7
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        public_417fa7 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push 8
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push 0xE
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 0xE
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x34], 0
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_616670]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        mov byte ptr ss : [esp+0x30], 1
        call public_403ea0
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push edx
        push 0x10
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x11
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        call public_422ab0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        mov byte ptr ss : [esp+0x34], 0
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x417f10)
    }
}

#undef public_417fa7
