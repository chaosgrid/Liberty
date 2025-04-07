#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d441af);
CLANG_FORWARD_PROC_SYMBOL(public_6d442b6);
CLANG_FORWARD_PROC_SYMBOL(public_6d47f43);
CLANG_FORWARD_PROC_SYMBOL(public_6d480bc);
CLANG_FORWARD_PROC_SYMBOL(public_6d484e4);
CLANG_FORWARD_PROC_SYMBOL(public_6d48515);
CLANG_FORWARD_PROC_SYMBOL(public_6d48538);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d495f9);

#define public_6d49641 _public_6d49641
#define public_6d496bd _public_6d496bd
#define public_6d496c6 _public_6d496c6
#define public_6d496e1 _public_6d496e1
#define public_6d496f8 _public_6d496f8
#define public_6d49746 _public_6d49746
#define public_6d4974e _public_6d4974e
#define public_6d4976c _public_6d4976c
#define public_6d49782 _public_6d49782
#define public_6d497a1 _public_6d497a1
#define public_6d497aa _public_6d497aa
#define public_6d497c5 _public_6d497c5
#define public_6d497d7 _public_6d497d7
#define public_6d497e4 _public_6d497e4
#define public_6d497ef _public_6d497ef
#define public_6d497fc _public_6d497fc
#define public_6d49809 _public_6d49809
#define public_6d49817 _public_6d49817
#define public_6d4981a _public_6d4981a

PROC_DECLARE(0x6d495f9, internal_6d495f9, public_6d495f9);
extern "C" NAKED register_t __cdecl internal_6d495f9()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0xD4]
        inc dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [esi+0xC0]
        jb public_6d4981a
        push ebx
        push ebp
        xor ebp, ebp
        cmp byte ptr ds : [esi+0x113], 0
        push edi
        je public_6d496c6
        mov dword ptr ds : [eax], ebp
        mov eax, dword ptr ds : [esi+0xC8]
        inc eax
        push eax
        push ebp
        push dword ptr ds : [esi+0xD8]
        push esi
        call public_6d484e4
        add esp, 0x10
        public_6d49641 : nop
        inc byte ptr ds : [esi+0x114]
        mov bl, byte ptr ds : [esi+0x114]
        cmp bl, 7
        jae public_6d496c6
        mov eax, dword ptr ds : [esi+0xB8]
        movzx ecx, bl
        shl ecx, 2
        sub eax, dword ptr ds : [ecx+public_6d61580]
        mov edi, dword ptr ds : [ecx+public_6d6159c]
        xor edx, edx
        lea eax, ds:[eax+edi-1]
        div edi
        movzx edx, byte ptr ds : [esi+0x119]
        imul edx, eax
        add edx, 7
        shr edx, 3
        inc edx
        test byte ptr ds : [esi+0x60], 2
        mov dword ptr ds : [esi+0xD0], eax
        mov dword ptr ds : [esi+0xCC], edx
        jne public_6d496bd
        mov eax, dword ptr ds : [esi+0xBC]
        sub eax, dword ptr ds : [ecx+public_6d615b8]
        mov edi, dword ptr ds : [ecx+public_6d615d4]
        xor edx, edx
        lea eax, ds:[eax+edi-1]
        div edi
        cmp dword ptr ds : [esi+0xD0], ebp
        mov dword ptr ds : [esi+0xC0], eax
        je public_6d49641
        public_6d496bd : nop
        cmp bl, 7
        jb public_6d49817
        public_6d496c6 : nop
        test byte ptr ds : [esi+0x5C], 0x20
        jne public_6d497ef
        lea eax, ss:[esp+0x18]
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x74], 1
        lea ebx, ds:[esi+0x64]
        public_6d496e1 : nop
        cmp dword ptr ds : [esi+0x68], ebp
        jne public_6d49782
        cmp dword ptr ds : [esi+0xFC], ebp
        jne public_6d4974e
        lea edi, ds:[esi+0x10C]
        public_6d496f8 : nop
        push ebp
        push esi
        call public_6d48e08
        push 4
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        call public_6d441af
        lea eax, ss:[esp+0x24]
        push eax
        call public_6d48515
        push esi
        mov dword ptr ds : [esi+0xFC], eax
        call public_6d442b6
        push 4
        push edi
        push esi
        call public_6d48538
        mov ecx, dword ptr ds : [edi]
        mov eax, offset public_6d615f0
        add esp, 0x28
        cmp ecx, dword ptr ds : [eax]
        je public_6d49746
