#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6cf1990);
CLANG_FORWARD_PROC_SYMBOL(public_6d00010);
CLANG_FORWARD_PROC_SYMBOL(public_6d03cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d18880);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d44810);
CLANG_FORWARD_PROC_SYMBOL(public_6d45b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46370);
CLANG_FORWARD_PROC_SYMBOL(public_6d48960);
CLANG_FORWARD_PROC_SYMBOL(public_6d48b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6d50740);
CLANG_FORWARD_PROC_SYMBOL(public_6d55bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57480);
CLANG_FORWARD_PROC_SYMBOL(public_6d574f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57540);
CLANG_FORWARD_PROC_SYMBOL(public_6d57d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d59220);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d632ae);

#define public_6d4a638 _public_6d4a638
#define public_6d4a68f _public_6d4a68f
#define public_6d4a697 _public_6d4a697
#define public_6d4a6ec _public_6d4a6ec
#define public_6d4a703 _public_6d4a703
#define public_6d4a755 _public_6d4a755
#define public_6d4a770 _public_6d4a770
#define public_6d4a7ab _public_6d4a7ab
#define public_6d4a7b6 _public_6d4a7b6
#define public_6d4a7c8 _public_6d4a7c8
#define public_6d4a808 _public_6d4a808
#define public_6d4a821 _public_6d4a821
#define public_6d4a881 _public_6d4a881
#define public_6d4a8e4 _public_6d4a8e4
#define public_6d4a8ec _public_6d4a8ec
#define public_6d4a952 _public_6d4a952
#define public_6d4a9f4 _public_6d4a9f4
#define public_6d4aa6a _public_6d4aa6a
#define public_6d4aa85 _public_6d4aa85
#define public_6d4aad9 _public_6d4aad9
#define public_6d4aaf6 _public_6d4aaf6
#define public_6d4ab14 _public_6d4ab14
#define public_6d4ab4b _public_6d4ab4b
#define public_6d4abf4 _public_6d4abf4
#define public_6d4ac24 _public_6d4ac24
#define public_6d4ac3d _public_6d4ac3d
#define public_6d4ac4a _public_6d4ac4a
#define public_6d4ac77 _public_6d4ac77
#define public_6d4acbb _public_6d4acbb
#define public_6d4acc1 _public_6d4acc1
#define public_6d4ace2 _public_6d4ace2
#define public_6d4ad6b _public_6d4ad6b
#define public_6d4ad7b _public_6d4ad7b
#define public_6d4ad86 _public_6d4ad86
#define public_6d4ade2 _public_6d4ade2
#define public_6d4adf2 _public_6d4adf2
#define public_6d4ae0d _public_6d4ae0d
#define public_6d4ae25 _public_6d4ae25
#define public_6d4ae60 _public_6d4ae60
#define public_6d4ae70 _public_6d4ae70
#define public_6d4aef0 _public_6d4aef0
#define public_6d4af08 _public_6d4af08
#define public_6d4af2e _public_6d4af2e
#define public_6d4b013 _public_6d4b013
#define public_6d4b03e _public_6d4b03e
#define public_6d4b042 _public_6d4b042
#define public_6d4b05d _public_6d4b05d
#define public_6d4b089 _public_6d4b089
#define public_6d4b0b4 _public_6d4b0b4
#define public_6d4b1d6 _public_6d4b1d6
#define public_6d4b1e4 _public_6d4b1e4

