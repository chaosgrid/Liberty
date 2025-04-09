#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_527b80);
CLANG_FORWARD_PROC_SYMBOL(public_528980);
CLANG_FORWARD_PROC_SYMBOL(public_528f90);
CLANG_FORWARD_PROC_SYMBOL(public_531a30);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0223);

#define public_527c24 _public_527c24
#define public_527c26 _public_527c26
#define public_527c6b _public_527c6b
#define public_527c6d _public_527c6d
#define public_527c7d _public_527c7d
#define public_527c8c _public_527c8c
#define public_527c8e _public_527c8e
#define public_527cad _public_527cad
#define public_527caf _public_527caf
#define public_527cc8 _public_527cc8

PROC_DECLARE(0x527b80, internal_527b80, public_527b80);
extern "C" NAKED register_t __cdecl internal_527b80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0223 @0x527b82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0223
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], esi
        call public_531a30
        mov dl, byte ptr ss : [esp+0x20]
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ds : [esi+0x10], dl
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], edi
        mov dword ptr ds : [esi+0x2C], edi
        mov dword ptr ds : [esi+0x30], edi
        mov dword ptr ds : [esi+0x34], edi
        mov dword ptr ds : [esi+0x38], edi
        mov dword ptr ds : [esi+0x3C], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi], offset public_5dd134
        je public_527c24
        add eax, 0xC
        cmp eax, edi
        je public_527c24
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edi
        je public_527c24
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_527c26
        public_527c24 : nop
        xor ecx, ecx
        public_527c26 : nop
        push 1
        push 0x3F800000
        call dword ptr ds : [public_5c6824]
        fstp dword ptr ds : [esi+0x30]
        push 0x2D
        call public_5792b0
        add esp, 4
        cmp eax, 2
        jne public_527c7d
        mov eax, dword ptr ds : [esi+8]
        cmp eax, edi
        je public_527c6b
        add eax, 0xC
        cmp eax, edi
        je public_527c6b
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, edi
        je public_527c6b
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_527c6d
        public_527c6b : nop
        xor ecx, ecx
        public_527c6d : nop
        push 2
        push 0x3F800000
        call dword ptr ds : [public_5c6824]
        fstp dword ptr ds : [esi+0x30]
        public_527c7d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_527c8c
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_527c8e
        public_527c8c : nop
        xor eax, eax
        public_527c8e : nop
        lea ecx, ds:[eax+0xA8]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_527cc8
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_527cad
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        jmp public_527caf
        public_527cad : nop
        xor eax, eax
        public_527caf : nop
        add eax, 0xA8
        push eax
        call public_40f080
        add esp, 4
        push edi
        mov ecx, eax
        mov dword ptr ds : [esi+0x5C], eax
        call public_40e960
        public_527cc8 : nop
        mov ecx, esi
        call public_528980
        mov ecx, esi
        call public_528f90
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x527b80)
    }
}

#undef public_527c24
#undef public_527c26
#undef public_527c6b
#undef public_527c6d
#undef public_527c7d
#undef public_527c8c
#undef public_527c8e
#undef public_527cad
#undef public_527caf
#undef public_527cc8
