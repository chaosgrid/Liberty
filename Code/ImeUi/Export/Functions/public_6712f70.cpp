#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712f70);
CLANG_FORWARD_PROC_SYMBOL(public_6713960);
CLANG_FORWARD_PROC_SYMBOL(public_6714bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6715600);

#define public_6712fbc _public_6712fbc
#define public_6712fcf _public_6712fcf
#define public_6712fd3 _public_6712fd3
#define public_6712fd8 _public_6712fd8
#define public_6713007 _public_6713007
#define public_67130c2 _public_67130c2
#define public_67130ef _public_67130ef
#define public_6713110 _public_6713110
#define public_6713165 _public_6713165
#define public_671316d _public_671316d
#define public_6713194 _public_6713194
#define public_671319c _public_671319c
#define public_67131a4 _public_67131a4
#define public_67131aa _public_67131aa
#define public_67131f8 _public_67131f8
#define public_671324b _public_671324b
#define public_6713267 _public_6713267
#define public_671326b _public_671326b
#define public_671327b _public_671327b
#define public_671329e _public_671329e
#define public_67132aa _public_67132aa
#define public_67132cb _public_67132cb
#define public_6713304 _public_6713304
#define public_6713333 _public_6713333
#define public_6713376 _public_6713376
#define public_67133bb _public_67133bb
#define public_6713434 _public_6713434
#define public_6713442 _public_6713442
#define public_6713470 _public_6713470
#define public_6713480 _public_6713480
#define public_671349b _public_671349b
#define public_67134b6 _public_67134b6
#define public_67134bc _public_67134bc
#define public_67134d6 _public_67134d6
#define public_67134e2 _public_67134e2
#define public_67134e9 _public_67134e9
#define public_6713504 _public_6713504
#define public_6713506 _public_6713506
#define public_6713514 _public_6713514
#define public_6713538 _public_6713538
#define public_6713542 _public_6713542
#define public_671355d _public_671355d
#define public_671357b _public_671357b
#define public_671358b _public_671358b
#define public_6713595 _public_6713595
#define public_6713647 _public_6713647
#define public_6713653 _public_6713653
#define public_6713676 _public_6713676
#define public_671368a _public_671368a
#define public_671375b _public_671375b
#define public_67137e5 _public_67137e5
#define public_67137f9 _public_67137f9
#define public_6713861 _public_6713861
#define public_671388f _public_671388f
#define public_671389a _public_671389a
#define public_67138bb _public_67138bb
#define public_67138c9 _public_67138c9
#define public_67138e3 _public_67138e3
#define public_6713919 _public_6713919
#define public_6713921 _public_6713921
#define public_6713935 _public_6713935

PROC_DECLARE(0x6712f70, internal_6712f70, public_6712f70);
extern "C" NAKED register_t __cdecl internal_6712f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov al, byte ptr ds : [public_671cfba]
        sub esp, 0x80
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        test al, al
        push edi
        je public_6713935
        mov al, byte ptr ds : [public_671cf9c]
        test al, al
        je public_6713935
        cmp dword ptr ds : [public_671b518], ebx
        je public_6713935
        mov al, byte ptr ss : [esp+0x94]
        test al, al
        mov al, byte ptr ss : [esp+0x98]
        jne public_6712fbc
        test al, al
        je public_6713935
        public_6712fbc : nop
        cmp dword ptr ds : [public_671b400], 2
        jne public_6712fcf
        test al, al
        je public_6713935
        jmp public_6712fd3
        public_6712fcf : nop
        test al, al
        je public_6712fd8
        public_6712fd3 : nop
        call public_6715600
        public_6712fd8 : nop
        call dword ptr ds : [public_67170a4]
        mov esi, dword ptr ds : [public_671cfb4]
        mov edx, dword ptr ds : [public_671cfb0]
        mov ecx, eax
        sub ecx, esi
        cmp ecx, edx
        jbe public_6713007
        mov dword ptr ds : [public_671cfb4], eax
        mov al, byte ptr ds : [public_671cfb8]
        test al, al
        sete dl
        mov byte ptr ds : [public_671cfb8], dl
        public_6713007 : nop
        mov ecx, dword ptr ds : [public_671b518]
        mov edx, dword ptr ds : [public_671b51c]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
