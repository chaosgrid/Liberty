#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401a90);
CLANG_FORWARD_PROC_SYMBOL(public_401d40);
CLANG_FORWARD_PROC_SYMBOL(public_401f00);
CLANG_FORWARD_PROC_SYMBOL(public_401f20);
CLANG_FORWARD_PROC_SYMBOL(public_401f40);
CLANG_FORWARD_PROC_SYMBOL(public_401f70);
CLANG_FORWARD_PROC_SYMBOL(public_402330);
CLANG_FORWARD_PROC_SYMBOL(public_402340);
CLANG_FORWARD_PROC_SYMBOL(public_4023b0);
CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_4192a8);
CLANG_FORWARD_JUMP_SYMBOL(public_41a8ad);

#define public_413707 _public_413707
#define public_41374b _public_41374b
#define public_41375c _public_41375c
#define public_4137ac _public_4137ac
#define public_4137b5 _public_4137b5
#define public_4137ce _public_4137ce
#define public_413801 _public_413801
#define public_413846 _public_413846
#define public_413888 _public_413888
#define public_4138c8 _public_4138c8
#define public_4138dd _public_4138dd
#define public_41394c _public_41394c
#define public_413961 _public_413961
#define public_413980 _public_413980
#define public_413989 _public_413989
#define public_413996 _public_413996
#define public_4139ef _public_4139ef
#define public_413a07 _public_413a07

PROC_DECLARE(0x4136a0, internal_4136a0, public_4136a0);
extern "C" NAKED register_t __cdecl internal_4136a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a8ad @0x4136a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a8ad
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x110
        push ebx
        mov ebx, dword ptr ss : [esp+0x128]
        test ebx, ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov edi, 0x100052
        je public_4139ef
        mov ecx, dword ptr ds : [public_427828]
        test ecx, ecx
        je public_4139ef
        mov esi, dword ptr ss : [esp+0x130]
        movsx eax, byte ptr ds : [esi]
        add eax, 0xFFFFFFBE
        cmp eax, 0x36
        ja public_413996
