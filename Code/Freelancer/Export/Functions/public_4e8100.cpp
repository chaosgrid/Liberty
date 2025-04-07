#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_48dc10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_4e8060);
CLANG_FORWARD_PROC_SYMBOL(public_4e8100);
CLANG_FORWARD_PROC_SYMBOL(public_4e8d30);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5472a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bea00);

#define public_4e816b _public_4e816b
#define public_4e8177 _public_4e8177
#define public_4e8191 _public_4e8191
#define public_4e81c5 _public_4e81c5
#define public_4e81d6 _public_4e81d6
#define public_4e81f6 _public_4e81f6
#define public_4e8206 _public_4e8206
#define public_4e8221 _public_4e8221
#define public_4e823f _public_4e823f
#define public_4e8289 _public_4e8289
#define public_4e83ba _public_4e83ba
#define public_4e83d6 _public_4e83d6
#define public_4e83ef _public_4e83ef
#define public_4e8409 _public_4e8409
#define public_4e8417 _public_4e8417
#define public_4e8436 _public_4e8436
#define public_4e8475 _public_4e8475
#define public_4e848c _public_4e848c
#define public_4e84a7 _public_4e84a7
#define public_4e84c1 _public_4e84c1
#define public_4e84cb _public_4e84cb
#define public_4e8501 _public_4e8501
#define public_4e8516 _public_4e8516
#define public_4e8519 _public_4e8519
#define public_4e855d _public_4e855d
#define public_4e8584 _public_4e8584
#define public_4e85b0 _public_4e85b0
#define public_4e860e _public_4e860e
#define public_4e8618 _public_4e8618
#define public_4e8640 _public_4e8640
#define public_4e864e _public_4e864e
#define public_4e8684 _public_4e8684
#define public_4e8699 _public_4e8699
#define public_4e86b3 _public_4e86b3
#define public_4e86e5 _public_4e86e5
#define public_4e86e7 _public_4e86e7
#define public_4e86f8 _public_4e86f8
#define public_4e8707 _public_4e8707
#define public_4e8758 _public_4e8758
#define public_4e875c _public_4e875c
#define public_4e87b2 _public_4e87b2
#define public_4e87d1 _public_4e87d1
#define public_4e881a _public_4e881a
#define public_4e8830 _public_4e8830
#define public_4e8839 _public_4e8839
#define public_4e8875 _public_4e8875
#define public_4e88e3 _public_4e88e3
#define public_4e88f7 _public_4e88f7
#define public_4e88fa _public_4e88fa
#define public_4e8916 _public_4e8916
#define public_4e8980 _public_4e8980
#define public_4e89a9 _public_4e89a9
#define public_4e89b4 _public_4e89b4
#define public_4e89d9 _public_4e89d9
#define public_4e8b1e _public_4e8b1e
#define public_4e8b43 _public_4e8b43
#define public_4e8b4a _public_4e8b4a
#define public_4e8b5a _public_4e8b5a
#define public_4e8b76 _public_4e8b76
#define public_4e8b92 _public_4e8b92
#define public_4e8be6 _public_4e8be6
#define public_4e8bfa _public_4e8bfa
#define public_4e8bfd _public_4e8bfd
#define public_4e8c19 _public_4e8c19
#define public_4e8c35 _public_4e8c35
#define public_4e8c38 _public_4e8c38
#define public_4e8c3e _public_4e8c3e
#define public_4e8ca8 _public_4e8ca8
#define public_4e8cd0 _public_4e8cd0
#define public_4e8cd3 _public_4e8cd3
#define public_4e8d0c _public_4e8d0c
#define public_4e8d0f _public_4e8d0f
#define public_4e8d11 _public_4e8d11