/*FIXUP push offset public_671b7c0 @0x671301d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [public_671937c]
        mov ecx, dword ptr ds : [public_671b518]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [public_671b514]
        mov esi, dword ptr ds : [public_671b510]
        mov dword ptr ss : [esp+0x30], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea eax, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ds : [ecx]
        push eax
/*FIXUP push offset public_6719184 @0x6713051*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719184
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x48], offset public_671b5a8
        call dword ptr ds : [edx+0xC]
        cmp dword ptr ds : [public_671b400], 3
        jne public_67130c2
        mov eax, dword ptr ds : [public_671cfa0]
        cmp eax, ebx
        je public_67130c2
        cmp word ptr ds : [public_671b7c0], bx
        je public_67130c2
        mov di, word ptr ds : [eax*2+public_671b7c0]
        mov ecx, dword ptr ds : [public_671b518]
        mov word ptr ds : [eax*2+public_671b7c0], bx
        lea eax, ss:[esp+0x18]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
/*FIXUP push offset public_671b7c0 @0x67130a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_671cfa0]
        mov eax, dword ptr ss : [esp+0x28]
        sub esi, eax
        mov word ptr ds : [ecx*2+public_671b7c0], di
        public_67130c2 : nop
        mov edx, dword ptr ds : [public_671cfc4]
        mov byte ptr ss : [esp+0x13], 0
        and edx, 0x3FF
        mov dword ptr ss : [esp+0x40], esi
        cmp edx, 0x12
        mov dword ptr ss : [esp+0x2C], esi
        jne public_67130ef
        mov al, byte ptr ds : [public_671cfb8]
        test al, al
        je public_67132cb
        xor ebx, ebx
        public_67130ef : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x14], ebx
        cmp eax, ebx
        jle public_67132cb
        mov ebx, offset public_671b7c2
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x24], ebx
        public_6713110 : nop
        mov ecx, dword ptr ds : [public_671b518]
        mov bp, word ptr ds : [ebx]
        mov esi, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x18]
        xor edi, edi
        push edx
        lea edx, ss:[esp+0x30]
        mov word ptr ds : [ebx], di
        mov eax, dword ptr ds : [ecx]
        push edx
/*FIXUP push offset public_671b7c0 @0x671312e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x14]
        add eax, ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x2C], eax
        mov cl, byte ptr ds : [edx+public_671b410]
        sub eax, esi
        cmp ecx, 4
        mov word ptr ds : [ebx], bp
        mov dword ptr ss : [esp+0x28], eax
        ja public_67131aa
/*FIXUP jmp dword ptr ds : [ecx*4+public_6713940] @0x671315e*/
  JMPTB cmp ecx, 0
  JMPTB je public_6713165
  JMPTB cmp ecx, 1
  JMPTB je public_671316d
  JMPTB cmp ecx, 2
  JMPTB je public_6713194
  JMPTB cmp ecx, 3
  JMPTB je public_671319c
  JMPTB cmp ecx, 4
  JMPTB je public_67131a4
  JMPTB int 3
        public_6713165 : nop
        mov edi, dword ptr ds : [public_671b534]
        jmp public_67131aa
        public_671316d : nop
        mov edi, dword ptr ds : [public_671b538]
        push 0
        call public_6714bd0
        and eax, 0xFFFF
        add esp, 4
        cmp eax, 0x804
        mov eax, dword ptr ss : [esp+0x28]
        je public_67131aa
        mov byte ptr ss : [esp+0x13], 1
        jmp public_67131aa
        public_6713194 : nop
        mov edi, dword ptr ds : [public_671b53c]
        jmp public_67131aa
        public_671319c : nop
        mov edi, dword ptr ds : [public_671b540]
        jmp public_67131aa
        public_67131a4 : nop
        mov edi, dword ptr ds : [public_671b544]
        public_67131aa : nop
        mov ecx, dword ptr ds : [public_671b400]
        cmp ecx, 3
        jne public_67131f8
        mov cl, byte ptr ss : [esp+0x94]
        test cl, cl
        je public_671326b
        cmp esi, dword ptr ds : [public_671b524]
        jl public_671326b
        cmp esi, dword ptr ds : [public_671b52c]
        jg public_671326b
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x30]
        add edx, ecx
        push edi
        add eax, esi
        push edx
        push eax
        push ecx
        push esi
        call dword ptr ds : [public_671b7ac]
        add esp, 0x14
        jmp public_671326b
        public_67131f8 : nop
        cmp ecx, 2
        jne public_671326b
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x18]
        sar ecx, 1
        cmp ecx, 0xFB
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        setb bl
        add edx, edi
        add eax, esi
        push edx
        push eax
        push edi
        push esi
        call dword ptr ds : [public_671b7ac]
        add esp, 0x14
        test bl, bl
        je public_671324b
        mov eax, dword ptr ss : [esp+0x24]
        mov cx, word ptr ds : [eax-2]
        mov eax, dword ptr ss : [esp+0x3C]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x34]
        add eax, 2
        mov dword ptr ss : [esp+0x34], eax
        public_671324b : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_671cfa0]
        cmp edx, eax
        jne public_6713267
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push edi
        push esi
        call public_6713960
        add esp, 0xC
        public_6713267 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        public_671326b : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_671327b
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_671329e
        public_671327b : nop
        push 0
        call public_6714bd0
        and eax, 0xFFFF
        add esp, 4
        cmp eax, 0x804
        jne public_67132aa
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_671cfa4]
        cmp ecx, eax
        jne public_67132aa
        public_671329e : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], edx
        public_67132aa : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x38]
        inc eax
        add ebx, 2
        cmp eax, ecx
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x24], ebx
        jl public_6713110
        public_67132cb : nop
        cmp dword ptr ds : [public_671b400], 2
        jne public_6713376
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        je public_6713304
        mov eax, dword ptr ds : [public_671cfa0]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        jne public_6713304
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push eax
        call public_6713960
        add esp, 0xC
        public_6713304 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ds : [public_671b514]
        mov esi, offset public_671b5a8
        mov word ptr ds : [eax], 0
        mov word ptr ds : [eax+2], 0
        cmp word ptr ds : [public_671b5a8], 0
        mov eax, dword ptr ds : [public_671b510]
        je public_6713376
        mov ebx, dword ptr ds : [public_671937c]
        public_6713333 : nop
        mov ecx, esi
        sub ecx, offset public_671b5a8
        sar ecx, 1
        cmp ecx, 0x100
        jae public_6713376
        mov ecx, dword ptr ds : [public_671b518]
        push edi
        push eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [public_671b518]
        push esi
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        push esi
        call ebx
        mov edx, dword ptr ss : [esp+0x18]
        lea esi, ds:[esi+eax*2+2]
        mov eax, dword ptr ds : [public_671b524]
        add edi, edx
        cmp word ptr ds : [esi], 0
        jne public_6713333
        public_6713376 : nop
        mov al, byte ptr ss : [esp+0x98]
        test al, al
        je public_6713935
        mov eax, dword ptr ds : [public_671ceec]
        xor edi, edi
        cmp eax, edi
        je public_6713935
        cmp word ptr ds : [public_671bad0], di
        je public_6713935
        cmp dword ptr ss : [esp+0x1C], edi
        jne public_67133bb
        mov ecx, dword ptr ds : [public_671b510]
        mov edx, dword ptr ds : [public_671b514]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        public_67133bb : nop
        mov ecx, dword ptr ds : [public_671b518]
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x50], edi
        mov dword ptr ss : [esp+0x4C], edi
        mov eax, dword ptr ds : [ecx]
        push edx
