#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431a80);
CLANG_FORWARD_PROC_SYMBOL(public_432530);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8fd1);

#define public_431b18 _public_431b18
#define public_431b21 _public_431b21
#define public_431b60 _public_431b60
#define public_431b83 _public_431b83

PROC_DECLARE(0x431a80, internal_431a80, public_431a80);
extern "C" NAKED register_t __cdecl internal_431a80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8fd1 @0x431a82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8fd1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        mov al, byte ptr ss : [esp+0x3C]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x24], edx
        mov byte ptr ss : [esp+0x28], al
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c6f9c]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x44], 1
        call public_432530
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_431b21
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_431b18
        cmp cl, 0xFF
        je public_431b18
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_431b21
        public_431b18 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_431b21 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_431b83
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_431b60
        cmp cl, 0xFF
        je public_431b60
        mov edx, dword ptr ss : [esp+8]
        dec cl
        pop esi
        mov byte ptr ds : [eax], cl
        lea eax, ds:[edx+0x10]
        pop ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        public_431b60 : nop
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0xC]
        add esp, 4
        pop esi
        add eax, 0x10
        pop ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        public_431b83 : nop
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ds:[ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x431a80)
    }
}

#undef public_431b18
#undef public_431b21
#undef public_431b60
#undef public_431b83