PROC_DECLARE(0x6d4a5d0, internal_6d4a5d0, public_6d4a5d0);
extern "C" NAKED register_t __cdecl internal_6d4a5d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d632ae @0x6d4a5d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d632ae
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1900
        mov dword ptr fs : [0], esp
        call public_6d60160
        mov eax, dword ptr ss : [esp+0x1914]
        imul eax, 0x418
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [public_6d90260]
        lea edx, ds:[eax+ecx-0x418]
        mov eax, dword ptr ss : [esp+0x1914]
        push ebp
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ds:[ebx+0x50]
        mov dword ptr ss : [esp+0x20], edx
        call public_6d57d10
        mov eax, dword ptr ds : [ebx+0x54]
        mov ebp, dword ptr ss : [esp+0x58]
        cmp ebp, eax
        jne public_6d4a638
        xor al, al
        jmp public_6d4b1e4
        public_6d4a638 : nop
        push esi
        mov esi, dword ptr ds : [public_6d641c0]
        push edi
        add ebp, 0x20C
        call esi
        call esi
        test al, al
        jne public_6d4aa85
        mov esi, dword ptr ss : [esp+0x1924]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_6d90260
        mov dword ptr ss : [esp+0x14], esi
        call public_6ce1a00
        test al, al
        mov ecx, dword ptr ds : [public_6d90260]
        je public_6d4a68f
        mov eax, esi
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+ecx-0x14]
        test eax, eax
        je public_6d4a68f
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_6d4a697
        public_6d4a68f : nop
        mov dword ptr ss : [esp+0x18], 0
        public_6d4a697 : nop
        mov al, byte ptr ds : [ebx+0x64]
        test al, al
        je public_6d4a7c8
        mov eax, esi
        imul eax, 0x418
        push esi
        lea edi, ds:[eax+ecx-0x418]
        call public_6d00010
        push esi
        call public_6d18880
        mov eax, dword ptr ds : [edi+0x3E0]
        add esp, 8
        test eax, 0x3FFFFFFF
        je public_6d4a6ec
        lea ecx, ss:[esp+0x6C]
        push ecx
        push 0x3A
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], esi
        call public_6d43650
        add esp, 8
        public_6d4a6ec : nop
        mov eax, dword ptr ds : [edi+0x3CC]
        test eax, eax
        je public_6d4a703
        push 4
        push esi
        mov ecx, offset public_6d8facc
        call public_6cf1990
        public_6d4a703 : nop
        mov edx, dword ptr ss : [esp+0x1920]
        lea eax, ds:[ebx+0x64]
        push eax
        push edx
        call dword ptr ds : [public_6d64908]
        add esp, 8
        test al, al
        je public_6d4a7c8
        lea eax, ss:[esp+0x1924]
        push eax
        push 8
        call public_6d43650
        mov ecx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [ecx+0x404]
        add esp, 8
        test ecx, ecx
        je public_6d4a755
        mov edx, dword ptr ss : [esp+0x1924]
        push edx
        call public_6d5bd60
        mov dword ptr ss : [esp+0x18], 0
        public_6d4a755 : nop
        mov eax, dword ptr ds : [public_6d90264]
        mov esi, 1
        cmp eax, esi
        jb public_6d4a7b6
        mov edx, dword ptr ss : [esp+0x1924]
        xor edi, edi
        lea esp, ss:[esp]
        public_6d4a770 : nop
        test esi, esi
        jbe public_6d4a7ab
        lea ecx, ds:[esi-1]
        cmp ecx, eax
        jae public_6d4a7ab
        mov ecx, dword ptr ds : [public_6d90260]
        cmp dword ptr ds : [ecx+edi+0x348], 0
        je public_6d4a7ab
        cmp esi, edx
        je public_6d4a7ab
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+0x1BC]
        mov edx, dword ptr ss : [esp+0x1924]
        mov eax, dword ptr ds : [public_6d90264]
        public_6d4a7ab : nop
        inc esi
        add edi, 0x418
        cmp esi, eax
        jbe public_6d4a770
        public_6d4a7b6 : nop
        lea ecx, ss:[esp+0x1924]
        push ecx
        push 7
        call public_6d43650
        add esp, 8
        public_6d4a7c8 : nop
        mov edx, dword ptr ss : [esp+0x1920]
        push edx
        lea ecx, ds:[ebx+0x64]
        call dword ptr ds : [public_6d648ec]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ss : [esp+0x1924]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x1C0]
        mov eax, dword ptr ss : [ebp+0x204]
        test eax, eax
        mov ecx, dword ptr ds : [public_6d90264]
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6d4a808
        mov eax, dword ptr ds : [public_6d64b54]
        public_6d4a808 : nop
        mov esi, 1
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        jb public_6d4aa85
        mov dword ptr ss : [esp+0x14], 0x418
        public_6d4a821 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jbe public_6d4aa6a
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d4aa6a
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [ecx+eax-0xD0]
        test edx, edx
        je public_6d4aa6a
        mov edx, ecx
        lea eax, ds:[edx+eax-0x418]
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4a881
        mov ecx, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ds : [ecx+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d4aa6a
        public_6d4a881 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edx+0x318]
        lea edi, ds:[edx+0x318]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [public_6d643a0]
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        add esp, 8
        cmp eax, ecx
        jae public_6d4a8e4
        mov eax, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+eax-0xD0]
        test ecx, ecx
        je public_6d4a8e4
        mov ecx, edx
        mov eax, dword ptr ds : [ecx+eax-0x14]
        test eax, eax
        je public_6d4a8e4
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        jmp public_6d4a8ec
        public_6d4a8e4 : nop
        mov dword ptr ss : [esp+0x24], 0
        public_6d4a8ec : nop
        cmp esi, dword ptr ss : [esp+0x1924]
        je public_6d4a9f4
        lea ecx, ss:[esp+0x84]
        call public_6d55bc0
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x1918], 0
        call public_6d55bc0
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x8C]
        push edx
        push edi
        mov byte ptr ss : [esp+0x1928], 1
        mov dword ptr ss : [esp+0x3C], offset public_6d8d40c
        call dword ptr ds : [public_6d64904]
        add esp, 0x10
        cmp eax, 0xFFFFFFFE
        jne public_6d4a952
        mov dword ptr ss : [esp+0x2C], offset public_6d8d40c
        public_6d4a952 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x1918], 0
        call dword ptr ds : [public_6d64694]
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x1918], 0xFFFFFFFF
        call dword ptr ds : [public_6d64694]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ss : [esp+0x1924]
        mov eax, dword ptr ds : [ecx]
        push 1
        push esi
        push edi
        push edx
        call dword ptr ds : [eax+0x1B8]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1928]
        push esi
        push edx
        call dword ptr ds : [eax+0x1D8]
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1928]
        push esi
        push edx
        call dword ptr ds : [eax+0x1D4]
        mov edx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edx+0x3E0]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1928]
        push esi
        push edx
        call dword ptr ds : [eax+0x1DC]
        public_6d4a9f4 : nop
        mov edx, dword ptr ss : [esp+0x1924]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push esi
        call dword ptr ds : [eax+0x1B8]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1928]
        push edx
        push esi
        call dword ptr ds : [eax+0x1D8]
        mov edx, dword ptr ss : [ebp+0x2BC]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1928]
        push edx
        push esi
        call dword ptr ds : [eax+0x1D4]
        mov edx, dword ptr ss : [ebp+0x284]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x1928]
        push edx
        push esi
        call dword ptr ds : [eax+0x1DC]
        public_6d4aa6a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        inc esi
        add ecx, 0x418
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], ecx
        jbe public_6d4a821
        public_6d4aa85 : nop
        mov esi, dword ptr ds : [public_6d647e8]
        call esi
        test al, al
        lea eax, ss:[esp+0x1A0]
        je public_6d4ab14
        push ebx
        push eax
        call public_6d46370
        lea ecx, ss:[esp+0x2AC]
        push ecx
        call dword ptr ds : [public_6d64874]
        add esp, 0xC
        call esi
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        je public_6d4aad9
        xor edi, edi
        push edi