PROC_DECLARE(0x4e8100, internal_4e8100, public_4e8100);
extern "C" NAKED register_t __cdecl internal_4e8100()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bea00 @0x4e8102*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bea00
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x16C]
        mov eax, dword ptr ds : [edi+0xE0]
        push edi
        mov dword ptr ss : [esp+0x14], eax
        call public_5472a0
        xor esi, esi
        mov word ptr ds : [public_66fc60], si
        mov ecx, dword ptr ds : [edi+0xB0]
        mov ebp, eax
        push esi
        push ecx
        mov dword ptr ss : [esp+0x58], ebp
        xor bl, bl
        call public_5416c0
        add esp, 0xC
        cmp eax, esi
        je public_4e816b
        test dword ptr ss : [esp+0x10], 0xFDFF
        je public_4e816b
        mov bl, byte ptr ds : [eax+0xA8]
        public_4e816b : nop
        mov eax, dword ptr ss : [esp+0x10]
        test ah, ah
        js public_4e8177
        test bl, bl
        je public_4e81d6
        public_4e8177 : nop
        cmp ebp, esi
        je public_4e81d6
        mov esi, dword ptr ss : [esp+0x174]
        test esi, esi
        mov edi, dword ptr ds : [public_5c70ac]
        je public_4e8191
        cmp esi, 2
        jne public_4e81c5
        public_4e8191 : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66fc60 @0x4e819d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ebp
        push eax
        call public_4347e0
        add esp, 0x10
        cmp esi, 2
        jne public_4e81c5
