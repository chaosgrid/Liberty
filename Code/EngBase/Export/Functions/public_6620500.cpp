#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_661a130);
CLANG_FORWARD_PROC_SYMBOL(public_661eb30);
CLANG_FORWARD_PROC_SYMBOL(public_66201b0);
CLANG_FORWARD_PROC_SYMBOL(public_6620500);
CLANG_FORWARD_PROC_SYMBOL(public_6622b60);
CLANG_FORWARD_PROC_SYMBOL(public_6622df0);
CLANG_FORWARD_PROC_SYMBOL(public_66230f0);
CLANG_FORWARD_PROC_SYMBOL(public_66237a0);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6620524 _public_6620524
#define public_6620536 _public_6620536
#define public_6620544 _public_6620544
#define public_662055c _public_662055c
#define public_6620580 _public_6620580
#define public_6620596 _public_6620596
#define public_66205b9 _public_66205b9
#define public_66205d7 _public_66205d7
#define public_662065b _public_662065b
#define public_6620671 _public_6620671
#define public_6620694 _public_6620694
#define public_66206b0 _public_66206b0
#define public_66206b2 _public_66206b2
#define public_6620700 _public_6620700
#define public_662070b _public_662070b
#define public_6620723 _public_6620723
#define public_662075a _public_662075a
#define public_6620784 _public_6620784
#define public_66207a3 _public_66207a3
#define public_6620812 _public_6620812
#define public_6620835 _public_6620835
#define public_6620851 _public_6620851
#define public_6620876 _public_6620876
#define public_662089c _public_662089c
#define public_66208d7 _public_66208d7
#define public_6620988 _public_6620988
#define public_6620993 _public_6620993
#define public_66209b0 _public_66209b0
#define public_66209cd _public_66209cd
#define public_66209ea _public_66209ea
#define public_6620a07 _public_6620a07
#define public_6620a27 _public_6620a27
#define public_6620a47 _public_6620a47
#define public_6620a75 _public_6620a75
#define public_6620a8b _public_6620a8b
#define public_6620a92 _public_6620a92
#define public_6620a99 _public_6620a99
#define public_6620aa0 _public_6620aa0
#define public_6620aa7 _public_6620aa7
#define public_6620aa9 _public_6620aa9
#define public_6620b9e _public_6620b9e
#define public_6620c69 _public_6620c69
#define public_6620db6 _public_6620db6
#define public_6620f1c _public_6620f1c
#define public_662105d _public_662105d
#define public_6621079 _public_6621079
#define public_66210bc _public_66210bc
#define public_66210cb _public_66210cb
#define public_66210e0 _public_66210e0
#define public_66210fe _public_66210fe
#define public_6621109 _public_6621109

PROC_DECLARE(0x6620500, internal_6620500, public_6620500);
extern "C" NAKED register_t __cdecl internal_6620500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0x2428
        call public_6628230
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2438]
        cmp esi, 0xFFFFFFFF
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6620524
        xor ebx, ebx
        cmp esi, ebx
        jne public_6620536
        public_6620524 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0x2428
        ret 0xC
        public_6620536 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        add esi, 0x18
        cmp eax, ebx
        jne public_6620544
        xor ebp, ebp
        jmp public_662055c
        public_6620544 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_662055c : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x21C], ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x220], ebx
        mov byte ptr ss : [esp+0x1DC], 0
        lea edi, ss:[ebp+1]
        jne public_6620580
        xor edx, edx
        jmp public_6620596
        public_6620580 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6620596 : nop
        cmp edx, edi
        mov ecx, esi
        jae public_66205b9
        mov ebx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x1DC]
        push edx
        call public_6622b60
        sub edi, eax
        mov ecx, esi
        push edi
        push ebx
        call public_6622df0
        jmp public_66205d7
        public_66205b9 : nop
        call public_6622b60
        cmp edi, eax
        jae public_66205d7
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ds:[edi+edi*8]
        push eax
        lea eax, ds:[edx+ecx*8]
        mov ecx, esi
        push eax
        call public_66230f0
        public_66205d7 : nop
        mov ecx, dword ptr ss : [esp+0x243C]
        lea edi, ss:[ebp+ebp*8]
        mov ebx, dword ptr ss : [esp+0x2440]
        mov eax, dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        shl edi, 3
        lea edx, ds:[edi+eax]
        mov eax, dword ptr ss : [esp+0x2444]
        push edx
        push eax
        push 0xFFFFFFFF
        push ebx