/*FIXUP push offset public_6719180 @0x67133d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719180
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [public_671b518]
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x3C]
        mov eax, dword ptr ds : [ecx]
        push edx
/*FIXUP push offset public_6719184 @0x67133ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719184
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x14], edi
        inc eax
        shr eax, 1
        mov dword ptr ss : [esp+0x24], eax
        mov al, byte ptr ds : [public_671cfac]
        test al, al
        je public_6713434
        mov al, byte ptr ds : [public_671cfad]
        test al, al
        je public_6713434
        mov ecx, dword ptr ds : [public_671b518]
        lea eax, ss:[esp+0x4C]
        push eax
        lea eax, ss:[esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        push eax
/*FIXUP push offset public_671b560 @0x671342a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b560
        call dword ptr ds : [edx+0xC]
        jmp public_671349b
        public_6713434 : nop
        cmp word ptr ds : [public_671bad0], di
        je public_671349b
        mov esi, offset public_671bad0
        public_6713442 : nop
        cmp edi, dword ptr ds : [public_671cee8]
        jae public_671349b
        mov ecx, dword ptr ds : [public_671b518]
        lea eax, ss:[esp+0x3C]
        push eax
        lea eax, ss:[esp+0x44]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x48]
        cmp eax, ecx
        jle public_6713470
        mov dword ptr ss : [esp+0x48], eax
        public_6713470 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x4C]
        cmp ecx, edx
        jle public_6713480
        mov dword ptr ss : [esp+0x4C], ecx
        public_6713480 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        add esi, 0x200
        mov dword ptr ss : [esp+edi*4+0x50], eax
        add ebx, eax
        inc edi
        cmp word ptr ds : [esi], 0
        mov dword ptr ss : [esp+0x14], ebx
        jne public_6713442
        public_671349b : nop
        mov dl, byte ptr ds : [public_671cfac]
        test dl, dl
        je public_67134b6
        mov eax, dword ptr ds : [public_671ceec]
        mov ecx, dword ptr ds : [public_671cee8]
        cmp eax, ecx
        mov esi, eax
        jb public_67134bc
        public_67134b6 : nop
        mov esi, dword ptr ds : [public_671cee8]
        public_67134bc : nop
        mov al, byte ptr ds : [public_67190a4]
        mov dword ptr ss : [esp+0x3C], esi
        test al, al
        je public_67134e2
        test dl, dl
        je public_67134d6
        mov al, byte ptr ds : [public_671cfad]
        test al, al
        jne public_67134e2
        public_67134d6 : nop
        mov edi, esi
        imul edi, dword ptr ss : [esp+0x4C]
        add edi, 2
        jmp public_67134e9
        public_67134e2 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        lea edi, ds:[ecx+2]
        public_67134e9 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ds : [public_671b7b0]
        lea ebx, ds:[edi+ecx]
        add ebx, eax
        cmp ebx, ebp
        jbe public_6713504
        sub eax, edi
        jmp public_6713506
        public_6713504 : nop
        add eax, ecx
        public_6713506 : nop
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], eax
        cmp eax, ebx
        jge public_6713514
        mov dword ptr ss : [esp+0x20], ebx
        public_6713514 : nop
        test dl, dl
        jne public_6713542
        push ebx
        call public_6714bd0
        and eax, 0xFFFF
        add esp, 4
        cmp eax, 0x804
        jne public_6713538
        imul esi, dword ptr ss : [esp+0x24]
        add dword ptr ss : [esp+0x14], esi
        jmp public_671358b
        public_6713538 : nop
        mov dl, byte ptr ds : [public_671cfac]
        test dl, dl
        je public_671355d
        public_6713542 : nop
        mov al, byte ptr ds : [public_671cfad]
        test al, al
        je public_671355d
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x48]
        lea ecx, ds:[eax+edx*2+2]
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_671358b
        public_671355d : nop
        mov al, byte ptr ds : [public_67190a4]
        test al, al
        jne public_671357b
        test dl, dl
        jne public_671357b
        mov edx, dword ptr ss : [esp+0x48]
        lea eax, ds:[edx+1]
        imul eax, esi
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        jmp public_671358b
        public_671357b : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x48]
        lea edx, ds:[ecx+eax*2+2]
        mov dword ptr ss : [esp+0x14], edx
        public_671358b : nop
        cmp dword ptr ss : [esp+0x1C], ebx
        jge public_6713595
        mov dword ptr ss : [esp+0x1C], ebx
        public_6713595 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_6719080]
        add edi, esi
        lea ebx, ds:[eax+ebp]
        push ecx
        push edi
        push ebx
        push esi
        push ebp
        call dword ptr ds : [public_671b7ac]
        mov al, byte ptr ds : [public_671cfac]
        add esp, 0x14
        inc ebp
        inc esi
        dec ebx
        dec edi
        test al, al
        mov dword ptr ss : [esp+0x34], ebp
        jne public_6713676
        push 0
        call public_6714bd0
        and eax, 0xFFFF
        add esp, 4
        cmp eax, 0x804
        je public_6713676
        mov al, byte ptr ds : [public_67190a4]
        test al, al
        je public_6713647
        mov al, byte ptr ds : [public_671cfac]
        mov dword ptr ss : [esp+0x40], ebx
        test al, al
        jne public_671368a
        mov edx, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [public_671907c]
        shr edx, 1
        add edx, ebp
        push ecx
        add edx, ebx
        push edi
        lea ebx, ds:[edx+eax-1]
        push ebx
        push esi
        push ebp
        call dword ptr ds : [public_671b7ac]
        mov edx, dword ptr ds : [public_671907c]
        mov ecx, dword ptr ss : [esp+0x54]
        push edx
        push edi
        lea eax, ds:[ebx+1]
        push ecx
        push esi
        push eax
        call dword ptr ds : [public_671b7ac]
        add esp, 0x28
        jmp public_671368a
        public_6713647 : nop
        mov ebx, dword ptr ss : [esp+0x3C]
        test ebx, ebx
        jbe public_671368a
        mov eax, dword ptr ss : [esp+0x48]
        public_6713653 : nop
        mov edx, dword ptr ds : [public_671907c]
        add eax, ebp
        push edx
        push edi
        push eax
        push esi
        push ebp
        call dword ptr ds : [public_671b7ac]
        mov eax, dword ptr ss : [esp+0x5C]
        add esp, 0x14
        dec ebx
        lea ebp, ds:[eax+ebp+1]
        jne public_6713653
        jmp public_671368a
        public_6713676 : nop
        mov ecx, dword ptr ds : [public_671907c]
        push ecx
        push edi
        push ebx
        push esi
        push ebp
        call dword ptr ds : [public_671b7ac]
        add esp, 0x14
        public_671368a : nop
        mov al, byte ptr ds : [public_671cfac]
        mov edi, dword ptr ss : [esp+0x34]
        test al, al
        je public_67137e5
        mov al, byte ptr ds : [public_671cfad]
        test al, al
        je public_67137e5
        mov ecx, dword ptr ss : [esp+0x24]
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_671b554]
        add edi, ecx
        test eax, eax
        jl public_671375b
        lea edx, ss:[esp+0x50]
/*FIXUP push offset public_671b560 @0x67136ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b560
        push edx
        call dword ptr ds : [public_6719374]
        mov eax, dword ptr ds : [public_671b554]
        mov ecx, dword ptr ds : [public_671b518]
        mov word ptr ss : [esp+eax*2+0x52], 0
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x40]
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_671b554]
        mov bx, word ptr ss : [esp+ecx*2+0x50]
        lea eax, ss:[esp+ecx*2+0x50]
        mov ecx, dword ptr ds : [public_671b518]
        mov word ptr ds : [eax], 0
        lea eax, ss:[esp+0x40]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x40]
        push eax
        lea eax, ss:[esp+0x58]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_671b554]
        mov edx, dword ptr ds : [public_6719080]
        mov eax, dword ptr ss : [esp+0x4C]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        mov word ptr ss : [esp+ecx*2+0x54], bx
        mov ecx, dword ptr ss : [esp+0x38]
        add eax, esi
        add ecx, edi
        push eax
        push ecx
        add edx, edi
        push esi
        push edx
        call dword ptr ds : [public_671b7ac]
        add esp, 0x14
        public_671375b : nop
        mov ecx, dword ptr ds : [public_671b518]
        push esi
        push edi
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [public_671b518]
        mov eax, dword ptr ds : [public_671b520]
        push eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_671b518]
/*FIXUP push offset public_671b560 @0x671377f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b560
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x3C]
        test eax, eax
        jl public_6713935
        mov ecx, dword ptr ds : [public_671b518]
        add eax, edi
        push esi
        push eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [public_671b520]
        mov ecx, dword ptr ds : [public_671b518]
        and edx, 0xFFFFFF
        mov eax, dword ptr ds : [ecx]
        not edx
        sub edx, 0x1000000
        push edx
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [public_671b554]
        mov ecx, dword ptr ds : [public_671b518]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+edx*2+0x50]
        push edx
        call dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x80
        ret 
        public_67137e5 : nop
        mov eax, dword ptr ds : [public_671cee8]
        xor ebp, ebp
        test eax, eax
        jle public_6713935
        mov ebx, offset public_671bad0
        public_67137f9 : nop
        cmp ebp, dword ptr ds : [public_671ceec]
        jae public_6713935
        mov eax, dword ptr ds : [public_671ced8]
        mov ecx, dword ptr ds : [public_671b518]
        cmp eax, ebp
        jne public_671388f
        mov edx, dword ptr ds : [public_671b520]
        mov eax, dword ptr ds : [ecx]
        and edx, 0xFFFFFF
        not edx
        sub edx, 0x1000000
        push edx
        call dword ptr ds : [eax+4]
        mov al, byte ptr ds : [public_671cfac]
        test al, al
        jne public_6713861
        mov al, byte ptr ds : [public_67190a4]
        test al, al
        jne public_6713861
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [public_6719080]
        mov edx, dword ptr ss : [esp+ebp*4+0x50]
        add ecx, esi
        push eax
        add edx, edi
        push ecx
        push edx
        push esi
        push edi
        call dword ptr ds : [public_671b7ac]
        add esp, 0x14
        jmp public_671389a
        public_6713861 : nop
        mov eax, dword ptr ds : [public_6719080]
        lea ecx, ss:[ebp+1]
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        imul ecx, eax
        imul eax, ebp
        mov edx, dword ptr ss : [esp+0x18]
        add ecx, esi
        push ecx
        add eax, esi
        lea ecx, ds:[edx+edi-1]
        push ecx
        push eax
        push edi
        call dword ptr ds : [public_671b7ac]
        add esp, 0x14
        jmp public_671389a
        public_671388f : nop
        mov eax, dword ptr ds : [public_671b520]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+4]
        public_671389a : nop
        cmp word ptr ds : [ebx], 0
        je public_67138e3
        mov al, byte ptr ds : [public_671cfac]
        test al, al
        jne public_67138bb
        mov al, byte ptr ds : [public_67190a4]
        test al, al
        jne public_67138bb
        mov eax, dword ptr ss : [esp+0x38]
        push esi
        shr eax, 1
        jmp public_67138c9
        public_67138bb : nop
        mov eax, dword ptr ss : [esp+0x4C]
        imul eax, ebp
        add eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        public_67138c9 : nop
        mov ecx, dword ptr ds : [public_671b518]
        add eax, edi
        push eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [public_671b518]
        push ebx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_67138e3 : nop
        mov al, byte ptr ds : [public_671cfac]
        test al, al
        jne public_6713921
        mov al, byte ptr ds : [public_67190a4]
        test al, al
        jne public_6713921
        push 0
        call public_6714bd0
        and eax, 0xFFFF
        add esp, 4
        cmp eax, 0x804
        jne public_6713919
        mov eax, dword ptr ss : [esp+ebp*4+0x50]
        mov edx, dword ptr ss : [esp+0x24]
        add eax, edx
        add edi, eax
        jmp public_6713921
        public_6713919 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        lea edi, ds:[edi+ecx+1]
        public_6713921 : nop
        mov eax, dword ptr ds : [public_671cee8]
        inc ebp
        add ebx, 0x200
        cmp ebp, eax
        jl public_67137f9
        public_6713935 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x6712f70)
        ASM_EXPORT_ENTRY_FIRST(0x6713165, public_6713165)
        ASM_EXPORT_ENTRY(0x671316d, public_671316d)
        ASM_EXPORT_ENTRY(0x6713194, public_6713194)
        ASM_EXPORT_ENTRY(0x671319c, public_671319c)
        ASM_EXPORT_ENTRY_LAST(0x67131a4, public_67131a4)
    }
}

#undef public_6712fbc
#undef public_6712fcf
#undef public_6712fd3
#undef public_6712fd8
#undef public_6713007
#undef public_67130c2
#undef public_67130ef
#undef public_6713110
#undef public_6713165
#undef public_671316d
#undef public_6713194
#undef public_671319c
#undef public_67131a4
#undef public_67131aa
#undef public_67131f8
#undef public_671324b
#undef public_6713267
#undef public_671326b
#undef public_671327b
#undef public_671329e
#undef public_67132aa
#undef public_67132cb
#undef public_6713304
#undef public_6713333
#undef public_6713376
#undef public_67133bb
#undef public_6713434
#undef public_6713442
#undef public_6713470
#undef public_6713480
#undef public_671349b
#undef public_67134b6
#undef public_67134bc
#undef public_67134d6
#undef public_67134e2
#undef public_67134e9
#undef public_6713504
#undef public_6713506
#undef public_6713514
#undef public_6713538
#undef public_6713542
#undef public_671355d
#undef public_671357b
#undef public_671358b
#undef public_6713595
#undef public_6713647
#undef public_6713653
#undef public_6713676
#undef public_671368a
#undef public_671375b
#undef public_67137e5
#undef public_67137f9
#undef public_6713861
#undef public_671388f
#undef public_671389a
#undef public_67138bb
#undef public_67138c9
#undef public_67138e3
#undef public_6713919
#undef public_6713921
#undef public_6713935

#pragma init_seg(compiler)
extern "C" void const* const public_6713165 = __AsmFindLabelExport(&internal_6712f70, 0x6713165);
extern "C" void const* const public_671316d = __AsmFindLabelExport(&internal_6712f70, 0x671316d);
extern "C" void const* const public_6713194 = __AsmFindLabelExport(&internal_6712f70, 0x6713194);
extern "C" void const* const public_671319c = __AsmFindLabelExport(&internal_6712f70, 0x671319c);
extern "C" void const* const public_67131a4 = __AsmFindLabelExport(&internal_6712f70, 0x67131a4);
