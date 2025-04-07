#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42e080);
CLANG_FORWARD_PROC_SYMBOL(public_42e160);
CLANG_FORWARD_PROC_SYMBOL(public_557360);
CLANG_FORWARD_JUMP_SYMBOL(public_5c14f8);

#define public_557399 _public_557399
#define public_55743a _public_55743a
#define public_55746f _public_55746f
#define public_557485 _public_557485

PROC_DECLARE(0x557360, internal_557360, public_557360);
extern "C" NAKED register_t __cdecl internal_557360()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c14f8 @0x557368*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c14f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_5c6ddc]
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push esi
        mov esi, ecx
        cmp dword ptr ds : [eax], 0
        jne public_557399
        xor al, al
        pop esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        public_557399 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        xor bl, bl
        mov dword ptr ds : [esi+4], ecx
        call public_42e080
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ds : [public_5c6d64]
        mov dword ptr ss : [esp+0xC], 8
        mov dword ptr ss : [esp+0x10], offset public_5d9d0c
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_55743a
        mov edx, dword ptr ds : [public_5c6dd4]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_55743a
        mov eax, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov bl, 1
        jmp public_55746f
        public_55743a : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x215
/*FIXUP push offset public_5e13ec @0x55744b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e13ec
        mov eax, 0x100001
/*FIXUP push offset public_5e13a0 @0x557455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e13a0
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0x14
        call public_42e160
        mov dword ptr ds : [esi+4], 0
        public_55746f : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_557485
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_557485 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov al, bl
        pop ebx
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x557360)
    }
}

#undef public_557399
#undef public_55743a
#undef public_55746f
#undef public_557485