/*FIXUP push offset public_662a7e8 @0x6620602*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a7e8
        call public_66201b0
        test eax, eax
        jge public_66206b0
        mov ecx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a798 @0x662061a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a798
        push 0x331
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x6620629*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x662062e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        add esp, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x21C], ecx
        mov dword ptr ss : [esp+0x220], ecx
        mov byte ptr ss : [esp+0x1DC], cl
        jne public_662065b
        xor edx, edx
        jmp public_6620671
        public_662065b : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6620671 : nop
        cmp edx, ebp
        jae public_6620694
        mov edi, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x1DC]
        push ecx
        mov ecx, esi
        call public_6622b60
        sub ebp, eax
        mov ecx, esi
        push ebp
        push edi
        call public_6622df0
        jmp public_66206b0
        public_6620694 : nop
        mov ecx, esi
        call public_6622b60
        cmp ebp, eax
        jae public_66206b0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        push edx
        push eax
        mov ecx, esi
        call public_66230f0
        public_66206b0 : nop
        xor eax, eax
        public_66206b2 : nop
        mov cl, byte ptr ds : [eax+public_662a790]
        mov byte ptr ss : [esp+eax+0x2D8], cl
        inc eax
        test cl, cl
        jne public_66206b2
        lea edi, ss:[esp+0x2D8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edx, dword ptr ds : [ebx]
        repne scasb
        mov cx, word ptr ds : [public_662a054]
        lea eax, ss:[esp+0x2F8]
        mov word ptr ds : [edi-1], cx
        lea ecx, ss:[esp+0x2D8]
        push eax
        push ecx
        push ebx
        call dword ptr ds : [edx+0x48]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        je public_662089c
        public_6620700 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_662070b
        xor edi, edi
        jmp public_6620723
        public_662070b : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6620723 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        cmp eax, edx
        mov dword ptr ss : [esp+0x21C], edx
        mov dword ptr ss : [esp+0x220], edx
        mov byte ptr ss : [esp+0x1DC], dl
        lea ebp, ds:[edi+1]
        je public_662075a
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_662075a : nop
        cmp edx, ebp
        mov ecx, esi
        jae public_6620784
        mov ebx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x1DC]
        push edx
        call public_6622b60
        sub ebp, eax
        mov ecx, esi
        push ebp
        push ebx
        call public_6622df0
        mov ebx, dword ptr ss : [esp+0x2440]
        jmp public_66207a3
        public_6620784 : nop
        call public_6622b60
        cmp ebp, eax
        jae public_66207a3
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[ebp+ebp*8]
        push eax
        lea eax, ds:[edx+ecx*8]
        mov ecx, esi
        push eax
        call public_66230f0
        public_66207a3 : nop
        mov ecx, dword ptr ss : [esp+0x243C]
        lea ebp, ds:[edi+edi*8]
        shl ebp, 3
        mov eax, dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+ebp]
        mov eax, dword ptr ss : [esp+0x2444]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x330]
        push ebx
        push edx
        call public_66201b0
        test eax, eax
        jge public_6620876
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        cmp eax, edx
        mov dword ptr ss : [esp+0x2D0], edx
        mov dword ptr ss : [esp+0x2D4], edx
        mov byte ptr ss : [esp+0x290], dl
        je public_6620812
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6620812 : nop
        cmp edx, edi
        jae public_6620835
        mov ebp, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x290]
        push ecx
        mov ecx, esi
        call public_6622b60
        sub edi, eax
        mov ecx, esi
        push edi
        push ebp
        call public_6622df0
        jmp public_6620851
        public_6620835 : nop
        mov ecx, esi
        call public_6622b60
        cmp edi, eax
        jae public_6620851
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, ebp
        push edx
        push eax
        mov ecx, esi
        call public_66230f0
        public_6620851 : nop
        mov ecx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a798 @0x6620857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a798
        push 0x345
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x6620866*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x662086b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6620876 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x2F8]
        push eax
        push ecx
        push ebx
        call dword ptr ds : [edx+0x4C]
        test eax, eax
        jne public_6620700
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x50]
        public_662089c : nop
        mov ecx, dword ptr ds : [ebx]
/*FIXUP push offset public_662a788 @0x662089e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a788
        push ebx
        call dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_6621109
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x2F8]
        push eax
/*FIXUP push offset public_662a054 @0x66208b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a054
        push ebx
        call dword ptr ds : [edx+0x48]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], esi
        je public_66210fe
        mov ebp, dword ptr ds : [public_6629008]
        public_66208d7 : nop
        cmp byte ptr ss : [esp+0x324], 0x2E
        je public_66210e0
        mov edx, dword ptr ds : [ebx]
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x1E4]
        mov dword ptr ss : [esp+0x1E0], offset public_662a030
        rep stosd
        lea eax, ss:[esp+0x1DC]
        lea ecx, ss:[esp+0x324]
        push eax
        push ebx
        mov dword ptr ss : [esp+0x1F4], 0x80000000
        mov dword ptr ss : [esp+0x1F8], 1
        mov dword ptr ss : [esp+0x200], 3
        mov dword ptr ss : [esp+0x204], 0x8000080
        mov dword ptr ss : [esp+0x1F0], ecx
        mov dword ptr ss : [esp+0x1E4], 0x34
        mov dword ptr ss : [esp+0x214], esi
        call dword ptr ds : [edx+0x7C]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_66210e0
        mov ecx, dword ptr ds : [ebx]
        push 0
        push eax
        push ebx
        call dword ptr ds : [ecx+0x28]
        lea edx, ss:[esp+0x324]
/*FIXUP push offset public_662a784 @0x6620977*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a784
        push edx
        mov esi, eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6620993
        public_6620988 : nop
        mov dword ptr ss : [esp+0x10], eax
/*FIXUP jmp dword ptr ds : [eax*4+public_6621118] @0x662098c*/
  JMPTB cmp eax, 0
  JMPTB je public_6620a8b
  JMPTB cmp eax, 1
  JMPTB je public_6620a92
  JMPTB cmp eax, 2
  JMPTB je public_6620a92
  JMPTB cmp eax, 3
  JMPTB je public_6620a99
  JMPTB cmp eax, 4
  JMPTB je public_6620aa0
  JMPTB cmp eax, 5
  JMPTB je public_6620a8b
  JMPTB cmp eax, 6
  JMPTB je public_6620a8b
  JMPTB int 3
        public_6620993 : nop
        lea eax, ss:[esp+0x324]