/*FIXUP push offset public_6d60e64 @0x6d49739*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e64
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d49746 : nop
        cmp dword ptr ds : [esi+0xFC], ebp
        je public_6d496f8
        public_6d4974e : nop
        mov eax, dword ptr ds : [esi+0xA0]
        mov edx, dword ptr ds : [esi+0xFC]
        cmp eax, edx
        mov ecx, dword ptr ds : [esi+0x9C]
        mov dword ptr ds : [esi+0x68], eax
        mov dword ptr ds : [ebx], ecx
        jbe public_6d4976c
        mov dword ptr ds : [esi+0x68], edx
        public_6d4976c : nop
        push dword ptr ds : [esi+0x68]
        push ecx
        push esi
        call public_6d48538
        mov eax, dword ptr ds : [esi+0x68]
        add esp, 0xC
        sub dword ptr ds : [esi+0xFC], eax
        public_6d49782 : nop
        push 1
        push ebx
        call public_6d480bc
        cmp eax, 1
        pop ecx
        pop ecx
        je public_6d497c5
        cmp eax, ebp
        je public_6d497aa
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, ebp
        jne public_6d497a1
        mov eax, offset public_6d61a68
        public_6d497a1 : nop
        push eax
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d497aa : nop
        cmp dword ptr ds : [esi+0x74], ebp
        jne public_6d496e1
/*FIXUP push offset public_6d60e38 @0x6d497b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e38
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        jmp public_6d496e1
        public_6d497c5 : nop
        cmp dword ptr ds : [esi+0x74], ebp
        je public_6d497d7
        cmp dword ptr ds : [esi+0x68], ebp
        jne public_6d497d7
        cmp dword ptr ds : [esi+0xFC], ebp
        je public_6d497e4
/*FIXUP public_6d497d7 : nop
        push offset public_6d60e38 @0x6d497d7*/
  FIXUP public_6d497d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60e38
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d497e4 : nop
        or dword ptr ds : [esi+0x58], 8
        or dword ptr ds : [esi+0x5C], 0x20
        mov dword ptr ds : [esi+0x74], ebp
        public_6d497ef : nop
        cmp dword ptr ds : [esi+0xFC], ebp
        jne public_6d497fc
        cmp dword ptr ds : [esi+0x68], ebp
        je public_6d49809
/*FIXUP public_6d497fc : nop
        push offset public_6d61a50 @0x6d497fc*/
  FIXUP public_6d497fc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61a50
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d49809 : nop
        lea eax, ds:[esi+0x64]
        push eax
        call public_6d47f43
        or dword ptr ds : [esi+0x58], 8
        pop ecx
        public_6d49817 : nop
        pop edi
        pop ebp
        pop ebx
        public_6d4981a : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d495f9)
    }
}

#undef public_6d49641
#undef public_6d496bd
#undef public_6d496c6
#undef public_6d496e1
#undef public_6d496f8
#undef public_6d49746
#undef public_6d4974e
#undef public_6d4976c
#undef public_6d49782
#undef public_6d497a1
#undef public_6d497aa
#undef public_6d497c5
#undef public_6d497d7
#undef public_6d497e4
#undef public_6d497ef
#undef public_6d497fc
#undef public_6d49809
#undef public_6d49817
#undef public_6d4981a
