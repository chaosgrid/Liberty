#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_438160);
CLANG_FORWARD_PROC_SYMBOL(public_4381c0);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4795f0);
CLANG_FORWARD_PROC_SYMBOL(public_47ba90);
CLANG_FORWARD_PROC_SYMBOL(public_47d2f0);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_47fd50);
CLANG_FORWARD_PROC_SYMBOL(public_482a90);
CLANG_FORWARD_PROC_SYMBOL(public_483580);
CLANG_FORWARD_PROC_SYMBOL(public_4837a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ce0);
CLANG_FORWARD_PROC_SYMBOL(public_4c55d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c63e0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6a50);
CLANG_FORWARD_PROC_SYMBOL(public_4c6f70);
CLANG_FORWARD_PROC_SYMBOL(public_585f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_47ff4c _public_47ff4c
#define public_47ff53 _public_47ff53
#define public_47ff63 _public_47ff63
#define public_47ff68 _public_47ff68
#define public_47ff6e _public_47ff6e
#define public_47ff87 _public_47ff87
#define public_47ff8e _public_47ff8e
#define public_47ffbe _public_47ffbe
#define public_47ffe8 _public_47ffe8
#define public_47fff1 _public_47fff1
#define public_47fffa _public_47fffa
#define public_480017 _public_480017
#define public_48001e _public_48001e
#define public_480037 _public_480037
#define public_480039 _public_480039
#define public_480049 _public_480049
#define public_4801a2 _public_4801a2
#define public_4801cf _public_4801cf
#define public_4801d9 _public_4801d9
#define public_4802a4 _public_4802a4
#define public_4802c5 _public_4802c5
#define public_4802de _public_4802de
#define public_4802ed _public_4802ed
#define public_480304 _public_480304
#define public_480342 _public_480342
#define public_480386 _public_480386
#define public_4803f5 _public_4803f5
#define public_48044e _public_48044e
#define public_4804c3 _public_4804c3
#define public_4804dc _public_4804dc
#define public_4804e2 _public_4804e2
#define public_4804fb _public_4804fb
#define public_480520 _public_480520
#define public_480557 _public_480557
#define public_4805d3 _public_4805d3
#define public_4805df _public_4805df
#define public_4805f6 _public_4805f6
#define public_480642 _public_480642
#define public_48065a _public_48065a
#define public_480672 _public_480672
#define public_48069e _public_48069e
#define public_4806b6 _public_4806b6
#define public_4806ce _public_4806ce
#define public_4806d0 _public_4806d0
#define public_4806d6 _public_4806d6
#define public_4806ed _public_4806ed
#define public_480700 _public_480700
#define public_480713 _public_480713
#define public_480726 _public_480726
#define public_480739 _public_480739
#define public_48074c _public_48074c
#define public_480767 _public_480767
#define public_48077a _public_48077a
#define public_48078d _public_48078d
#define public_4807a0 _public_4807a0
#define public_4807b0 _public_4807b0
#define public_4807c0 _public_4807c0
#define public_480823 _public_480823
#define public_48086b _public_48086b
#define public_48087b _public_48087b
#define public_4808d3 _public_4808d3
#define public_4808fc _public_4808fc
#define public_480924 _public_480924
#define public_480958 _public_480958
#define public_48095d _public_48095d
#define public_480962 _public_480962
#define public_4809a6 _public_4809a6
#define public_4809b4 _public_4809b4
#define public_4809e6 _public_4809e6
#define public_480a1c _public_480a1c
#define public_480a28 _public_480a28
#define public_480a83 _public_480a83
#define public_480b5d _public_480b5d
#define public_480b99 _public_480b99
#define public_480c0b _public_480c0b
#define public_480c25 _public_480c25
#define public_480c37 _public_480c37
#define public_480cc2 _public_480cc2
#define public_480cd6 _public_480cd6

PROC_DECLARE(0x47fef0, internal_47fef0, public_47fef0);
extern "C" NAKED register_t __cdecl internal_47fef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x974]
        test eax, eax
        push edi
        je public_47ff4c
        mov cl, byte ptr ds : [esi+0x6C]
        mov dl, byte ptr ds : [eax+0x6C]
        xor dl, cl
        and dl, 2
        xor dl, cl
        mov byte ptr ds : [esi+0x6C], dl
        mov ecx, dword ptr ds : [eax+0x398]
        test ecx, ecx
        jne public_47ff4c
        mov ecx, dword ptr ds : [esi+0x398]
        mov dword ptr ds : [eax+0x398], ecx
        mov edx, dword ptr ds : [esi+0x974]
        mov eax, dword ptr ds : [esi+0x39C]
        mov dword ptr ds : [edx+0x39C], eax
        mov ecx, dword ptr ds : [esi+0x974]
        mov edx, dword ptr ds : [esi+0x3A0]
        mov dword ptr ds : [ecx+0x3A0], edx
        public_47ff4c : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_47ff6e
        public_47ff53 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov edi, dword ptr ds : [ecx+8]
        je public_47ff63
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_47ff68
        public_47ff63 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_47ff68 : nop
        test edi, edi
        mov ecx, edi
        jne public_47ff53
        public_47ff6e : nop
        test byte ptr ds : [esi+0x6C], 1
        je public_480cd6
        mov eax, dword ptr ds : [esi+0x978]
        dec eax
        je public_47ff87
        dec eax
        je public_47ffbe
        dec eax
        jne public_47ff8e
        public_47ff87 : nop
        mov ecx, esi
        call public_482a90
        public_47ff8e : nop
        mov ecx, dword ptr ds : [esi+0x9D4]
        push 0
        push 1
        mov byte ptr ds : [esi+0x4E2], 0
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ds : [esi+0x35C]
        or edi, 0xFFFFFFFF
        test al, al
        je public_47fff1
        cmp dword ptr ds : [esi+0x3A4], edi
        jmp public_47fffa
        public_47ffbe : nop
        push 0
        push 0
        lea eax, ds:[esi+0x34C]
        push eax
        mov ecx, esi
        call public_47d2f0
        mov ecx, esi
        call public_47e790
        test eax, eax
        je public_47ffe8
        mov ecx, dword ptr ds : [eax+4]
        push 0
        push ecx
        mov ecx, esi
        call public_47ba90
        public_47ffe8 : nop
        mov byte ptr ds : [esi+0x4E2], 0
        jmp public_47ff8e
        public_47fff1 : nop
        mov ecx, esi
        call public_47e790
        test eax, eax
        public_47fffa : nop
        mov ecx, dword ptr ds : [esi+0x974]
        mov al, byte ptr ds : [ecx+0x35C]
        setne byte ptr ss : [esp+0xE]
        test al, al
        je public_480017
        cmp dword ptr ds : [ecx+0x3A4], edi
        jmp public_48001e
        public_480017 : nop
        call public_47e790
        test eax, eax
        public_48001e : nop
        mov al, byte ptr ss : [esp+0xE]
        setne byte ptr ss : [esp+0xF]
        test al, al
        jne public_480037
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        jne public_480037
        xor bl, bl
        jmp public_480039
        public_480037 : nop
        mov bl, 1
        public_480039 : nop
        mov al, byte ptr ds : [esi+0x98C]
        test al, al
        je public_480049
        xor bl, bl
        mov byte ptr ss : [esp+0xF], bl
        public_480049 : nop
        mov ecx, dword ptr ds : [esi+0x994]
        mov eax, dword ptr ds : [ecx]
        push ebp
        movzx edi, bl
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x998]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x99C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov al, byte ptr ss : [esp+0x12]
        mov ecx, dword ptr ds : [esi+0x9A0]
        xor edx, edx
        test al, al
        mov eax, dword ptr ds : [ecx]
        sete dl
        push 0
        mov edi, edx
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov dl, byte ptr ss : [esp+0x13]
        mov ecx, dword ptr ds : [esi+0x9A8]
        xor eax, eax
        test dl, dl
        mov edx, dword ptr ds : [ecx]
        sete al
        push 0
        mov ebp, eax
        push ebp
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9AC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebp
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9B0]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test bl, bl
        sete dl
        push 0
        mov edi, edx
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x364]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x368]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x36C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x370]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9D0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x374]
        mov eax, dword ptr ds : [ecx]
        push 0
        push ebp
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x378]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        cmp dword ptr ds : [esi+0x978], 1
        je public_4801a2
        mov eax, dword ptr ds : [esi+0x37C]
        and byte ptr ds : [eax+0x6C], 0xFC
        jmp public_4801d9
        public_4801a2 : nop
        mov ecx, dword ptr ds : [esi+0x37C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov cl, byte ptr ss : [esp+0x12]
        test cl, cl
        mov eax, dword ptr ds : [esi+0x9B0]
        je public_4801cf
        mov dword ptr ds : [eax+0x380], 0x25
        jmp public_4801d9
        public_4801cf : nop
        mov dword ptr ds : [eax+0x380], 0
        public_4801d9 : nop
        mov ecx, dword ptr ds : [esi+0x9B4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9B8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9BC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9C0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9C4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9C8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9D8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        cmp dword ptr ds : [esi+0x978], 2
        mov ecx, dword ptr ds : [esi+0x9B0]
        push 0
        jne public_4802c5
        mov eax, dword ptr ds : [ecx]
        push 0x32D
        push 3
        call dword ptr ds : [eax+0xA8]
        public_4802a4 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4802ed
        mov ecx, dword ptr ds : [esi+0x9D8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x482
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        jmp public_480304
        public_4802c5 : nop
        mov al, byte ptr ss : [esp+0x16]
        test al, al
        je public_4802de
        mov edx, dword ptr ds : [ecx]
        push 0x32E
        push 3
        call dword ptr ds : [edx+0xA8]
        jmp public_4802a4
        public_4802de : nop
        mov eax, dword ptr ds : [ecx]
        push 0x32F
        push 3
        call dword ptr ds : [eax+0xA8]
        public_4802ed : nop
        mov ecx, dword ptr ds : [esi+0x9D8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x481
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_480304 : nop
        movzx ecx, byte ptr ds : [esi+0x9F4]
        cmp ecx, edi
        mov ebp, dword ptr ds : [public_5c70ec]
        je public_480386
        mov ecx, dword ptr ds : [esi+0x974]
        test bl, bl
        sete dl
        mov byte ptr ds : [esi+0x9F4], dl
        mov dword ptr ds : [esi+0x988], 1
        call public_47e790
        test eax, eax
        je public_480342
        mov eax, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [esi+0x988], eax
        public_480342 : nop
        mov eax, dword ptr ds : [esi+0x988]
        mov ecx, dword ptr ds : [esi+0x9B8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x38
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x988]
        push ecx
        lea edi, ds:[esi+0x508]
/*FIXUP push offset public_5d0ec4 @0x480368*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        call ebp
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_480386 : nop
        test bl, bl
        mov dword ptr ss : [esp+0x14], 0
        je public_4809e6
        mov eax, dword ptr ds : [esi+0x388]
        push 0xFFFFFFFF
        push eax
        lea edi, ds:[esi+0x508]
        push edi
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x380]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x988]
        test eax, eax
        jne public_4803f5
        push 1
/*FIXUP push offset public_5d0ec4 @0x4803cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        mov dword ptr ds : [esi+0x988], 1
        call ebp
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        public_4803f5 : nop
        cmp dword ptr ds : [esi+0x3A4], 0xFFFFFFFF
        je public_4808d3
        cmp dword ptr ds : [esi+0x978], 2
        mov edi, dword ptr ds : [esi+0x38C]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], edi
        mov ecx, esi
        je public_480557
        call public_483580
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ebp, eax
        push ebp
        mov ecx, esi
        call public_4837a0
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        je public_48044e
        cmp eax, 2
        jne public_4806ce
        public_48044e : nop
        mov eax, dword ptr ds : [public_66873c]
        test eax, eax
        jbe public_4806ce
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov ebx, eax
        test ebx, ebx
        je public_4806ce
        push ebp
        mov ecx, ebx
        call public_438160
        fstp dword ptr ss : [esp+0x1C]
        call public_4c55d0
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], eax
        call public_4381c0
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4804c3
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jl public_4804c3
        cmp eax, 0x3E7
        jge public_4804c3
        fild dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_4804c3
        mov dword ptr ss : [esp+0x18], 5
        jmp public_4804dc
        public_4804c3 : nop
        fld dword ptr ds : [esi+0x990]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_4804e2
        mov dword ptr ss : [esp+0x18], 6
        public_4804dc : nop
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        public_4804e2 : nop
        mov eax, dword ptr ds : [esi+0x974]
        mov ecx, dword ptr ds : [eax+0x32C]
        test ecx, ecx
        je public_4804fb
        cmp ecx, 2
        jne public_4806ce
        public_4804fb : nop
        mov ecx, dword ptr ds : [eax+0x330]
        push 1
        push ebp
        call public_585f20
        test eax, eax
        jne public_480520
        xor edi, edi
        mov dword ptr ss : [esp+0x18], 7
        mov dword ptr ss : [esp+0x14], edi
        jmp public_4806d6
        public_480520 : nop
        test edi, edi
        jle public_4806d0
        mov edx, dword ptr ds : [esi+0x974]
        mov ecx, dword ptr ds : [edx+0x330]
        push 0
        push ebp
        call public_585f20
        test eax, eax
        jne public_4806ce
        xor edi, edi
        mov dword ptr ss : [esp+0x18], 8
        mov dword ptr ss : [esp+0x14], edi
        jmp public_4806d6
        public_480557 : nop
        call public_47e790
        mov ebx, eax
        test ebx, ebx
        je public_4806ce
        mov eax, dword ptr ds : [esi+0x974]
        test eax, eax
        je public_4806ce
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_4805df
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_4805df
        fld dword ptr ds : [eax+0x5C]
        fst dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4805df
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [esi+0x974]
        add ecx, 0x330
        call public_4c63e0
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x20]
        call public_5b7ec0
        cmp edi, eax
        jl public_4805d3
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        public_4805d3 : nop
        test edi, edi
        jne public_4805df
        mov dword ptr ss : [esp+0x18], 4
        public_4805df : nop
        mov ebx, dword ptr ds : [ebx+4]
        cmp ebx, dword ptr ds : [public_674a8c]
        je public_4805f6
        cmp ebx, dword ptr ds : [public_674a88]
        jne public_4806ce
        public_4805f6 : nop
        mov edx, dword ptr ds : [esi+0x974]
        mov eax, dword ptr ds : [edx+0x348]
        push eax
        call dword ptr ds : [public_5c61fc]
        mov ebp, eax
        add esp, 4
        test ebp, ebp
        je public_4806ce
        mov eax, dword ptr ds : [public_674a8c]
        cmp ebx, eax
        jne public_480672
        mov ecx, dword ptr ds : [esi+0x974]
        push 0x3F800000
        push 0
        push eax
        add ecx, 0x34C
        call dword ptr ds : [public_5c6384]
        xor edx, edx
        test eax, eax
        je public_480642
        mov edx, dword ptr ds : [eax+0x14]
        public_480642 : nop
        mov ecx, dword ptr ss : [ebp+0x140]
        mov eax, ecx
        sub eax, edx
        cmp edi, eax
        jle public_48065a
        test ecx, ecx
        jl public_48065a
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        public_48065a : nop
        test edi, edi
        jg public_4807c0
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 9
        jmp public_4806d6
        public_480672 : nop
        mov eax, dword ptr ds : [public_674a88]
        cmp ebx, eax
        jne public_4806ce
        mov ecx, dword ptr ds : [esi+0x974]
        push 0x3F800000
        push 0
        push eax
        add ecx, 0x34C
        call dword ptr ds : [public_5c6384]
        xor edx, edx
        test eax, eax
        je public_48069e
        mov edx, dword ptr ds : [eax+0x14]
        public_48069e : nop
        mov ecx, dword ptr ss : [ebp+0x144]
        mov eax, ecx
        sub eax, edx
        cmp edi, eax
        jle public_4806b6
        test ecx, ecx
        jl public_4806b6
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        public_4806b6 : nop
        test edi, edi
        jg public_4807c0
        xor edi, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 0xA
        jmp public_4806d6
        public_4806ce : nop
        test edi, edi
        public_4806d0 : nop
        jne public_4807c0
        public_4806d6 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[ecx-1]
        cmp eax, 0xA
        ja public_480823
/*FIXUP jmp dword ptr ds : [eax*4+public_480ce0] @0x4806e6*/
  JMPTB cmp eax, 0
  JMPTB je public_480700
  JMPTB cmp eax, 1
  JMPTB je public_480713
  JMPTB cmp eax, 2
  JMPTB je public_480726
  JMPTB cmp eax, 3
  JMPTB je public_4806ed
  JMPTB cmp eax, 4
  JMPTB je public_48074c
  JMPTB cmp eax, 5
  JMPTB je public_480739
  JMPTB cmp eax, 6
  JMPTB je public_480767
  JMPTB cmp eax, 7
  JMPTB je public_48077a
  JMPTB cmp eax, 8
  JMPTB je public_48078d
  JMPTB cmp eax, 9
  JMPTB je public_4807a0
  JMPTB cmp eax, 0xA
  JMPTB je public_4807b0
  JMPTB int 3
        public_4806ed : nop
        push 0
        push 0x490
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_480700 : nop
        push 0
        push 0x47E
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_480713 : nop
        push 0
        push 0x47F
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_480726 : nop
        push 0
        push 0x480
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_480739 : nop
        push 0
        push 0x61C
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_48074c : nop
        fld dword ptr ss : [esp+0x1C]
        call public_5b7ec0
        push eax
        push 0x61B
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_480767 : nop
        push 0
        push 0x637
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_48077a : nop
        push 0
        push 0x63F
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_48078d : nop
        push 0
        push 0x3A4
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_4807a0 : nop
        push 0
        push 0x3A5
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_4807b0 : nop
        push 0
        push 0x3CF
        mov ecx, esi
        call public_47fd50
        jmp public_480823
        public_4807c0 : nop
        mov ecx, dword ptr ds : [esi+0x9B8]
        mov edx, dword ptr ds : [ecx]
        push edi
        push 1
        push 0x37
        call dword ptr ds : [edx+0xA8]
        cmp dword ptr ds : [esi+0x988], edi
        jle public_480823
        mov ecx, dword ptr ds : [esi+0x9B8]
        push 0
        push edi
        mov dword ptr ds : [esi+0x988], edi
        mov eax, dword ptr ds : [ecx]
        push 0x38
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x988]
        push ecx
/*FIXUP push offset public_5d0ec4 @0x4807fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        lea ebx, ds:[esi+0x508]
        push ebx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push ebx
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_480823 : nop
        push edi
/*FIXUP push offset public_5d0ec4 @0x480824*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        lea ebx, ds:[esi+0x508]
        push ebx
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x9D0]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push ebx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        cmp edi, 1
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [ecx]
        jle public_48086b
        push 8
        push 1
        push 0x43
        call dword ptr ds : [edx+0xA8]
        push 0
        push 0
        jmp public_48087b
        public_48086b : nop
        push 0
        push 0
        push 0x43
        call dword ptr ds : [edx+0xA8]
        push 0
        push 1
        public_48087b : nop
        mov ecx, dword ptr ds : [esi+0x9B4]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x390]
        push ecx
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_4809b4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xC
        jne public_4809b4
        cmp dword ptr ds : [esi+0x978], 2
        jne public_4809b4
        push 0
        push 0x52D
        mov ecx, esi
        call public_47fd50
        jmp public_4809b4
        public_4808d3 : nop
        mov edx, dword ptr ds : [esi+0x38C]
        mov ecx, dword ptr ds : [esi+0x9B8]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 1
        push 0x37
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+0x978]
        cmp eax, 1
        je public_4808fc
        cmp eax, 3
        jne public_480924
        public_4808fc : nop
        mov ecx, dword ptr ds : [esi+0x974]
        test ecx, ecx
        je public_480924
        call public_47e790
        test eax, eax
        je public_480924
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_480924
        push 0
        push 0x575
        mov ecx, esi
        call public_47fd50
        public_480924 : nop
        mov eax, dword ptr ds : [esi+0x390]
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        test eax, eax
        je public_480962
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xC
        jne public_480962
        cmp dword ptr ds : [esi+0x978], 2
        mov ecx, esi
        push 0
        je public_480958
        push 0x52C
        jmp public_48095d
        public_480958 : nop
        push 0x52D
        public_48095d : nop
        call public_47fd50
        public_480962 : nop
        mov eax, dword ptr ds : [esi+0x38C]
        push eax
/*FIXUP push offset public_5d0ec4 @0x480969*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edi
        call ebp
        mov ecx, dword ptr ds : [esi+0x9D0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        cmp dword ptr ds : [esi+0x38C], 1
        mov ecx, dword ptr ds : [esi+0x9CC]
        jle public_4809a6
        mov eax, dword ptr ds : [ecx]
        push 8
        push 1
        push 0x43
        call dword ptr ds : [eax+0xA8]
        jmp public_4809b4
        public_4809a6 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x43
        call dword ptr ds : [edx+0xA8]
        public_4809b4 : nop
        mov eax, dword ptr ds : [esi+0x988]
        imul eax, dword ptr ds : [esi+0x388]
        push 0xFFFFFFFF
        push eax
        lea edi, ds:[esi+0x508]
        push edi
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x9C8]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push edi
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_4809e6 : nop
        cmp dword ptr ds : [esi+0x978], 2
        jne public_480b99
        mov ecx, dword ptr ds : [esi+0x3A4]
        or eax, 0xFFFFFFFF
        cmp ecx, eax
        jne public_480a1c
        mov ecx, dword ptr ds : [esi+0x974]
        cmp dword ptr ds : [ecx+0x3A4], eax
        jne public_480a1c
        mov eax, dword ptr ds : [esi+0x99C]
        mov cl, byte ptr ds : [eax+0x6C]
        or cl, 3
        jmp public_480a28
        public_480a1c : nop
        mov eax, dword ptr ds : [esi+0x99C]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        public_480a28 : nop
        mov byte ptr ds : [eax+0x6C], cl
        mov edx, dword ptr ds : [esi+0x974]
        add edx, 0x3A8
        push edx
        lea eax, ds:[esi+0x330]
        push eax
        lea ecx, ds:[esi+0x34C]
        push ecx
        call public_4c6f70
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x974]
        lea edx, ds:[eax+0x3A8]
        push edx
        lea ecx, ds:[eax+0x330]
        push ecx
        add eax, 0x34C
        push eax
        call public_4c6f70
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x9F8]
        sub eax, ebx
        add esp, 0x18
        add eax, ecx
        mov dword ptr ss : [esp+0x28], ecx
        jns public_480a83
        xor eax, eax
        public_480a83 : nop
        push 0x3C9
        push eax
        lea ebp, ds:[esi+0x508]
        push ebp
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x9F0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        push ebp
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x9FC]
        mov edi, dword ptr ds : [esi+0x9F8]
        mov ecx, dword ptr ss : [esp+0x28]
        sub edi, eax
        mov eax, dword ptr ds : [esi+0x9E8]
        sub edi, ebx
        add edi, ecx
        test eax, eax
        je public_480b5d
        call public_4c4ce0
        cmp edi, eax
        jle public_480b5d
        mov ecx, dword ptr ds : [esi+0x9E0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9E4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        call public_4c4ce0
        sub edi, eax
        push 0xFFFFFFFF
        push edi
        push ebp
        call public_4779a0
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x480b20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x630
        push ecx
        call public_4347e0
        push ebp
/*FIXUP push offset public_66dc60 @0x480b31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x480b36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x9E8]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x28
        push 0
/*FIXUP push offset public_66fc60 @0x480b4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        jmp public_480b99
        public_480b5d : nop
        mov ecx, dword ptr ds : [esi+0x9E0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9E4]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9E8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_480b99 : nop
        mov ecx, dword ptr ds : [esi+0x974]
        mov al, byte ptr ds : [ecx+0x3B8]
        xor ebx, ebx
        test al, al
        pop ebp
        je public_480c0b
        mov ecx, dword ptr ds : [esi+0x9B0]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A0]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9AC]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        public_480c0b : nop
        mov eax, dword ptr ds : [esi+0x974]
        mov cl, byte ptr ds : [eax+0x3C0]
        test cl, cl
        jne public_480c25
        mov cl, byte ptr ds : [eax+0x3B9]
        test cl, cl
        je public_480c37
        public_480c25 : nop
        mov ecx, dword ptr ds : [esi+0x9D4]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_480c37 : nop
        mov eax, dword ptr ds : [esi+0x974]
        mov cl, byte ptr ds : [eax+0x3C1]
        test cl, cl
        je public_480cd6
        mov byte ptr ds : [eax+0x3C1], 0
        mov eax, dword ptr ds : [esi+0x3A4]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_480cd6
        cmp dword ptr ds : [esi+0x978], 2
        je public_480cd6
        mov ecx, esi
        call public_483580
        cmp dword ptr ss : [esp+0x10], ebx
        jne public_480cd6
        mov ecx, dword ptr ds : [esi+0x974]
        cmp eax, dword ptr ds : [ecx+0x3BC]
        jne public_480cd6
        push 5
        push ebx
        push ebx
        lea ecx, ds:[esi+0x330]
        mov dword ptr ds : [esi+0x3A4], edi
        mov dword ptr ds : [esi+0x4F4], ebx
        call public_4c6a50
        push ebx
        mov ecx, esi
        call public_4795f0
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_480cc2
        mov dword ptr ds : [eax+0x4E8], ebx
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [edx+0x4EC], ebx
        public_480cc2 : nop
        mov esi, dword ptr ds : [esi+0x9D4]
        mov eax, dword ptr ds : [esi]
        push ebx
        push ebx
        push 0x1E
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        public_480cd6 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x47fef0)
        ASM_EXPORT_ENTRY_SINGLE(0x4807b0, public_4807b0)
    }
}

#undef public_47ff4c
#undef public_47ff53
#undef public_47ff63
#undef public_47ff68
#undef public_47ff6e
#undef public_47ff87
#undef public_47ff8e
#undef public_47ffbe
#undef public_47ffe8
#undef public_47fff1
#undef public_47fffa
#undef public_480017
#undef public_48001e
#undef public_480037
#undef public_480039
#undef public_480049
#undef public_4801a2
#undef public_4801cf
#undef public_4801d9
#undef public_4802a4
#undef public_4802c5
#undef public_4802de
#undef public_4802ed
#undef public_480304
#undef public_480342
#undef public_480386
#undef public_4803f5
#undef public_48044e
#undef public_4804c3
#undef public_4804dc
#undef public_4804e2
#undef public_4804fb
#undef public_480520
#undef public_480557
#undef public_4805d3
#undef public_4805df
#undef public_4805f6
#undef public_480642
#undef public_48065a
#undef public_480672
#undef public_48069e
#undef public_4806b6
#undef public_4806ce
#undef public_4806d0
#undef public_4806d6
#undef public_4806ed
#undef public_480700
#undef public_480713
#undef public_480726
#undef public_480739
#undef public_48074c
#undef public_480767
#undef public_48077a
#undef public_48078d
#undef public_4807a0
#undef public_4807b0
#undef public_4807c0
#undef public_480823
#undef public_48086b
#undef public_48087b
#undef public_4808d3
#undef public_4808fc
#undef public_480924
#undef public_480958
#undef public_48095d
#undef public_480962
#undef public_4809a6
#undef public_4809b4
#undef public_4809e6
#undef public_480a1c
#undef public_480a28
#undef public_480a83
#undef public_480b5d
#undef public_480b99
#undef public_480c0b
#undef public_480c25
#undef public_480c37
#undef public_480cc2
#undef public_480cd6

#pragma init_seg(compiler)
extern "C" void const* const public_4807b0 = __AsmFindLabelExport(&internal_47fef0, 0x4807b0);