/*FIXUP push offset public_662a77c @0x662099a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a77c
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_66209b0
        mov eax, 1
        jmp public_6620988
        public_66209b0 : nop
        lea ecx, ss:[esp+0x324]
/*FIXUP push offset public_662a778 @0x66209b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a778
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_66209cd
        mov eax, 2
        jmp public_6620988
        public_66209cd : nop
        lea edx, ss:[esp+0x324]
/*FIXUP push offset public_662a774 @0x66209d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a774
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_66209ea
        mov eax, 3
        jmp public_6620988
        public_66209ea : nop
        lea eax, ss:[esp+0x324]
/*FIXUP push offset public_662a76c @0x66209f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a76c
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6620a07
        mov eax, 4
        jmp public_6620988
        public_6620a07 : nop
        lea ecx, ss:[esp+0x324]
/*FIXUP push offset public_662a764 @0x6620a0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a764
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6620a27
        mov eax, 5
        jmp public_6620988
        public_6620a27 : nop
        lea edx, ss:[esp+0x324]
/*FIXUP push offset public_662a75c @0x6620a2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a75c
        push edx
        call ebp
        add esp, 8
        test eax, eax
        jne public_6620a47
        mov eax, 6
        jmp public_6620988
        public_6620a47 : nop
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
/*FIXUP push offset public_662a728 @0x6620a4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a728
        push 0x376
        mov eax, 0x100002
/*FIXUP push offset public_662a5c8 @0x6620a5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x6620a63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push eax
        mov eax, dword ptr ds : [public_6629004]
        xor ebp, ebp
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6620a75 : nop
        mov eax, esi
        xor edx, edx
        div ebp
        xor esi, esi
        cmp eax, esi
        jbe public_66210cb
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6620aa9
        public_6620a8b : nop
        mov ebp, 0xB0
        jmp public_6620a75
        public_6620a92 : nop
        mov ebp, 0xD0
        jmp public_6620a75
        public_6620a99 : nop
        mov ebp, 0xD8
        jmp public_6620a75
        public_6620aa0 : nop
        mov ebp, 0xD4
        jmp public_6620a75
        public_6620aa7 : nop
        xor esi, esi
        public_6620aa9 : nop
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0xB4]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0xFC]
        push ebp
        push eax
        push edx
        push ebx
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_66210bc
        cmp dword ptr ss : [esp+0xB4], ebp
        jne public_66210bc
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        call public_661a130
        mov esi, dword ptr ds : [public_662900c]
        mov ecx, 0x17
        xor eax, eax
        lea edi, ss:[esp+0x28]
        rep stosd
        lea ecx, ss:[esp+0xF4]
        lea eax, ss:[esp+0xF4]
        push ecx
        mov dword ptr ss : [esp+0x1D8], eax
        call esi
        mov edi, dword ptr ss : [esp+0x2440]
        add esp, 4
        lea edx, ss:[esp+0x1D4]
        mov ecx, edi
        push edx
        mov dword ptr ss : [esp+0x1DC], eax
        call public_661eb30
        mov dword ptr ss : [esp+0x24], eax
        lea ecx, ss:[esp+0x134]
        lea eax, ss:[esp+0x134]
        push ecx
        mov dword ptr ss : [esp+0x1D0], eax
        call esi
        add esp, 4
        lea edx, ss:[esp+0x1CC]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1D0], eax
        push edx
        call public_661eb30
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x20], eax
        test ecx, ecx
        je public_6621079
        test eax, eax
        je public_6621079
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 6
        mov dword ptr ss : [esp+0x28], eax
        ja public_662105d
/*FIXUP jmp dword ptr ds : [eax*4+public_6621134] @0x6620b97*/
  JMPTB cmp eax, 0
  JMPTB je public_6620b9e
  JMPTB cmp eax, 1
  JMPTB je public_6620c69
  JMPTB cmp eax, 2
  JMPTB je public_6620c69
  JMPTB cmp eax, 3
  JMPTB je public_6620db6
  JMPTB cmp eax, 4
  JMPTB je public_6620f1c
  JMPTB cmp eax, 5
  JMPTB je public_6620b9e
  JMPTB cmp eax, 6
  JMPTB je public_6620b9e
  JMPTB int 3
        public_6620b9e : nop
        mov ecx, dword ptr ss : [esp+0x178]
        mov eax, dword ptr ss : [esp+0x174]
        mov edx, dword ptr ss : [esp+0x17C]
        mov dword ptr ss : [esp+0xD4], ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x184]
        mov dword ptr ss : [esp+0xD0], eax
        mov dword ptr ss : [esp+0xD8], edx
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x180]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x188]
        mov dword ptr ss : [esp+0x270], ecx
        mov ecx, dword ptr ss : [esp+0x190]
        mov dword ptr ss : [esp+0x26C], eax
        mov eax, dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [esp+0x274], edx
        mov edx, dword ptr ss : [esp+0x194]
        mov dword ptr ss : [esp+0x27C], ecx
        mov ecx, dword ptr ss : [esp+0x19C]
        mov dword ptr ss : [esp+0x278], eax
        mov eax, dword ptr ss : [esp+0x198]
        mov dword ptr ss : [esp+0x280], edx
        mov edx, dword ptr ss : [esp+0x1A0]
        mov dword ptr ss : [esp+0x288], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x26C]
        lea edi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x284], eax
        mov dword ptr ss : [esp+0x28C], edx
        rep movsd
        jmp public_662105d
        public_6620c69 : nop
        mov ecx, dword ptr ss : [esp+0x178]
        mov eax, dword ptr ss : [esp+0x174]
        mov edx, dword ptr ss : [esp+0x17C]
        mov dword ptr ss : [esp+0xE0], ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ss : [esp+0x184]
        mov dword ptr ss : [esp+0xDC], eax
        mov dword ptr ss : [esp+0xE4], edx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x180]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x188]
        mov dword ptr ss : [esp+0xBC], ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x190]
        mov dword ptr ss : [esp+0xB8], eax
        mov dword ptr ss : [esp+0xC0], edx
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x194]
        mov dword ptr ss : [esp+0x24C], ecx
        mov ecx, dword ptr ss : [esp+0x19C]
        mov dword ptr ss : [esp+0x248], eax
        mov eax, dword ptr ss : [esp+0x198]
        mov dword ptr ss : [esp+0x250], edx
        mov edx, dword ptr ss : [esp+0x1A0]
        mov dword ptr ss : [esp+0x258], ecx
        mov ecx, dword ptr ss : [esp+0x1A8]
        mov dword ptr ss : [esp+0x254], eax
        mov eax, dword ptr ss : [esp+0x1A4]
        mov dword ptr ss : [esp+0x25C], edx
        mov edx, dword ptr ss : [esp+0x1AC]
        mov dword ptr ss : [esp+0x264], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x248]
        lea edi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x260], eax
        mov eax, dword ptr ss : [esp+0x1B0]
        mov dword ptr ss : [esp+0x268], edx
        mov edx, dword ptr ss : [esp+0x1B8]
        mov dword ptr ss : [esp+0xE8], eax
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1B4]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ss : [esp+0x1BC]
        mov dword ptr ss : [esp+0xEC], ecx
        mov dword ptr ss : [esp+0x6C], ecx
        mov ecx, dword ptr ss : [esp+0x1C0]
        mov dword ptr ss : [esp+0xF0], edx
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], ecx
        jmp public_662105d
        public_6620db6 : nop
        mov ecx, dword ptr ss : [esp+0x17C]
        mov edx, dword ptr ss : [esp+0x174]
        mov eax, dword ptr ss : [esp+0x178]
        mov dword ptr ss : [esp+0xB0], ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x188]
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ss : [esp+0x180]
        mov dword ptr ss : [esp+0xAC], eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x184]
        mov dword ptr ss : [esp+0x8C], ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x194]
        mov dword ptr ss : [esp+0x84], edx
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [esp+0x88], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x190]
        mov dword ptr ss : [esp+0x22C], ecx
        mov ecx, dword ptr ss : [esp+0x1A0]
        mov dword ptr ss : [esp+0x224], edx
        mov edx, dword ptr ss : [esp+0x198]
        mov dword ptr ss : [esp+0x228], eax
        mov eax, dword ptr ss : [esp+0x19C]
        mov dword ptr ss : [esp+0x238], ecx
        mov ecx, dword ptr ss : [esp+0x1AC]
        mov dword ptr ss : [esp+0x230], edx
        mov edx, dword ptr ss : [esp+0x1A4]
        mov dword ptr ss : [esp+0x234], eax
        mov eax, dword ptr ss : [esp+0x1A8]
        mov dword ptr ss : [esp+0x244], ecx
        mov dword ptr ss : [esp+0x23C], edx
        mov edx, dword ptr ss : [esp+0x1B0]
        mov ecx, 9
        lea esi, ss:[esp+0x224]
        lea edi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x240], eax
        mov eax, dword ptr ss : [esp+0x1B4]
        mov dword ptr ss : [esp+0xC4], edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1B8]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ss : [esp+0x1BC]
        mov dword ptr ss : [esp+0xC8], eax
        mov dword ptr ss : [esp+0xCC], ecx
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ss : [esp+0x1C0]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ss : [esp+0x1C4]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ss : [esp+0x1C8]
        mov dword ptr ss : [esp+0x78], eax
        mov dword ptr ss : [esp+0x7C], ecx
        mov dword ptr ss : [esp+0x80], edx
        jmp public_662105d
        public_6620f1c : nop
        mov ecx, dword ptr ss : [esp+0x178]
        mov eax, dword ptr ss : [esp+0x174]
        mov edx, dword ptr ss : [esp+0x17C]
        mov dword ptr ss : [esp+0xA0], ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ss : [esp+0x184]
        mov dword ptr ss : [esp+0x9C], eax
        mov dword ptr ss : [esp+0xA4], edx
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x180]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x188]
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x190]
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x194]
        mov dword ptr ss : [esp+0x294], ecx
        mov ecx, dword ptr ss : [esp+0x19C]
        mov dword ptr ss : [esp+0x290], eax
        mov eax, dword ptr ss : [esp+0x198]
        mov dword ptr ss : [esp+0x298], edx
        mov edx, dword ptr ss : [esp+0x1A0]
        mov dword ptr ss : [esp+0x2A0], ecx
        mov ecx, dword ptr ss : [esp+0x1A8]
        mov dword ptr ss : [esp+0x29C], eax
        mov eax, dword ptr ss : [esp+0x1A4]
        mov dword ptr ss : [esp+0x2A4], edx
        mov edx, dword ptr ss : [esp+0x1AC]
        mov dword ptr ss : [esp+0x2AC], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x290]
        lea edi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x2A8], eax
        mov eax, dword ptr ss : [esp+0x1B0]
        mov dword ptr ss : [esp+0x2B0], edx
        mov edx, dword ptr ss : [esp+0x1B8]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1B4]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ss : [esp+0x1BC]
        mov dword ptr ss : [esp+0x78], ecx
        mov ecx, dword ptr ss : [esp+0x1C0]
        mov dword ptr ss : [esp+0x7C], edx
        mov edx, dword ptr ss : [esp+0x1C4]
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        public_662105d : nop
        mov eax, dword ptr ss : [esp+0x243C]
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        lea ecx, ds:[eax+0x28]
        mov eax, dword ptr ds : [eax+0x30]
        push eax
        call public_66237a0
        jmp public_66210bc
        public_6621079 : nop
        lea ecx, ss:[esp+0x134]
        lea edx, ss:[esp+0xF4]
        push ecx
        push edx
        lea eax, ss:[esp+0x440]