/*FIXUP push offset public_5d0254 @0x4e81b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4e81b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 8
        jmp public_4e8c3e
        public_4e81c5 : nop
        cmp esi, 1
        je public_4e8c3e
        cmp esi, 2
        jmp public_4e8c38
        public_4e81d6 : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_4e8289
        cmp ebp, esi
        jne public_4e81f6
        xor al, al
        jmp public_4e8d11
        public_4e81f6 : nop
        mov esi, dword ptr ss : [esp+0x174]
        test esi, esi
        je public_4e8206
        cmp esi, 2
        jne public_4e8221
        public_4e8206 : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66fc60 @0x4e8212*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ebp
        push eax
        call public_4347e0
        add esp, 0x10
        public_4e8221 : nop
        cmp dword ptr ss : [esp+0x10], 0x10000000
        jne public_4e8c19
        test esi, esi
        je public_4e823f
        cmp esi, 2
        je public_4e823f
        xor al, al
        jmp public_4e8d11
        public_4e823f : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_4e8cd3
        mov eax, dword ptr ds : [edi+0xF0]
        cmp eax, 1
        jbe public_4e8cd3
        push eax
        lea edx, ss:[esp+0x60]
/*FIXUP push offset public_5cfb88 @0x4e8268*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb88
        push edx
        call dword ptr ds : [public_5c70ec]
        lea eax, ss:[esp+0x68]
        push eax
/*FIXUP push offset public_66fc60 @0x4e8279*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        jmp public_4e8cd0
        public_4e8289 : nop
        mov eax, dword ptr ds : [edi+0x104]
        push esi
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        mov dword ptr ss : [esp+0x5C], eax
        call dword ptr ds : [public_5c6320]
        add esp, 0xC
        test eax, eax
        jne public_4e89a9
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, 0xFFFFFFFF
        je public_4e89a9
        push eax
        call dword ptr ds : [public_5c64e8]
        mov ebx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ebx, 0x7F0000
        mov dword ptr ss : [esp+0x14], eax
        je public_4e8584
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x21], 0
        mov byte ptr ss : [esp+0x22], 0
        mov byte ptr ss : [esp+0x23], 0
        mov byte ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x25], 0
        mov byte ptr ss : [esp+0x26], 0
        mov byte ptr ss : [esp+0x27], 0
        mov byte ptr ss : [esp+0x28], 0
        mov byte ptr ss : [esp+0x29], 0
        mov byte ptr ss : [esp+0x2A], 0
        mov byte ptr ss : [esp+0x2B], 0
        mov byte ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x2D], 0
        mov dword ptr ss : [esp+0x164], 2
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov byte ptr ss : [esp+0x38], 0
        mov byte ptr ss : [esp+0x39], 0
        mov byte ptr ss : [esp+0x3A], 0
        mov byte ptr ss : [esp+0x3B], 0
        mov byte ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x3D], 0
        mov byte ptr ss : [esp+0x3E], 0
        mov byte ptr ss : [esp+0x3F], 0
        mov byte ptr ss : [esp+0x40], 0
        mov byte ptr ss : [esp+0x41], 0
        mov byte ptr ss : [esp+0x42], 0
        mov byte ptr ss : [esp+0x43], 0
        mov byte ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x45], 0
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        mov byte ptr ss : [esp+0x174], 3
        call dword ptr ds : [public_5c60a0]
        add esp, 0x10
        test eax, eax
        jne public_4e855d
        mov eax, dword ptr ss : [esp+0x1C]
        xor bl, bl
        cmp eax, esi
        jne public_4e83ba
        mov bl, 1
        public_4e83ba : nop
        mov esi, dword ptr ss : [esp+0x174]
        test esi, esi
        mov ebp, dword ptr ds : [public_5c71c8]
        mov edi, dword ptr ds : [public_5c70ac]
        je public_4e83d6
        cmp esi, 2
        jne public_4e8409
        public_4e83d6 : nop
        test bl, bl
        jne public_4e83ef
        mov ecx, dword ptr ds : [public_6119f8]
        push ecx
/*FIXUP push offset public_66fc60 @0x4e83e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea ecx, ss:[esp+0x20]
        call public_41c970
        public_4e83ef : nop
        cmp esi, 2
        jne public_4e8409
        test bl, bl
        jne public_4e8417
/*FIXUP push offset public_5d0254 @0x4e83f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4e83fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 8
        jmp public_4e8417
        public_4e8409 : nop
        cmp esi, 1
        je public_4e8417
        cmp esi, 2
        jne public_4e84cb
        public_4e8417 : nop
        mov edx, dword ptr ss : [esp+0x16C]
        mov eax, dword ptr ds : [edx+0xB4]
        test eax, eax
        je public_4e8436
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        je public_4e8436
        push eax
        jmp public_4e84c1
        public_4e8436 : nop
        test bl, bl
        je public_4e84a7
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_4e84a7
        cmp eax, 0xFFFFFFFF
        je public_4e84a7
        mov cl, byte ptr ss : [esp+0x178]
        test cl, cl
        je public_4e84a7
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x60]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4e8475
        mov word ptr ss : [esp+0x5C], ax
        public_4e8475 : nop
        lea eax, ss:[esp+0x5C]
        push eax
        call ebp
        add esp, 4
        cmp eax, 1
        ja public_4e848c
        cmp word ptr ss : [esp+0x5C], 0x20
        je public_4e84a7
        public_4e848c : nop
        lea ecx, ss:[esp+0x5C]
        push ecx
/*FIXUP push offset public_66fc60 @0x4e8491*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_5d01f4 @0x4e8498*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d01f4
/*FIXUP push offset public_66fc60 @0x4e849d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x10
        public_4e84a7 : nop
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66dc60 @0x4e84ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        lea ecx, ss:[esp+0x38]
        call public_41c970
/*FIXUP push offset public_66dc60 @0x4e84bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP public_4e84c1 : nop
        push offset public_66fc60 @0x4e84c1*/
  FIXUP public_4e84c1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 8
/*FIXUP public_4e84cb : nop
        push offset public_66fc60 @0x4e84cb*/
  FIXUP public_4e84cb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call ebp
        mov esi, dword ptr ss : [esp+0x174]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        lea ebp, ds:[edi+1]
        add esp, 4
        cmp ebp, eax
        jbe public_4e8519
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4e8501
        lea ecx, ss:[ebp+ebp]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_4e8516
        public_4e8501 : nop
        lea edx, ss:[ebp+ebp]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4e8516 : nop
        mov dword ptr ds : [esi+4], ebp
        public_4e8519 : nop
        mov eax, dword ptr ds : [esi]
        push edi
