#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1fe10);

#define public_6d1fe32 _public_6d1fe32
#define public_6d1fe45 _public_6d1fe45
#define public_6d1fe55 _public_6d1fe55
#define public_6d1fe67 _public_6d1fe67
#define public_6d1fe76 _public_6d1fe76
#define public_6d1fe80 _public_6d1fe80
#define public_6d1fea3 _public_6d1fea3
#define public_6d1fea9 _public_6d1fea9
#define public_6d1feb2 _public_6d1feb2
#define public_6d1fee7 _public_6d1fee7
#define public_6d1ff0c _public_6d1ff0c
#define public_6d1ff33 _public_6d1ff33
#define public_6d1ff4b _public_6d1ff4b
#define public_6d1ff63 _public_6d1ff63
#define public_6d1ff7b _public_6d1ff7b
#define public_6d1ff93 _public_6d1ff93
#define public_6d1ffab _public_6d1ffab
#define public_6d1ffc4 _public_6d1ffc4
#define public_6d1ffdf _public_6d1ffdf
#define public_6d1fff0 _public_6d1fff0
#define public_6d20006 _public_6d20006
#define public_6d20015 _public_6d20015
#define public_6d20020 _public_6d20020
#define public_6d20049 _public_6d20049
#define public_6d2007c _public_6d2007c
#define public_6d20094 _public_6d20094
#define public_6d200ac _public_6d200ac
#define public_6d200b0 _public_6d200b0
#define public_6d200d5 _public_6d200d5
#define public_6d200e7 _public_6d200e7
#define public_6d200ec _public_6d200ec
#define public_6d200fe _public_6d200fe
#define public_6d20103 _public_6d20103
#define public_6d20115 _public_6d20115
#define public_6d2011a _public_6d2011a
#define public_6d20132 _public_6d20132
#define public_6d20137 _public_6d20137
#define public_6d2013a _public_6d2013a
#define public_6d20157 _public_6d20157
#define public_6d20170 _public_6d20170
#define public_6d20180 _public_6d20180
#define public_6d20192 _public_6d20192
#define public_6d201a1 _public_6d201a1
#define public_6d201a5 _public_6d201a5
#define public_6d201ce _public_6d201ce
#define public_6d201e3 _public_6d201e3
#define public_6d201e5 _public_6d201e5
#define public_6d201ea _public_6d201ea
#define public_6d201f2 _public_6d201f2