/*FIXUP push offset public_6d8d308 @0x6d4aabf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea edx, ss:[esp+0x2AC]
        push edx
        push edi
/*FIXUP push offset public_6d90158 @0x6d4aacd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        jmp public_6d4aaf6
        public_6d4aad9 : nop
        push 0
/*FIXUP push offset public_6d8d200 @0x6d4aadb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea eax, ss:[esp+0x2AC]
        push eax
        push 0
/*FIXUP push offset public_6d90158 @0x6d4aaea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        xor edi, edi
        public_6d4aaf6 : nop
        push edi
        lea ecx, ss:[esp+0x1A4]
        push ecx
/*FIXUP push offset public_6d90158 @0x6d4aaff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea edx, ss:[esp+0xA8]
        push edi
        push edx
        call esi
        add esp, 0x14
        jmp public_6d4ab4b
        public_6d4ab14 : nop
        push 0x104
        push ebx
        push eax
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        lea ecx, ss:[esp+0x1A0]
        push 0
        push ecx
        call public_6d460f0
        mov esi, dword ptr ds : [public_6d64bc0]
        push eax
        lea edx, ss:[esp+0xA8]
        push 0
        push edx
        call esi
        add esp, 0x14
        xor edi, edi
        public_6d4ab4b : nop
        push edi
        push ebp
        lea eax, ss:[esp+0xA4]
        push eax
        lea ecx, ss:[esp+0xA8]
        push edi
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x33]
        push edx
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_6d64b0c]
        mov dword ptr ss : [esp+0x4C], edi
        lea ecx, ss:[esp+0x3A8]
        mov dword ptr ss : [esp+0x1918], 2
        call dword ptr ds : [public_6d644f0]
        mov esi, dword ptr ds : [public_6d64bd8]
        lea eax, ss:[esp+0x9C]
/*FIXUP push offset public_6d6b314 @0x6d4ab9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b314
        push eax
        mov byte ptr ss : [esp+0x1920], 3
        call esi
        add esp, 8
        cmp eax, edi
        mov dword ptr ss : [esp+0x4C], eax
        je public_6d4ac3d
        push eax
        push 4
        lea ecx, ss:[esp+0x18]
        push 1
        push ecx
        call dword ptr ds : [public_6d64bd4]
        lea eax, ss:[esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov edx, offset public_6d6b30c
        mov eax, dword ptr ds : [edx]
        add esp, 0x10
        cmp ecx, eax
        jne public_6d4ac24
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, edi
        je public_6d4abf4
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0x4C], edi
        public_6d4abf4 : nop
        lea edx, ss:[esp+0x9C]
/*FIXUP push offset public_6d6aea8 @0x6d4abfb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push edx
        call esi
        add esp, 8
        cmp eax, edi
        mov dword ptr ss : [esp+0x4C], eax
        je public_6d4ac3d
        push 4
        lea ecx, ss:[esp+0x50]
        call public_6d48960
        lea ecx, ss:[esp+0x4C]
        call public_6d48b60
        jmp public_6d4ac3d
        public_6d4ac24 : nop
        lea ecx, ss:[esp+0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, offset public_6d6b304
        cmp edx, dword ptr ds : [eax]
        je public_6d4ac3d
        push edi
        lea ecx, ss:[esp+0x50]
        call public_6d48960
        public_6d4ac3d : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, edi
        jne public_6d4ac4a
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4ac4a : nop
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        push eax
        lea ecx, ss:[esp+0x3B0]
        call dword ptr ds : [public_6d648d4]
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d4ac77
        lea edx, ss:[esp+0x3A8]
        push edx
        call public_6d44810
        add esp, 4
        public_6d4ac77 : nop
        mov eax, dword ptr ss : [ebp+0x278]
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [ebx+0x3EC], eax
        mov ecx, dword ptr ss : [ebp+0x27C]
        mov dword ptr ds : [ebx+0x3F0], ecx
        mov edx, dword ptr ss : [ebp+0x280]
        mov dword ptr ds : [ebx+0x3F8], edx
        je public_6d4acbb
        push eax
        mov dword ptr ds : [ebx+0x3F0], eax
        call dword ptr ds : [public_6d643dc]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        jmp public_6d4acc1
        public_6d4acbb : nop
        mov eax, dword ptr ss : [ebp+0x284]
        public_6d4acc1 : nop
        lea esi, ds:[ebx+0x318]
        mov dword ptr ds : [ebx+0x3E0], eax
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_6d4ace2
        push esi
        call dword ptr ds : [public_6d648e0]
        add esp, 4
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6d4ace2 : nop
        push esi
        call public_6d45b60
        push esi
        call dword ptr ds : [public_6d64900]
        mov ecx, dword ptr ss : [esp+0x192C]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        call dword ptr ds : [public_6d648fc]
        add esp, 0x10
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
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
        mov byte ptr ss : [esp+0x46], 0
        mov byte ptr ss : [esp+0x47], 0
        mov byte ptr ss : [esp+0x48], 0
        mov byte ptr ss : [esp+0x49], 0
        mov eax, dword ptr ss : [ebp+0x204]
        cmp eax, edi
        mov edi, dword ptr ds : [public_6d64b54]
        mov byte ptr ss : [esp+0x1918], 4
        je public_6d4ad6b
        mov edi, eax
        public_6d4ad6b : nop
        mov ecx, dword ptr ss : [ebp+0x2C4]
        mov edx, ecx
        test edx, edx
        jne public_6d4ad7b
        xor eax, eax
        jmp public_6d4ad86
        public_6d4ad7b : nop
        mov eax, dword ptr ss : [ebp+0x2C8]
        sub eax, edx
        sar eax, 3
        public_6d4ad86 : nop
        push edi
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push ecx
        mov ecx, dword ptr ss : [ebp+0x2D0]
        push eax
        mov eax, dword ptr ss : [ebp+0x2BC]
        push eax
        push ecx
        push esi
        call dword ptr ds : [public_6d648f8]
        mov edx, dword ptr ss : [ebp+0x2D4]
        lea ecx, ss:[ebp+0x2D4]
        lea eax, ds:[ebx+0x28C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        add esp, 0x20
        xor esi, esi
        test edx, edx
        mov dword ptr ds : [eax+0x30], edx
        jle public_6d4adf2
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        public_6d4ade2 : nop
        mov edi, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+0x30]
        inc esi
        add edx, 4
        cmp esi, edi
        jl public_6d4ade2
        public_6d4adf2 : nop
        lea eax, ss:[ebp+0x30C]
        xor esi, esi
        cmp eax, esi
        jne public_6d4ae0d
        mov dword ptr ds : [ebx+0x2C0], esi
        mov byte ptr ds : [ebx+0x2C4], 0
        jmp public_6d4ae25
        public_6d4ae0d : nop
        push eax
        lea eax, ds:[ebx+0x2C4]
        push 0x20
        push eax
        call public_6d03cf0
        add esp, 0xC
        mov dword ptr ds : [ebx+0x2C0], eax
        public_6d4ae25 : nop
        mov edx, dword ptr ss : [ebp+0x32C]
        lea ecx, ss:[ebp+0x32C]
        lea eax, ds:[ebx+0x2E4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        cmp edx, esi
        mov dword ptr ds : [eax+0x30], edx
        jle public_6d4ae70
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        lea ebx, ds:[ebx]
        public_6d4ae60 : nop
        mov edi, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [eax+0x30]
        inc esi
        add edx, 4
        cmp esi, edi
        jl public_6d4ae60
        public_6d4ae70 : nop
        lea eax, ss:[ebp+0x288]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x350]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea esi, ss:[ebp+0x294]
        lea edi, ds:[ebx+0x35C]
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x22C]
        mov dword ptr ds : [ebx+0x264], ecx
        mov edx, dword ptr ss : [ebp+0x240]
        lea eax, ss:[ebp+0x244]
        lea ecx, ds:[ebx+0x278]
        push eax
        mov dword ptr ds : [ebx+0x268], edx
        call dword ptr ds : [public_6d648e8]
        lea ecx, ss:[ebp+0x250]
        lea eax, ds:[ebx+0x26C]
        cmp eax, ecx
        je public_6d4af2e
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6d4af08
        lea esp, ss:[esp]
        public_6d4aef0 : nop
        cmp esi, ecx
        je public_6d4af08
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6d4aef0
        public_6d4af08 : nop
        push edi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[ebx+0x26C]
        call dword ptr ds : [public_6d643a8]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push edi
        lea ecx, ds:[ebx+0x26C]
        call dword ptr ds : [public_6d643a4]
        public_6d4af2e : nop
        mov edx, dword ptr ss : [ebp+0x230]
        mov dword ptr ds : [ebx+0x31C], edx
        mov ax, word ptr ss : [ebp+0x360]
        mov word ptr ds : [ebx+0x3C8], ax
        mov ecx, dword ptr ss : [ebp+0x234]
        mov dword ptr ds : [ebx+0x334], ecx
        mov edx, dword ptr ss : [ebp+0x238]
        mov dword ptr ds : [ebx+0x338], edx
        mov eax, dword ptr ss : [ebp+0x23C]
        mov dword ptr ds : [ebx+0x33C], eax
        xor eax, eax
        mov dword ptr ds : [ebx+0x344], eax
        mov dword ptr ds : [ebx+0x3F8], eax
        mov dword ptr ds : [ebx+0x3FC], eax
        mov dword ptr ds : [ebx+0x3E4], eax
        mov dword ptr ds : [ebx+0x3E8], eax
        mov dword ptr ds : [ebx+0x410], eax
        mov byte ptr ds : [ebx+0x340], 0
        mov ecx, dword ptr ss : [ebp+0x2B8]
        mov dword ptr ds : [ebx+0x414], ecx
        mov ecx, dword ptr ss : [ebp+0x2BC]
        mov dword ptr ds : [ebx+0x284], ecx
        mov edx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [edx]
        push edx
        push eax
        lea eax, ss:[ebp+0x364]
        lea ecx, ds:[ebx+0x380]
        push eax
        call dword ptr ds : [public_6d64b70]
        lea esi, ss:[ebp+0x384]
        lea edi, ds:[ebx+0x3A0]
        cmp edi, esi
        je public_6d4b013
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, edi
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6d57540
        mov cl, byte ptr ds : [esi+1]
        mov byte ptr ds : [edi+1], cl
        push esi
        mov ecx, edi
        call public_6d59220
        public_6d4b013 : nop
        lea ecx, ss:[ebp+0x374]
        lea eax, ds:[ebx+0x390]
        cmp eax, ecx
        je public_6d4b089
        mov eax, dword ptr ds : [ebx+0x394]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov ecx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d4b05d
        jmp public_6d4b042
        public_6d4b03e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d4b042 : nop
        cmp esi, ecx
        je public_6d4b05d
        lea edx, ds:[esi+8]
        push edx
        lea ecx, ds:[edi+8]
        call dword ptr ds : [public_6d64788]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [esi]
        jne public_6d4b03e
        public_6d4b05d : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ds:[ebx+0x390]
        call public_6d574f0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push esi
        push eax
        lea ecx, ds:[ebx+0x390]
        call public_6d57480
        public_6d4b089 : nop
        mov ecx, dword ptr ss : [ebp+0x380]
        mov edx, dword ptr ss : [esp+0x1924]
        mov dword ptr ds : [ebx+0x39C], ecx
        push edx
        mov ecx, ebx
        call public_6d4b520
        mov edx, dword ptr ds : [ebx+0x384]
        test edx, edx
        jne public_6d4b0b4
        mov edx, dword ptr ds : [public_6d64b7c]
        public_6d4b0b4 : nop
        mov ebp, dword ptr ds : [public_6d8fb14]
        mov esi, dword ptr ss : [ebp]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        mov eax, dword ptr ss : [esp+0x1924]
        not ecx
        dec ecx
        push ecx
        push edx
        push eax
        mov ecx, ebp
        call dword ptr ds : [esi+0x16C]
        mov ecx, dword ptr ss : [esp+0x1924]
        push ecx
        mov ecx, ebx
        call public_6d50740
        mov esi, dword ptr ss : [esp+0x1924]
        push 4
        call public_6d60012
        mov edx, dword ptr ds : [ebx+0x39C]
        add esp, 4
        push 4
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+0x188]
        mov eax, dword ptr ss : [esp+0x1924]
        lea edx, ss:[esp+0x64]
        push edx
        lea ecx, ss:[esp+0x3AC]
        push 5
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], ecx
        call public_6d43650
        add esp, 8
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x1918], 3
        call dword ptr ds : [public_6d64694]
        lea eax, ss:[esp+0x17D0]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x17D0]
        mov byte ptr ss : [esp+0x1918], 6
        call dword ptr ds : [public_6d64660]
        push 1
        lea ecx, ss:[esp+0x17D4]
        mov byte ptr ss : [esp+0x191C], 5
        call dword ptr ds : [public_6d64b74]
        lea ecx, ss:[esp+0x3A8]
        mov byte ptr ss : [esp+0x1918], 7
        call dword ptr ds : [public_6d64660]
        push 1
        lea ecx, ss:[esp+0x3AC]
        mov byte ptr ss : [esp+0x191C], 2
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        pop edi
        mov dword ptr ss : [esp+0x1914], 0xFFFFFFFF
        pop esi
        je public_6d4b1d6
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0x44], 0
        public_6d4b1d6 : nop
        push 1
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_6d64b74]
        mov al, 1
        public_6d4b1e4 : nop
        mov ecx, dword ptr ss : [esp+0x1908]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x190C
        ret 8
        UNREACHABLE_TRAP(0x6d4a5d0)
    }
}

#undef public_6d4a638
#undef public_6d4a68f
#undef public_6d4a697
#undef public_6d4a6ec
#undef public_6d4a703
#undef public_6d4a755
#undef public_6d4a770
#undef public_6d4a7ab
#undef public_6d4a7b6
#undef public_6d4a7c8
#undef public_6d4a808
#undef public_6d4a821
#undef public_6d4a881
#undef public_6d4a8e4
#undef public_6d4a8ec
#undef public_6d4a952
#undef public_6d4a9f4
#undef public_6d4aa6a
#undef public_6d4aa85
#undef public_6d4aad9
#undef public_6d4aaf6
#undef public_6d4ab14
#undef public_6d4ab4b
#undef public_6d4abf4
#undef public_6d4ac24
#undef public_6d4ac3d
#undef public_6d4ac4a
#undef public_6d4ac77
#undef public_6d4acbb
#undef public_6d4acc1
#undef public_6d4ace2
#undef public_6d4ad6b
#undef public_6d4ad7b
#undef public_6d4ad86
#undef public_6d4ade2
#undef public_6d4adf2
#undef public_6d4ae0d
#undef public_6d4ae25
#undef public_6d4ae60
#undef public_6d4ae70
#undef public_6d4aef0
#undef public_6d4af08
#undef public_6d4af2e
#undef public_6d4b013
#undef public_6d4b03e
#undef public_6d4b042
#undef public_6d4b05d
#undef public_6d4b089
#undef public_6d4b0b4
#undef public_6d4b1d6
#undef public_6d4b1e4