/*FIXUP movzx eax, byte ptr ds : [eax+public_413a50] @0x4136f9*/
/*FIXUP jmp dword ptr ds : [eax*4+public_413a24] @0x413700*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c00000000000675
  JMPTB mov eax, 0
  JMPTB public_4c00000000000675 : nop
        je public_413707
  JMPTB cmp eax, 1
  JMPTB jne public_4c00000000000671
  JMPTB mov eax, 1
  JMPTB public_4c00000000000671 : nop
        je public_413989
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000066d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000066d : nop
        je public_413996
  JMPTB cmp eax, 3
  JMPTB jne public_4c00000000000669
  JMPTB mov eax, 2
  JMPTB public_4c00000000000669 : nop
        je public_41394c
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000000665
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000665 : nop
        je public_413996
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000000661
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000661 : nop
        je public_413996
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000065d
  JMPTB mov eax, 3
  JMPTB public_4c0000000000065d : nop
        je public_4138dd
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000000659
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000659 : nop
        je public_413996
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000000655
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000655 : nop
        je public_413996
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000000651
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000651 : nop
        je public_413996
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000064d
  JMPTB mov eax, 4
  JMPTB public_4c0000000000064d : nop
        je public_4137ce
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000000649
  JMPTB mov eax, 5
  JMPTB public_4c00000000000649 : nop
        je public_413846
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c00000000000645
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000645 : nop
        je public_413996
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000000641
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000641 : nop
        je public_413996
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000063d
  JMPTB mov eax, 6
  JMPTB public_4c0000000000063d : nop
        je public_41375c
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c00000000000639
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000639 : nop
        je public_413996
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c00000000000635
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000635 : nop
        je public_413996
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c00000000000631
  JMPTB mov eax, 7
  JMPTB public_4c00000000000631 : nop
        je public_413801
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000062d
  JMPTB mov eax, 8
  JMPTB public_4c0000000000062d : nop
        je public_413888
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c00000000000629
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000629 : nop
        je public_413996
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c00000000000625
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000625 : nop
        je public_413996
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c00000000000621
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000621 : nop
        je public_413996
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000061d
  JMPTB mov eax, 9
  JMPTB public_4c0000000000061d : nop
        je public_413961
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c00000000000619
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000619 : nop
        je public_413996
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c00000000000615
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000615 : nop
        je public_413996
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c00000000000611
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000611 : nop
        je public_413996
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000060d
  JMPTB mov eax, 0xA
  JMPTB public_4c0000000000060d : nop
        je public_413996
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c00000000000609
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000609 : nop
        je public_413996
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c00000000000605
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000605 : nop
        je public_413996
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c00000000000601
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000000601 : nop
        je public_413996
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c000000000005fd
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005fd : nop
        je public_413996
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c000000000005f9
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005f9 : nop
        je public_413996
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c000000000005f5
  JMPTB mov eax, 0
  JMPTB public_4c000000000005f5 : nop
        je public_413707
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c000000000005f1
  JMPTB mov eax, 1
  JMPTB public_4c000000000005f1 : nop
        je public_413989
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c000000000005ed
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005ed : nop
        je public_413996
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c000000000005e9
  JMPTB mov eax, 2
  JMPTB public_4c000000000005e9 : nop
        je public_41394c
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c000000000005e5
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005e5 : nop
        je public_413996
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c000000000005e1
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005e1 : nop
        je public_413996
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c000000000005dd
  JMPTB mov eax, 3
  JMPTB public_4c000000000005dd : nop
        je public_4138dd
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c000000000005d9
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005d9 : nop
        je public_413996
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c000000000005d5
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005d5 : nop
        je public_413996
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c000000000005d1
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005d1 : nop
        je public_413996
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c000000000005cd
  JMPTB mov eax, 4
  JMPTB public_4c000000000005cd : nop
        je public_4137ce
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c000000000005c9
  JMPTB mov eax, 5
  JMPTB public_4c000000000005c9 : nop
        je public_413846
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c000000000005c5
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005c5 : nop
        je public_413996
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c000000000005c1
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005c1 : nop
        je public_413996
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c000000000005bd
  JMPTB mov eax, 6
  JMPTB public_4c000000000005bd : nop
        je public_41375c
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c000000000005b9
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005b9 : nop
        je public_413996
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c000000000005b5
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005b5 : nop
        je public_413996
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c000000000005b1
  JMPTB mov eax, 7
  JMPTB public_4c000000000005b1 : nop
        je public_413801
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c000000000005ad
  JMPTB mov eax, 8
  JMPTB public_4c000000000005ad : nop
        je public_413888
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c000000000005a9
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005a9 : nop
        je public_413996
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c000000000005a5
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005a5 : nop
        je public_413996
  JMPTB cmp eax, 0x35
  JMPTB jne public_4c000000000005a1
  JMPTB mov eax, 0xA
  JMPTB public_4c000000000005a1 : nop
        je public_413996
  JMPTB cmp eax, 0x36
  JMPTB jne public_4c0000000000059d
  JMPTB mov eax, 9
  JMPTB public_4c0000000000059d : nop
        je public_413961
  JMPTB int 3
        public_413707 : nop
        mov dl, byte ptr ds : [esi+1]
        test dl, dl
        lea eax, ds:[esi+1]
        jne public_41374b
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_41b934]
        push eax
        lea edx, ss:[esp+0x24]
/*FIXUP push offset public_4259ac @0x413721*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259ac
        push edx
        call dword ptr ds : [public_41b964]
        mov ecx, dword ptr ds : [public_427828]
        add esp, 0x10
        lea eax, ss:[esp+0x1C]
        push eax
        add ecx, 0xCC
        call public_402340
        jmp public_413a07
        public_41374b : nop
        push eax
        add ecx, 0xCC
        call public_402340
        jmp public_413a07
        public_41375c : nop
        inc esi
        push esi
        call dword ptr ds : [public_41b980]
        mov edx, dword ptr ds : [public_427828]
        add esp, 4
        mov esi, eax
        push esi
        lea ecx, ds:[edx+0xCC]
        call public_402330
        test al, al
        jne public_413a07
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea eax, ss:[esp+0x10]
        push 0xF01F
        push eax
        mov dword ptr ss : [esp+0x130], 0
        call public_40ae40
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push ecx
        public_4137ac : nop
        push edi
        call public_40e160
        add esp, 0x14
        public_4137b5 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        call public_418aa4
        jmp public_413a07
        public_4137ce : nop
        inc esi
        push esi
        add ecx, 0xCC
        call public_401a90
        test al, al
        jne public_413a07
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        mov dword ptr ss : [esp+0x128], 1
        push 0xF020
        jmp public_4138c8
        public_413801 : nop
        inc esi
        push esi
        call dword ptr ds : [public_41b980]
        mov ecx, dword ptr ds : [public_427828]
        add esp, 4
        mov esi, eax
        push esi
        add ecx, 0xCC
        call public_401f00
        test al, al
        jne public_413a07
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        mov dword ptr ss : [esp+0x128], 2
        push 0xF021
        jmp public_4138c8
        public_413846 : nop
        inc esi
        push esi
        call dword ptr ds : [public_41b980]
        mov ecx, dword ptr ds : [public_427828]
        add esp, 4
        mov esi, eax
        push esi
        add ecx, 0xCC
        call public_401f20
        test al, al
        jne public_413a07
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        mov dword ptr ss : [esp+0x128], 3
        push 0xF022
        jmp public_4138c8
        public_413888 : nop
        inc esi
        push esi
        call dword ptr ds : [public_41b980]
        mov ecx, dword ptr ds : [public_427828]
        add esp, 4
        mov esi, eax
        push esi
        add ecx, 0xCC
        call public_401f40
        test al, al
        jne public_413a07
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        mov dword ptr ss : [esp+0x128], 4
        push 0xF023
        public_4138c8 : nop
        lea edx, ss:[esp+0x14]
        push edx
        call public_40ae40
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        jmp public_4137ac
        public_4138dd : nop
        lea ecx, ss:[esp+0x18]
        push ecx
/*FIXUP push offset public_4259a8 @0x4138e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4259a8
        inc esi
        push esi
        call dword ptr ds : [public_41b938]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_427828]
        add esp, 0xC
        push edx
        lea ecx, ds:[eax+0xCC]
        call public_401f70
        test al, al
        jne public_413a07
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea ecx, ss:[esp+0x10]
        push 0xF024
        push ecx
        mov dword ptr ss : [esp+0x130], 5
        call public_40ae40
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp]
        push edx
        push edi
        call public_40e160
        add esp, 0x10
        jmp public_4137b5
        public_41394c : nop
        movsx eax, byte ptr ds : [esi+1]
        push eax
        add ecx, 0xCC
        call public_401d40
        jmp public_413a07
        public_413961 : nop
        mov al, byte ptr ds : [esi+1]
        cmp al, 0x2B
        je public_413980
        test al, al
        je public_413980
        cmp al, 0x2D
        jne public_413a07
        mov byte ptr ds : [ecx+0xA79], 0
        jmp public_413a07
        public_413980 : nop
        mov byte ptr ds : [ecx+0xA79], 1
        jmp public_413a07
        public_413989 : nop
        push 1
        add ecx, 0xCC
        call public_4023b0
        public_413996 : nop
        lea ecx, ss:[esp+0x14]
        call public_418aaa
        lea ecx, ss:[esp+0x14]
        push 0xF025
        push ecx
        mov dword ptr ss : [esp+0x130], 6
        call public_40ae40
        mov edx, dword ptr ss : [esp+0x1C]
        push esi
        push edx
        push edi
        call public_40e160
        mov eax, dword ptr ss : [esp+0x14C]
        add esp, 0x14
        push eax
        push ebx
        push esi
        mov ecx, ebp
        call public_4192a8
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        call public_418aa4
        jmp public_413a07
        public_4139ef : nop
        mov ecx, dword ptr ss : [esp+0x138]
        mov edx, dword ptr ss : [esp+0x130]
        push ecx
        push ebx
        push edx
        mov ecx, ebp
        call public_4192a8
        public_413a07 : nop
        mov ecx, dword ptr ss : [esp+0x120]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x11C
        ret 0xC
        UNREACHABLE_TRAP(0x4136a0)
        ASM_EXPORT_ENTRY_SINGLE(0x413996, public_413996)
    }
}

#undef public_413707
#undef public_41374b
#undef public_41375c
#undef public_4137ac
#undef public_4137b5
#undef public_4137ce
#undef public_413801
#undef public_413846
#undef public_413888
#undef public_4138c8
#undef public_4138dd
#undef public_41394c
#undef public_413961
#undef public_413980
#undef public_413989
#undef public_413996
#undef public_4139ef
#undef public_413a07

#pragma init_seg(compiler)
extern "C" void const* const public_413996 = __AsmFindLabelExport(&internal_4136a0, 0x413996);
