#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_524cb0);
CLANG_FORWARD_PROC_SYMBOL(public_5392d0);
CLANG_FORWARD_PROC_SYMBOL(public_540c30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c014b);

#define public_524d3d _public_524d3d
#define public_524d3f _public_524d3f
#define public_524d91 _public_524d91
#define public_524db5 _public_524db5
#define public_524de0 _public_524de0
#define public_524e02 _public_524e02
#define public_524e05 _public_524e05

PROC_DECLARE(0x524cb0, internal_524cb0, public_524cb0);
extern "C" NAKED register_t __cdecl internal_524cb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c014b @0x524cb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c014b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov esi, ecx
        lea ebp, ds:[edi+4]
        push ebp
        lea eax, ss:[esp+0x38]
        lea ebx, ds:[esi+0x3C]
        push eax
        mov ecx, ebx
        call public_432240
        mov al, byte ptr ds : [edi+0xC]
        test al, al
        mov eax, dword ptr ss : [esp+0x34]
        je public_524db5
        mov esi, dword ptr ds : [esi+0x40]
        cmp eax, esi
        jne public_524d91
        push 0xAC
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], esi
        test esi, esi
        mov dword ptr ss : [esp+0x2C], 0
        je public_524d3d
        push 8
        mov ecx, esi
        call public_5392d0
        mov dword ptr ds : [esi], offset public_5dca14
        mov dword ptr ds : [esi+4], offset public_5dc994
        mov dword ptr ds : [esi+0xC], offset public_5dc98c
        jmp public_524d3f
        public_524d3d : nop
        xor esi, esi
        public_524d3f : nop
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], esi
        call public_46d6d0
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[edi+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x16C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        mov al, byte ptr ds : [edi+0xE]
        push 0
        push esi
        mov byte ptr ds : [esi+0xA8], al
        call public_540c30
        add esp, 8
        jmp public_524e05
        public_524d91 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dc94c @0x524d97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc94c
        push 0x72D
/*FIXUP push offset public_5dc47c @0x524da1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x524dab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        jmp public_524e02
        public_524db5 : nop
        cmp eax, dword ptr ds : [esi+0x40]
        je public_524de0
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x15C]
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call public_46c8c0
        jmp public_524e05
        lea ebx, ds:[ebx]
        public_524de0 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dc910 @0x524de6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc910
        push 0x739
/*FIXUP push offset public_5dc47c @0x524df0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc47c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x524dfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [edx]
        public_524e02 : nop
        add esp, 0x14
        public_524e05 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x524cb0)
    }
}

#undef public_524d3d
#undef public_524d3f
#undef public_524d91
#undef public_524db5
#undef public_524de0
#undef public_524e02
#undef public_524e05
