#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_5038c0);
CLANG_FORWARD_PROC_SYMBOL(public_503a50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf927);

#define public_5039c9 _public_5039c9
#define public_5039cb _public_5039cb
#define public_5039d5 _public_5039d5
#define public_503a00 _public_503a00

PROC_DECLARE(0x5038c0, internal_5038c0, public_5038c0);
extern "C" NAKED register_t __cdecl internal_5038c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf927 @0x5038c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf927
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [esp+8], esi
        call dword ptr ds : [public_5c6030]
        xor ebx, ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov eax, dword ptr ds : [public_674fd0]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], 3
        jne public_5039d5
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x14]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5da954 @0x503992*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da954
        push 0xD5
/*FIXUP push offset public_5da80c @0x50399c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
/*FIXUP push offset public_5c8bd4 @0x5039a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        push 0x14
        call public_5b7e84
        add esp, 0x18
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1C], 4
        je public_5039c9
        mov ecx, eax
        call public_503a50
        jmp public_5039cb
        public_5039c9 : nop
        xor eax, eax
        public_5039cb : nop
        mov byte ptr ss : [esp+0x1C], 3
        mov dword ptr ds : [public_674fd0], eax
        public_5039d5 : nop
        cmp eax, ebx
        mov dword ptr ds : [esi], eax
        jne public_503a00
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dab80 @0x5039e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dab80
        push 0x1D5
/*FIXUP push offset public_5da80c @0x5039eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x5039f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_503a00 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, 0x40A00000
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, 0x3F000000
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x24], ebx
        mov byte ptr ds : [esi+0x6C], bl
        mov byte ptr ds : [esi+0x6D], bl
        mov dword ptr ds : [esi+0x70], ebx
        mov byte ptr ds : [esi+0xD8], bl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x68], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5038c0)
    }
}

#undef public_5039c9
#undef public_5039cb
#undef public_5039d5
#undef public_503a00