PROC_DECLARE(0x6d1fe10, internal_6d1fe10, public_6d1fe10);
extern "C" NAKED register_t __cdecl internal_6d1fe10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ds : [public_6d64c18]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp]
        test ah, 2
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        je public_6d1fea3
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d1fea9
        public_6d1fe32 : nop
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d1fe45
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d1fea3
        public_6d1fe45 : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d1fe76
        public_6d1fe55 : nop
        cmp eax, edi
        je public_6d1fea9
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1fe55
        public_6d1fe67 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6d1fe32
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d1fe76 : nop
        cmp eax, edi
        je public_6d1fea9
        lea ebx, ds:[ebx]
        public_6d1fe80 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d1fe67
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1fe80
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d1fea3 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6d1feb2
        public_6d1fea9 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d1feb2 : nop
        cmp word ptr ds : [eax], 0x3F
        mov dword ptr ss : [esp+0x18], 0
        jne public_6d201f2
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp]
        test ch, 2
        mov dword ptr ss : [esp+0x18], 0x53
        je public_6d1ff0c
        cmp eax, edi
        je public_6d201f2
        mov ebx, dword ptr ds : [public_6d64c18]
        public_6d1fee7 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call ebx
        add esp, 4
        test eax, eax
        je public_6d1ff0c
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d1fee7
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6d1ff0c : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d201f2
        movzx ecx, word ptr ds : [eax]
        add ecx, 0xFFFFFFDF
        cmp ecx, 0x31
        ja public_6d200ac
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_6d20224] @0x6d1ff25*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6d20200] @0x6d1ff2c*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c00000000003454
  JMPTB mov ecx, 0
  JMPTB public_4c00000000003454 : nop
        je public_6d1ff4b
  JMPTB cmp ecx, 1
  JMPTB jne public_4c00000000003450
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003450 : nop
        je public_6d200ac
  JMPTB cmp ecx, 2
  JMPTB jne public_4c0000000000344c
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000344c : nop
        je public_6d1ff63
  JMPTB cmp ecx, 3
  JMPTB jne public_4c00000000003448
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003448 : nop
        je public_6d200ac
  JMPTB cmp ecx, 4
  JMPTB jne public_4c00000000003444
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003444 : nop
        je public_6d200ac
  JMPTB cmp ecx, 5
  JMPTB jne public_4c00000000003440
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003440 : nop
        je public_6d200ac
  JMPTB cmp ecx, 6
  JMPTB jne public_4c0000000000343c
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000343c : nop
        je public_6d200ac
  JMPTB cmp ecx, 7
  JMPTB jne public_4c00000000003438
  JMPTB mov ecx, 2
  JMPTB public_4c00000000003438 : nop
        je public_6d1ff7b
  JMPTB cmp ecx, 8
  JMPTB jne public_4c00000000003434
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003434 : nop
        je public_6d200ac
  JMPTB cmp ecx, 9
  JMPTB jne public_4c00000000003430
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003430 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c0000000000342c
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000342c : nop
        je public_6d200ac
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c00000000003428
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003428 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c00000000003424
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003424 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c00000000003420
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003420 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c0000000000341c
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000341c : nop
        je public_6d200ac
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c00000000003418
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003418 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x10
  JMPTB jne public_4c00000000003414
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003414 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x11
  JMPTB jne public_4c00000000003410
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003410 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x12
  JMPTB jne public_4c0000000000340c
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000340c : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x13
  JMPTB jne public_4c00000000003408
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003408 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x14
  JMPTB jne public_4c00000000003404
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003404 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x15
  JMPTB jne public_4c00000000003400
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003400 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x16
  JMPTB jne public_4c000000000033fc
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033fc : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x17
  JMPTB jne public_4c000000000033f8
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033f8 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x18
  JMPTB jne public_4c000000000033f4
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033f4 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x19
  JMPTB jne public_4c000000000033f0
  JMPTB mov ecx, 3
  JMPTB public_4c000000000033f0 : nop
        je public_6d201e5
  JMPTB cmp ecx, 0x1A
  JMPTB jne public_4c000000000033ec
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033ec : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x1B
  JMPTB jne public_4c000000000033e8
  JMPTB mov ecx, 4
  JMPTB public_4c000000000033e8 : nop
        je public_6d1ffab
  JMPTB cmp ecx, 0x1C
  JMPTB jne public_4c000000000033e4
  JMPTB mov ecx, 5
  JMPTB public_4c000000000033e4 : nop
        je public_6d1ff33
  JMPTB cmp ecx, 0x1D
  JMPTB jne public_4c000000000033e0
  JMPTB mov ecx, 6
  JMPTB public_4c000000000033e0 : nop
        je public_6d20094
  JMPTB cmp ecx, 0x1E
  JMPTB jne public_4c000000000033dc
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033dc : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x1F
  JMPTB jne public_4c000000000033d8
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033d8 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x20
  JMPTB jne public_4c000000000033d4
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033d4 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x21
  JMPTB jne public_4c000000000033d0
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033d0 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x22
  JMPTB jne public_4c000000000033cc
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033cc : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x23
  JMPTB jne public_4c000000000033c8
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033c8 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x24
  JMPTB jne public_4c000000000033c4
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033c4 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x25
  JMPTB jne public_4c000000000033c0
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033c0 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x26
  JMPTB jne public_4c000000000033bc
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033bc : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x27
  JMPTB jne public_4c000000000033b8
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033b8 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x28
  JMPTB jne public_4c000000000033b4
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033b4 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x29
  JMPTB jne public_4c000000000033b0
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033b0 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x2A
  JMPTB jne public_4c000000000033ac
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033ac : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x2B
  JMPTB jne public_4c000000000033a8
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033a8 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x2C
  JMPTB jne public_4c000000000033a4
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033a4 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x2D
  JMPTB jne public_4c000000000033a0
  JMPTB mov ecx, 8
  JMPTB public_4c000000000033a0 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x2E
  JMPTB jne public_4c0000000000339c
  JMPTB mov ecx, 8
  JMPTB public_4c0000000000339c : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x2F
  JMPTB jne public_4c00000000003398
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003398 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x30
  JMPTB jne public_4c00000000003394
  JMPTB mov ecx, 8
  JMPTB public_4c00000000003394 : nop
        je public_6d200ac
  JMPTB cmp ecx, 0x31
  JMPTB jne public_4c00000000003390
  JMPTB mov ecx, 7
  JMPTB public_4c00000000003390 : nop
        je public_6d1ff93
  JMPTB int 3
        public_6d1ff33 : nop
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x4B
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d1ff4b : nop
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x4C
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d1ff63 : nop
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x50
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d1ff7b : nop
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x51
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d1ff93 : nop
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x52
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d1ffab : nop
        add eax, 2
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ss : [ebp]
        test ch, 2
        je public_6d20049
        cmp eax, edi
        je public_6d201f2
        public_6d1ffc4 : nop
        mov edx, dword ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [edx]
        cmp ax, 0x23
        je public_6d1ffdf
        push eax
        call dword ptr ds : [public_6d64c18]
        add esp, 4
        test eax, eax
        je public_6d20049
        public_6d1ffdf : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d20015
        nop 
        public_6d1fff0 : nop
        cmp eax, edi
        je public_6d201f2
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d1fff0
        public_6d20006 : nop
        cmp dword ptr ds : [esi], edi
        jne public_6d1ffc4
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6d20015 : nop
        cmp eax, edi
        je public_6d201f2
        lea ecx, ds:[ecx]
        public_6d20020 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call dword ptr ds : [public_6d64c18]
        add esp, 4
        test eax, eax
        je public_6d20006
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d20020
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6d20049 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6d201f2
        movzx ecx, word ptr ds : [eax]
        cmp ecx, 0x21
        je public_6d2007c
        cmp ecx, 0x3D
        jne public_6d201f2
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x4D
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d2007c : nop
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x4E
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d20094 : nop
        add eax, 2
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov dword ptr ss : [esp+0x10], 0x4F
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        ret 8
        public_6d200ac : nop
        mov bl, 1
        mov edi, edi
        public_6d200b0 : nop
        mov ax, word ptr ds : [eax]
        cmp ax, 0x3A
        je public_6d201e3
        cmp ax, 0x29
        je public_6d201ea
        cmp ax, 0x2D
        jne public_6d200d5
        test bl, bl
        je public_6d200d5
        xor bl, bl
        jmp public_6d2013a
        public_6d200d5 : nop
        cmp ax, 0x69
        jne public_6d200ec
        test bl, bl
        mov eax, dword ptr ss : [ebp]
        je public_6d200e7
        or eax, 1
        jmp public_6d20137
        public_6d200e7 : nop
        and eax, 0xFFFFFFFE
        jmp public_6d20137
        public_6d200ec : nop
        cmp ax, 0x6D
        jne public_6d20103
        test bl, bl
        mov eax, dword ptr ss : [ebp]
        je public_6d200fe
        or eax, 4
        jmp public_6d20137
        public_6d200fe : nop
        and eax, 0xFFFFFFFB
        jmp public_6d20137
        public_6d20103 : nop
        cmp ax, 0x73
        jne public_6d2011a
        test bl, bl
        mov eax, dword ptr ss : [ebp]
        je public_6d20115
        or eax, 8
        jmp public_6d20137
        public_6d20115 : nop
        and eax, 0xFFFFFFF7
        jmp public_6d20137
        public_6d2011a : nop
        cmp ax, 0x78
        jne public_6d201f2
        test bl, bl
        mov eax, dword ptr ss : [ebp]
        je public_6d20132
        or eax, 0x200
        jmp public_6d20137
        public_6d20132 : nop
        and eax, 0xFFFFFDFF
        public_6d20137 : nop
        mov dword ptr ss : [ebp], eax
        public_6d2013a : nop
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov dword ptr ds : [esi], edx
        mov ecx, dword ptr ss : [ebp]
        test ch, 2
        mov eax, edx
        je public_6d201ce
        cmp eax, edi
        je public_6d201f2
        public_6d20157 : nop
        mov eax, dword ptr ds : [esi]
        movzx eax, word ptr ds : [eax]
        cmp ax, 0x23
        je public_6d20170
        push eax
        call dword ptr ds : [public_6d64c18]
        add esp, 4
        test eax, eax
        je public_6d201ce
        public_6d20170 : nop
        mov eax, dword ptr ds : [esi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        cmp cx, 0x23
        mov dword ptr ds : [esi], eax
        jne public_6d201a1
        public_6d20180 : nop
        cmp eax, edi
        je public_6d201f2
        mov dx, word ptr ds : [eax]
        add eax, 2
        cmp dx, 0xA
        mov dword ptr ds : [esi], eax
        jne public_6d20180
        public_6d20192 : nop
        cmp dword ptr ds : [esi], edi
        jne public_6d20157
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6d201a1 : nop
        cmp eax, edi
        je public_6d201f2
        public_6d201a5 : nop
        movzx eax, word ptr ds : [eax]
        push eax
        call dword ptr ds : [public_6d64c18]
        add esp, 4
        test eax, eax
        je public_6d20192
        mov edx, dword ptr ds : [esi]
        add edx, 2
        mov eax, edx
        cmp eax, edi
        mov dword ptr ds : [esi], edx
        jne public_6d201a5
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6d201ce : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        jne public_6d200b0
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6d201e3 : nop
        mov eax, dword ptr ds : [esi]
        public_6d201e5 : nop
        add eax, 2
        mov dword ptr ds : [esi], eax
        public_6d201ea : nop
        mov dword ptr ss : [esp+0x18], 0x4A
        public_6d201f2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d1fe10)
        ASM_EXPORT_ENTRY_FIRST(0x6d1ff33, public_6d1ff33)
        ASM_EXPORT_ENTRY(0x6d1ff4b, public_6d1ff4b)
        ASM_EXPORT_ENTRY(0x6d1ff63, public_6d1ff63)
        ASM_EXPORT_ENTRY(0x6d1ff7b, public_6d1ff7b)
        ASM_EXPORT_ENTRY(0x6d1ff93, public_6d1ff93)
        ASM_EXPORT_ENTRY(0x6d1ffab, public_6d1ffab)
        ASM_EXPORT_ENTRY(0x6d20094, public_6d20094)
        ASM_EXPORT_ENTRY(0x6d200ac, public_6d200ac)
        ASM_EXPORT_ENTRY_LAST(0x6d201e5, public_6d201e5)
    }
}