/*FIXUP push offset public_66fc60 @0x4e851c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [public_5c6098]
        mov word ptr ds : [ecx+edi*2], 0
        add esp, 0xC
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x164], 2
        call esi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x164], 0xFFFFFFFF
        call esi
        jmp public_4e8d0f
        public_4e855d : nop
        mov esi, dword ptr ds : [public_5c6098]
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x164], 2
        call esi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x164], 0xFFFFFFFF
        call esi
        xor esi, esi
        public_4e8584 : nop
        cmp dword ptr ds : [edi+0x160], esi
        je public_4e8684
        cmp dword ptr ss : [esp+0x14], esi
        je public_4e8684
        mov esi, dword ptr ss : [esp+0x174]
        test esi, esi
        mov edi, dword ptr ds : [public_5c70ac]
        je public_4e85b0
        cmp esi, 2
        jne public_4e860e
        public_4e85b0 : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66fc60 @0x4e85c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        push ecx
        call public_4347e0
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66dc60 @0x4e85d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x562
        push eax
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4e85e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e85ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x28
        cmp esi, 2
        jne public_4e860e
/*FIXUP push offset public_5d0254 @0x4e85fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4e8602*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 8
        jmp public_4e8618
        public_4e860e : nop
        cmp esi, 1
        je public_4e8618
        cmp esi, 2
        jne public_4e8640
        public_4e8618 : nop
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4e8625*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push ebp
        push edx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4e8631*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e8636*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x18
/*FIXUP public_4e8640 : nop
        push offset public_66fc60 @0x4e8640*/
  FIXUP public_4e8640 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        public_4e864e : nop
        mov esi, dword ptr ss : [esp+0x170]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ss:[ebp+1]
        cmp edi, eax
        jbe public_4e8bfd
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4e8be6
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_4e8bfa
        public_4e8684 : nop
        push ebx
        call public_4e8060
        add esp, 4
        cmp eax, esi
        mov dword ptr ss : [esp+0x48], ebp
        je public_4e8699
        mov dword ptr ss : [esp+0x48], eax
        public_4e8699 : nop
        mov eax, dword ptr ss : [esp+0x174]
        test eax, eax
        mov edi, dword ptr ds : [public_5c70ac]
        je public_4e86b3
        cmp eax, 2
        jne public_4e87b2
        public_4e86b3 : nop
        test bl, 0x20
        mov ebp, dword ptr ss : [esp+0x14]
        je public_4e875c
        mov edx, dword ptr ss : [esp+0x16C]
        mov ebx, dword ptr ds : [edx+0x164]
        test ebx, ebx
        je public_4e8758
        cmp ebx, dword ptr ds : [public_674b80]
        jne public_4e86e5
        mov ebp, dword ptr ds : [public_674b84]
        jmp public_4e8758
        public_4e86e5 : nop
        xor esi, esi
        public_4e86e7 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x58], 2
        je public_4e86f8
        mov esi, dword ptr ds : [esi+0x14]
        jmp public_4e8707
        public_4e86f8 : nop
        lea eax, ss:[esp+0x58]
        push eax
        call public_540fc0
        add esp, 4
        mov esi, eax
        public_4e8707 : nop
        test esi, esi
        je public_4e8758
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [edx+0x8C]
        cmp dword ptr ss : [esp+0x14], ebx
        jne public_4e86e7
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4e8758
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_4e8758
        push eax
        call public_5472a0
        mov ebp, eax
        add esp, 4
        mov dword ptr ds : [public_674b80], ebx
        mov dword ptr ds : [public_674b84], ebp
        public_4e8758 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_4e875c : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66fc60 @0x4e8768*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ebp
        push eax
        call public_4347e0
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4e8784*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edx
        push eax
        call public_4347e0
