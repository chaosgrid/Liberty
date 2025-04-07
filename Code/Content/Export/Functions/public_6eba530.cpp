#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9af0);
CLANG_FORWARD_PROC_SYMBOL(public_6eba530);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfff0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1040);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa5de);

#define public_6eba5a0 _public_6eba5a0
#define public_6eba5c6 _public_6eba5c6
#define public_6eba5e5 _public_6eba5e5
#define public_6eba5ef _public_6eba5ef
#define public_6eba600 _public_6eba600
#define public_6eba678 _public_6eba678
#define public_6eba6ab _public_6eba6ab
#define public_6eba6ad _public_6eba6ad
#define public_6eba6b9 _public_6eba6b9
#define public_6eba6d0 _public_6eba6d0
#define public_6eba6e2 _public_6eba6e2
#define public_6eba6f1 _public_6eba6f1
#define public_6eba70a _public_6eba70a

PROC_DECLARE(0x6eba530, internal_6eba530, public_6eba530);
extern "C" NAKED register_t __cdecl internal_6eba530()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6faa5de @0x6eba538*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa5de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebp
        mov ebp, ecx
        lea eax, ss:[ebp+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6eba70a
        mov ecx, dword ptr ss : [ebp+8]
        call public_6f47980
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_6eba6f1
        mov dl, byte ptr ss : [esp+0x2C]
        push esi
        push edi
        mov byte ptr ss : [esp+0x14], dl
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov eax, dword ptr ss : [ebp+0x2F4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x2C], ecx
        je public_6eba5ef
        nop 
        lea esp, ss:[esp]
        public_6eba5a0 : nop
        mov al, byte ptr ds : [edi+0x94]
        test al, al
        jne public_6eba5e5
        mov eax, dword ptr ds : [edi+0x90]
        test eax, eax
        je public_6eba5e5
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edx]
        jne public_6eba5e5
        mov esi, dword ptr ds : [eax+0x10]
        cmp esi, dword ptr ds : [eax+0x14]
        je public_6eba5e5
        public_6eba5c6 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6ed1040
        mov ecx, dword ptr ds : [edi+0x90]
        mov eax, dword ptr ds : [ecx+0x14]
        add esi, 0x3C
        cmp esi, eax
        jne public_6eba5c6
        public_6eba5e5 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0x2F4]
        jne public_6eba5a0
        public_6eba5ef : nop
        mov eax, dword ptr ss : [ebp+0x2F4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eba6b9
        nop 
        public_6eba600 : nop
        cmp byte ptr ds : [esi+0x94], 1
        jne public_6eba6ab
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        je public_6eba6ab
        mov eax, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ss : [esp+0xC]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call public_6ea9fc0
        mov edi, dword ptr ds : [esi+0x90]
        test edi, edi
        mov dword ptr ds : [esi+0x8C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], edi
        je public_6eba678
        lea ecx, ds:[edi+0x44]
        mov byte ptr ss : [esp+0x2C], 2
        call public_6eec8d0
        lea ecx, ds:[edi+0x1C]
        mov byte ptr ss : [esp+0x2C], 1
        call public_6eec8d0
        lea ecx, ds:[edi+0xC]
        mov byte ptr ss : [esp+0x2C], 0
        call public_6ecfff0
        push edi
        call public_6fa8fe0
        add esp, 4
        public_6eba678 : nop
        mov dword ptr ds : [esi+0x90], 0
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+0x2F8]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x2F8], eax
        mov esi, edi
        jmp public_6eba6ad
        public_6eba6ab : nop
        mov esi, dword ptr ds : [esi]
        public_6eba6ad : nop
        cmp esi, dword ptr ss : [ebp+0x2F4]
        jne public_6eba600
        public_6eba6b9 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6eba6e2
        lea ecx, ds:[ecx]
        public_6eba6d0 : nop
        push 1
        lea ecx, ds:[esi+0x2C]
        call dword ptr ds : [public_6fb32f8]
        add esi, 0x3C
        cmp esi, edi
        jne public_6eba6d0
        public_6eba6e2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop esi
        public_6eba6f1 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0xC], 0x2A
        call public_6eb9af0
        public_6eba70a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6eba530)
    }
}

#undef public_6eba5a0
#undef public_6eba5c6
#undef public_6eba5e5
#undef public_6eba5ef
#undef public_6eba600
#undef public_6eba678
#undef public_6eba6ab
#undef public_6eba6ad
#undef public_6eba6b9
#undef public_6eba6d0
#undef public_6eba6e2
#undef public_6eba6f1
#undef public_6eba70a