/*FIXUP push offset public_662a70c @0x6621090*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a70c
        push eax
        call public_6611d80
        push eax
        push 0x389
        mov ecx, 0x100002
/*FIXUP push offset public_662a5c8 @0x66210a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a5c8
/*FIXUP push offset public_662a0d4 @0x66210ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        mov ecx, dword ptr ds : [public_6629004]
        call dword ptr ds : [ecx]
        add esp, 0x24
        public_66210bc : nop
        mov eax, dword ptr ss : [esp+0x18]
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        jne public_6620aa7
        public_66210cb : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x10]
        mov ebp, dword ptr ds : [public_6629008]
        mov esi, dword ptr ss : [esp+0x14]
        public_66210e0 : nop
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x2F8]
        push edx
        push esi
        push ebx
        call dword ptr ds : [ecx+0x4C]
        test eax, eax
        jne public_66208d7
        mov eax, dword ptr ds : [ebx]
        push esi
        push ebx
        call dword ptr ds : [eax+0x50]
        public_66210fe : nop
        mov ecx, dword ptr ds : [ebx]
/*FIXUP push offset public_662a03c @0x6621100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a03c
        push ebx
        call dword ptr ds : [ecx+0x60]
        public_6621109 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2428
        ret 0xC
        UNREACHABLE_TRAP(0x6620500)
        ASM_EXPORT_ENTRY_FIRST(0x6620a8b, public_6620a8b)
        ASM_EXPORT_ENTRY(0x6620a92, public_6620a92)
        ASM_EXPORT_ENTRY(0x6620a99, public_6620a99)
        ASM_EXPORT_ENTRY(0x6620aa0, public_6620aa0)
        ASM_EXPORT_ENTRY(0x6620b9e, public_6620b9e)
        ASM_EXPORT_ENTRY(0x6620c69, public_6620c69)
        ASM_EXPORT_ENTRY(0x6620db6, public_6620db6)
        ASM_EXPORT_ENTRY_LAST(0x6620f1c, public_6620f1c)
    }
}

#undef public_6620524
#undef public_6620536
#undef public_6620544
#undef public_662055c
#undef public_6620580
#undef public_6620596
#undef public_66205b9
#undef public_66205d7
#undef public_662065b
#undef public_6620671
#undef public_6620694
#undef public_66206b0
#undef public_66206b2
#undef public_6620700
#undef public_662070b
#undef public_6620723
#undef public_662075a
#undef public_6620784
#undef public_66207a3
#undef public_6620812
#undef public_6620835
#undef public_6620851
#undef public_6620876
#undef public_662089c
#undef public_66208d7
#undef public_6620988
#undef public_6620993
#undef public_66209b0
#undef public_66209cd
#undef public_66209ea
#undef public_6620a07
#undef public_6620a27
#undef public_6620a47
#undef public_6620a75
#undef public_6620a8b
#undef public_6620a92
#undef public_6620a99
#undef public_6620aa0
#undef public_6620aa7
#undef public_6620aa9
#undef public_6620b9e
#undef public_6620c69
#undef public_6620db6
#undef public_6620f1c
#undef public_662105d
#undef public_6621079
#undef public_66210bc
#undef public_66210cb
#undef public_66210e0
#undef public_66210fe
#undef public_6621109

#pragma init_seg(compiler)
extern "C" void const* const public_6620a8b = __AsmFindLabelExport(&internal_6620500, 0x6620a8b);
extern "C" void const* const public_6620a92 = __AsmFindLabelExport(&internal_6620500, 0x6620a92);
extern "C" void const* const public_6620a99 = __AsmFindLabelExport(&internal_6620500, 0x6620a99);
extern "C" void const* const public_6620aa0 = __AsmFindLabelExport(&internal_6620500, 0x6620aa0);
extern "C" void const* const public_6620b9e = __AsmFindLabelExport(&internal_6620500, 0x6620b9e);
extern "C" void const* const public_6620c69 = __AsmFindLabelExport(&internal_6620500, 0x6620c69);
extern "C" void const* const public_6620db6 = __AsmFindLabelExport(&internal_6620500, 0x6620db6);
extern "C" void const* const public_6620f1c = __AsmFindLabelExport(&internal_6620500, 0x6620f1c);