/*FIXUP push offset public_5cef90 @0x4e8790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef90
/*FIXUP push offset public_66fc60 @0x4e8795*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_66dc60 @0x4e879c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e87a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov eax, dword ptr ss : [esp+0x1A4]
        add esp, 0x30
        public_4e87b2 : nop
        cmp ebx, 0x10000000
        mov esi, dword ptr ss : [esp+0x16C]
        jne public_4e881a
        test eax, eax
        je public_4e87d1
        cmp eax, 2
        je public_4e87d1
        xor al, al
        jmp public_4e8d11
        public_4e87d1 : nop
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_4e8640
        mov eax, dword ptr ds : [esi+0xF0]
        cmp eax, 1
        jbe public_4e8640
        push eax
        lea edx, ss:[esp+0x60]
/*FIXUP push offset public_5cfb88 @0x4e87fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb88
        push edx
        call dword ptr ds : [public_5c70ec]
        lea eax, ss:[esp+0x68]
        push eax
/*FIXUP push offset public_66fc60 @0x4e880b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x14
        jmp public_4e8640
        public_4e881a : nop
        cmp eax, 2
        jne public_4e8830
/*FIXUP push offset public_5d0254 @0x4e881f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4e8824*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 8
        jmp public_4e8839
        public_4e8830 : nop
        cmp eax, 1
        jne public_4e8640
        public_4e8839 : nop
        test bl, bl
        jns public_4e8875
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66dc60 @0x4e8844*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push esi
        call public_4e8d30
        add esp, 0xC
        test al, al
        je public_4e8875
/*FIXUP push offset public_66dc60 @0x4e8856*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e885b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_66fc60 @0x4e8862*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 0xC
        jmp public_4e864e
        public_4e8875 : nop
        test ebx, 0x8C0
        je public_4e8916
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66dc60 @0x4e8892*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push eax
        push ecx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4e889e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e88a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
/*FIXUP push offset public_66fc60 @0x4e88aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        mov esi, dword ptr ss : [esp+0x18C]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        lea edi, ss:[ebp+1]
        add esp, 0x1C
        cmp edi, eax
        jbe public_4e88fa
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_4e88e3
        lea edx, ds:[edi+edi]
        push edx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_4e88f7
        public_4e88e3 : nop
        lea eax, ds:[edi+edi]
        push eax
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4e88f7 : nop
        mov dword ptr ds : [esi+4], edi
        public_4e88fa : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
/*FIXUP push offset public_66fc60 @0x4e88fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ds : [esi]
        mov word ptr ds : [edx+ebp*2], 0
        jmp public_4e8d0c
        public_4e8916 : nop
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_4e8980
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4e893d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push eax
        push edx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4e8949*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e894e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x4e8961*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x561
        push ecx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4e8971*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e8976*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x30
        public_4e8980 : nop
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66dc60 @0x4e8987*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        add esi, 0x2C
        push esi
        call public_48dc10
/*FIXUP push offset public_66dc60 @0x4e8995*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e899a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x14
        jmp public_4e8640
        public_4e89a9 : nop
        cmp ebp, esi
        jne public_4e89b4
        xor al, al
        jmp public_4e8d11
        public_4e89b4 : nop
        mov edi, dword ptr ss : [esp+0x10]
        test edi, 0x7F0000
        je public_4e8b4a
        mov eax, dword ptr ss : [esp+0x174]
        cmp eax, 1
        je public_4e89d9
        cmp eax, 2
        jne public_4e8b43
        public_4e89d9 : nop
        xor esi, esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x21], 0
        mov byte ptr ss : [esp+0x22], 0
        mov byte ptr ss : [esp+0x23], 0
        mov byte ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x25], 0
        mov byte ptr ss : [esp+0x26], 0
        mov byte ptr ss : [esp+0x27], 0
        mov byte ptr ss : [esp+0x28], 0
        mov byte ptr ss : [esp+0x29], 0
        mov byte ptr ss : [esp+0x2A], 0
        mov byte ptr ss : [esp+0x2B], 0
        mov byte ptr ss : [esp+0x2C], 0
        mov byte ptr ss : [esp+0x2D], 0
        mov dword ptr ss : [esp+0x164], esi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x34], esi
        mov byte ptr ss : [esp+0x38], 0
        mov byte ptr ss : [esp+0x39], 0
        mov byte ptr ss : [esp+0x3A], 0
        mov byte ptr ss : [esp+0x3B], 0
        mov byte ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x3D], 0
        mov byte ptr ss : [esp+0x3E], 0
        mov byte ptr ss : [esp+0x3F], 0
        mov byte ptr ss : [esp+0x40], 0
        mov byte ptr ss : [esp+0x41], 0
        mov byte ptr ss : [esp+0x42], 0
        mov byte ptr ss : [esp+0x43], 0
        mov byte ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x45], 0
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        mov byte ptr ss : [esp+0x174], 1
        call dword ptr ds : [public_5c60a0]
        add esp, 0x10
        test eax, eax
        jne public_4e8b1e
        mov eax, dword ptr ss : [esp+0x16C]
        cmp dword ptr ds : [eax+0xB4], esi
        je public_4e8b1e
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, esi
        je public_4e8b1e
        push eax
        mov ebp, eax
        call dword ptr ds : [public_5c71c8]
        mov edi, dword ptr ss : [esp+0x174]
        mov esi, eax
        add esp, 4
        lea ecx, ds:[esi+1]
        push ecx
        mov ecx, edi
        call public_4142a0
        mov edx, dword ptr ds : [edi]
        push esi
        push ebp
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax+esi*2], 0
        mov esi, dword ptr ds : [public_5c6098]
        add esp, 0xC
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x164], 0
        call esi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x164], 0xFFFFFFFF
        call esi
        jmp public_4e8d0f
        public_4e8b1e : nop
        mov esi, dword ptr ds : [public_5c6098]
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x164], 0
        call esi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x164], 0xFFFFFFFF
        call esi
        public_4e8b43 : nop
        xor al, al
        jmp public_4e8d11
        public_4e8b4a : nop
        mov esi, dword ptr ss : [esp+0x174]
        test esi, esi
        je public_4e8b5a
        cmp esi, 2
        jne public_4e8b76
        public_4e8b5a : nop
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66fc60 @0x4e8b67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ebp
        push edx
        call public_4347e0
        add esp, 0x10
        public_4e8b76 : nop
        cmp edi, 0x10000000
        jne public_4e8c19
        test esi, esi
        je public_4e8b92
        cmp esi, 2
        je public_4e8b92
        xor al, al
        jmp public_4e8d11
        public_4e8b92 : nop
        mov eax, dword ptr ss : [esp+0x16C]
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_4e8640
        mov eax, dword ptr ds : [eax+0xF0]
        cmp eax, 1
        jbe public_4e8640
        push eax
        lea edx, ss:[esp+0x60]
/*FIXUP push offset public_5cfb88 @0x4e8bc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb88
        push edx
        call dword ptr ds : [public_5c70ec]
        lea eax, ss:[esp+0x68]
        push eax
/*FIXUP push offset public_66fc60 @0x4e8bd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ac]
        add esp, 0x14
        jmp public_4e8640
        public_4e8be6 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4e8bfa : nop
        mov dword ptr ds : [esi+4], edi
        public_4e8bfd : nop
        mov eax, dword ptr ds : [esi]
        push ebp
/*FIXUP push offset public_66fc60 @0x4e8c00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        mov word ptr ds : [ecx+ebp*2], 0
        jmp public_4e8d0c
        public_4e8c19 : nop
        cmp esi, 2
        mov edi, dword ptr ds : [public_5c70ac]
        jne public_4e8c35
/*FIXUP push offset public_5d0254 @0x4e8c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
/*FIXUP push offset public_66fc60 @0x4e8c29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 8
        jmp public_4e8c3e
        public_4e8c35 : nop
        cmp esi, 1
        public_4e8c38 : nop
        jne public_4e8cd3
        public_4e8c3e : nop
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_4e8ca8
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4e8c65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push eax
        push edx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4e8c71*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e8c76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x4e8c89*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x561
        push ecx
        call public_4347e0
/*FIXUP push offset public_66dc60 @0x4e8c99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e8c9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        add esp, 0x30
        public_4e8ca8 : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ss : [esp+0x16C]
        push edx
        add eax, 0x2C
/*FIXUP push offset public_66dc60 @0x4e8cb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push eax
        call public_48dc10
/*FIXUP push offset public_66dc60 @0x4e8cc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x4e8cc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call edi
        public_4e8cd0 : nop
        add esp, 0x14
/*FIXUP public_4e8cd3 : nop
        push offset public_66fc60 @0x4e8cd3*/
  FIXUP public_4e8cd3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        mov edi, dword ptr ss : [esp+0x174]
        mov esi, eax
        lea ecx, ds:[esi+1]
        add esp, 4
        push ecx
        mov ecx, edi
        call public_4142a0
        mov edx, dword ptr ds : [edi]
        push esi