#undef public_6d1fe32
#undef public_6d1fe45
#undef public_6d1fe55
#undef public_6d1fe67
#undef public_6d1fe76
#undef public_6d1fe80
#undef public_6d1fea3
#undef public_6d1fea9
#undef public_6d1feb2
#undef public_6d1fee7
#undef public_6d1ff0c
#undef public_6d1ff33
#undef public_6d1ff4b
#undef public_6d1ff63
#undef public_6d1ff7b
#undef public_6d1ff93
#undef public_6d1ffab
#undef public_6d1ffc4
#undef public_6d1ffdf
#undef public_6d1fff0
#undef public_6d20006
#undef public_6d20015
#undef public_6d20020
#undef public_6d20049
#undef public_6d2007c
#undef public_6d20094
#undef public_6d200ac
#undef public_6d200b0
#undef public_6d200d5
#undef public_6d200e7
#undef public_6d200ec
#undef public_6d200fe
#undef public_6d20103
#undef public_6d20115
#undef public_6d2011a
#undef public_6d20132
#undef public_6d20137
#undef public_6d2013a
#undef public_6d20157
#undef public_6d20170
#undef public_6d20180
#undef public_6d20192
#undef public_6d201a1
#undef public_6d201a5
#undef public_6d201ce
#undef public_6d201e3
#undef public_6d201e5
#undef public_6d201ea
#undef public_6d201f2

#pragma init_seg(compiler)
extern "C" void const* const public_6d1ff33 = __AsmFindLabelExport(&internal_6d1fe10, 0x6d1ff33);
extern "C" void const* const public_6d1ff4b = __AsmFindLabelExport(&internal_6d1fe10, 0x6d1ff4b);
extern "C" void const* const public_6d1ff63 = __AsmFindLabelExport(&internal_6d1fe10, 0x6d1ff63);
extern "C" void const* const public_6d1ff7b = __AsmFindLabelExport(&internal_6d1fe10, 0x6d1ff7b);
extern "C" void const* const public_6d1ff93 = __AsmFindLabelExport(&internal_6d1fe10, 0x6d1ff93);
extern "C" void const* const public_6d1ffab = __AsmFindLabelExport(&internal_6d1fe10, 0x6d1ffab);
extern "C" void const* const public_6d20094 = __AsmFindLabelExport(&internal_6d1fe10, 0x6d20094);
extern "C" void const* const public_6d200ac = __AsmFindLabelExport(&internal_6d1fe10, 0x6d200ac);
extern "C" void const* const public_6d201e5 = __AsmFindLabelExport(&internal_6d1fe10, 0x6d201e5);
