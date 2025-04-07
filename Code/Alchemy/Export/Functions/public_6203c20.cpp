#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203c20);
CLANG_FORWARD_JUMP_SYMBOL(public_6247208);

#define public_6203c48 _public_6203c48
#define public_6203c6b _public_6203c6b
#define public_6203c8a _public_6203c8a
#define public_6203cfc _public_6203cfc
#define public_6203d21 _public_6203d21
#define public_6203d40 _public_6203d40
#define public_6203d5b _public_6203d5b
#define public_6203d73 _public_6203d73
#define public_6203dd9 _public_6203dd9
#define public_6203de8 _public_6203de8
#define public_6203dee _public_6203dee
#define public_6203dfa _public_6203dfa
#define public_6203e14 _public_6203e14

PROC_DECLARE(0x6203c20, internal_6203c20, public_6203c20);
extern "C" NAKED register_t __cdecl internal_6203c20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247208 @0x6203c28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247208
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebp
        mov ebp, dword ptr ss : [esp+0x60]
        push esi
        xor esi, esi
        cmp ebp, esi
        jne public_6203c48
        lea ebp, ss:[esp+0x54]
        public_6203c48 : nop
        push ebx
        mov dword ptr ss : [esp+0x68], esi
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x4C], esi
        cmp eax, esi
        je public_6203c6b
        mov dword ptr ss : [esp+0x68], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x68]
        cmp eax, esi
        jne public_6203c8a
        public_6203c6b : nop
        mov eax, dword ptr ss : [esp+0x54]
        lea ecx, ss:[esp+0x68]
        push ecx
/*FIXUP push offset public_6255524 @0x6203c74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255524
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jne public_6203dfa
        mov eax, dword ptr ss : [esp+0x68]
        public_6203c8a : nop
        mov edx, dword ptr ss : [esp+0x64]
        push 3
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov ebx, eax
        cmp ebx, esi
        je public_6203dfa
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x60]
        push edi
        push 0x400
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6257f80 @0x6203cb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6203dee
        mov ecx, 9
        mov esi, offset public_62554e0
        lea edi, ss:[esp+0x20]
        lea eax, ss:[esp+0x20]
        rep movsd
        movsb 
        mov edi, dword ptr ds : [public_624b058]
        push eax
/*FIXUP push offset public_6257f80 @0x6203ce7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call edi
        add esp, 8
        test eax, eax
        je public_6203cfc
        mov byte ptr ds : [eax+public_6257f80], 0
        public_6203cfc : nop
        mov esi, dword ptr ds : [public_624b000]
/*FIXUP push offset public_62554d8 @0x6203d02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554d8
/*FIXUP push offset public_6257f80 @0x6203d07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203d21
        mov dword ptr ss : [ebp], 1
        jmp public_6203dee
/*FIXUP public_6203d21 : nop
        push offset public_62554d4 @0x6203d21*/
  FIXUP public_6203d21 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554d4
/*FIXUP push offset public_6257f80 @0x6203d26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203d40
        mov dword ptr ss : [ebp], 1
        jmp public_6203dee
/*FIXUP public_6203d40 : nop
        push offset public_62554cc @0x6203d40*/
  FIXUP public_6203d40 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554cc
/*FIXUP push offset public_6257f80 @0x6203d45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203d5b
        mov dword ptr ss : [ebp], eax
        jmp public_6203dee
/*FIXUP public_6203d5b : nop
        push offset public_62554c8 @0x6203d5b*/
  FIXUP public_6203d5b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_62554c8
/*FIXUP push offset public_6257f80 @0x6203d60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203d73
        mov dword ptr ss : [ebp], eax
        jmp public_6203dee
        public_6203d73 : nop
        mov esi, dword ptr ds : [public_624b054]
        push 0x78
/*FIXUP push offset public_6257f80 @0x6203d7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203dd9
        push 0x58
/*FIXUP push offset public_6257f80 @0x6203d8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call esi
        add esp, 8
        test eax, eax
        jne public_6203dd9
        mov edx, dword ptr ds : [public_62554bc]
        mov ecx, dword ptr ds : [public_62554b8]
        mov eax, dword ptr ds : [public_62554c0]
        mov dword ptr ss : [esp+0x14], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        mov cl, byte ptr ds : [public_62554c4]
        push edx
/*FIXUP push offset public_6257f80 @0x6203dbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x24], cl
        call edi
/*FIXUP push offset public_6257f80 @0x6203dcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call dword ptr ds : [public_624b050]
        jmp public_6203de8
        public_6203dd9 : nop
        push 0x10
        push 0
/*FIXUP push offset public_6257f80 @0x6203ddd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257f80
        call dword ptr ds : [public_624b04c]
        public_6203de8 : nop
        add esp, 0xC
        mov dword ptr ss : [ebp], eax
        public_6203dee : nop
        mov eax, dword ptr ss : [esp+0x6C]
        push ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x18]
        pop edi
        public_6203dfa : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ss : [ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        pop ebx
        je public_6203e14
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6203e14 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, ebp
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6203c20)
    }
}

#undef public_6203c48
#undef public_6203c6b
#undef public_6203c8a
#undef public_6203cfc
#undef public_6203d21
#undef public_6203d40
#undef public_6203d5b
#undef public_6203d73
#undef public_6203dd9
#undef public_6203de8
#undef public_6203dee
#undef public_6203dfa
#undef public_6203e14
