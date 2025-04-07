#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419452);
CLANG_FORWARD_PROC_SYMBOL(public_419654);
CLANG_FORWARD_PROC_SYMBOL(public_419666);
CLANG_FORWARD_PROC_SYMBOL(public_41966c);
CLANG_FORWARD_PROC_SYMBOL(public_419684);
CLANG_FORWARD_PROC_SYMBOL(public_419687);
CLANG_FORWARD_PROC_SYMBOL(public_419960);

#define public_419567 _public_419567
#define public_4195c0 _public_4195c0
#define public_4195ce _public_4195ce
#define public_4195d3 _public_4195d3
#define public_4195d7 _public_4195d7
#define public_4195e1 _public_4195e1
#define public_4195fa _public_4195fa
#define public_419605 _public_419605
#define public_419608 _public_419608

PROC_DECLARE(0x4194e4, internal_4194e4, public_4194e4);
extern "C" NAKED register_t __cdecl internal_4194e4()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_41ea40 @0x4194e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41ea40
/*FIXUP push offset _public_419452 @0x4194ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419452
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        xor ebx, ebx
        mov dword ptr ss : [ebp-4], ebx
        push 2
        call dword ptr ds : [public_41b900]
        pop ecx
        or dword ptr ds : [public_42a738], 0xFFFFFFFF
        or dword ptr ds : [public_42a73c], 0xFFFFFFFF
        call dword ptr ds : [public_41b904]
        mov ecx, dword ptr ds : [public_42a72c]
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_41b908]
        mov ecx, dword ptr ds : [public_42a728]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [public_41b90c]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_42a734], eax
        call public_419687
        cmp dword ptr ds : [public_425ef0], ebx
        jne public_419567
/*FIXUP push offset _public_419684 @0x41955b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419684
        call dword ptr ds : [public_41b910]
        pop ecx
        public_419567 : nop
        call public_41966c
/*FIXUP push offset public_425400 @0x41956c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425400
/*FIXUP push offset public_4253fc @0x419571*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4253fc
        call public_419666
        mov eax, dword ptr ds : [public_42a724]
        mov dword ptr ss : [ebp-0x6C], eax
        lea eax, ss:[ebp-0x6C]
        push eax
        push dword ptr ds : [public_42a720]
        lea eax, ss:[ebp-0x64]
        push eax
        lea eax, ss:[ebp-0x70]
        push eax
        lea eax, ss:[ebp-0x60]
        push eax
        call dword ptr ds : [public_41b914]
/*FIXUP push offset public_4253f8 @0x41959f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4253f8
/*FIXUP push offset public_425000 @0x4195a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425000
        call public_419666
        add esp, 0x24
        mov eax, dword ptr ds : [public_41b918]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x74], esi
        cmp byte ptr ds : [esi], 0x22
        jne public_4195fa
        public_4195c0 : nop
        inc esi
        mov dword ptr ss : [ebp-0x74], esi
        mov al, byte ptr ds : [esi]
        cmp al, bl
        je public_4195ce
        cmp al, 0x22
        jne public_4195c0
        public_4195ce : nop
        cmp byte ptr ds : [esi], 0x22
        jne public_4195d7
        public_4195d3 : nop
        inc esi
        mov dword ptr ss : [ebp-0x74], esi
        public_4195d7 : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        je public_4195e1
        cmp al, 0x20
        jbe public_4195d3
        public_4195e1 : nop
        mov dword ptr ss : [ebp-0x30], ebx
        lea eax, ss:[ebp-0x5C]
        push eax
        call dword ptr ds : [public_41b17c]
        test byte ptr ss : [ebp-0x30], 1
        je public_419605
        movzx eax, word ptr ss : [ebp-0x2C]
        jmp public_419608
        public_4195fa : nop
        cmp byte ptr ds : [esi], 0x20
        jbe public_4195d7
        inc esi
        mov dword ptr ss : [ebp-0x74], esi
        jmp public_4195fa
        public_419605 : nop
        push 0xA
        pop eax
        public_419608 : nop
        push eax
        push esi
        push ebx
        push ebx
        call dword ptr ds : [public_41b164]
        push eax
        call public_419960
        mov dword ptr ss : [ebp-0x68], eax
        push eax
        call dword ptr ds : [public_41b91c]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x78], ecx
        push eax
        push ecx
        call public_419654
        pop ecx
        pop ecx
        ret 
        mov esp, dword ptr ss : [ebp-0x18]
        push dword ptr ss : [ebp-0x78]
        call dword ptr ds : [public_41b924]
        UNREACHABLE_TRAP(0x4194e4)
    }
}

#undef public_419567
#undef public_4195c0
#undef public_4195ce
#undef public_4195d3
#undef public_4195d7
#undef public_4195e1
#undef public_4195fa
#undef public_419605
#undef public_419608