/*FIXUP push offset public_66fc60 @0x4e8cf8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax+esi*2], 0
        public_4e8d0c : nop
        add esp, 0xC
        public_4e8d0f : nop
        mov al, 1
        public_4e8d11 : nop
        mov ecx, dword ptr ss : [esp+0x15C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x158
        ret 
        UNREACHABLE_TRAP(0x4e8100)
    }
}

#undef public_4e816b
#undef public_4e8177
#undef public_4e8191
#undef public_4e81c5
#undef public_4e81d6
#undef public_4e81f6
#undef public_4e8206
#undef public_4e8221
#undef public_4e823f
#undef public_4e8289
#undef public_4e83ba
#undef public_4e83d6
#undef public_4e83ef
#undef public_4e8409
#undef public_4e8417
#undef public_4e8436
#undef public_4e8475
#undef public_4e848c
#undef public_4e84a7
#undef public_4e84c1
#undef public_4e84cb
#undef public_4e8501
#undef public_4e8516
#undef public_4e8519
#undef public_4e855d
#undef public_4e8584
#undef public_4e85b0
#undef public_4e860e
#undef public_4e8618
#undef public_4e8640
#undef public_4e864e
#undef public_4e8684
#undef public_4e8699
#undef public_4e86b3
#undef public_4e86e5
#undef public_4e86e7
#undef public_4e86f8
#undef public_4e8707
#undef public_4e8758
#undef public_4e875c
#undef public_4e87b2
#undef public_4e87d1
#undef public_4e881a
#undef public_4e8830
#undef public_4e8839
#undef public_4e8875
#undef public_4e88e3
#undef public_4e88f7
#undef public_4e88fa
#undef public_4e8916
#undef public_4e8980
#undef public_4e89a9
#undef public_4e89b4
#undef public_4e89d9
#undef public_4e8b1e
#undef public_4e8b43
#undef public_4e8b4a
#undef public_4e8b5a
#undef public_4e8b76
#undef public_4e8b92
#undef public_4e8be6
#undef public_4e8bfa
#undef public_4e8bfd
#undef public_4e8c19
#undef public_4e8c35
#undef public_4e8c38
#undef public_4e8c3e
#undef public_4e8ca8
#undef public_4e8cd0
#undef public_4e8cd3
#undef public_4e8d0c
#undef public_4e8d0f
#undef public_4e8d11
