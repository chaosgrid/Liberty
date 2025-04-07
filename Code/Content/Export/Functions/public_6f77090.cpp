#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f143d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f77090);
CLANG_FORWARD_PROC_SYMBOL(public_6f778b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f778e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f792f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f79500);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a050);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a350);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb03de);

#define public_6f77135 _public_6f77135
#define public_6f77210 _public_6f77210
#define public_6f772a3 _public_6f772a3
#define public_6f772b3 _public_6f772b3
#define public_6f772be _public_6f772be
#define public_6f772d0 _public_6f772d0
#define public_6f772e0 _public_6f772e0
#define public_6f772e3 _public_6f772e3
#define public_6f7730b _public_6f7730b
#define public_6f77332 _public_6f77332
#define public_6f773d0 _public_6f773d0
#define public_6f773e0 _public_6f773e0
#define public_6f773e3 _public_6f773e3
#define public_6f773f0 _public_6f773f0
#define public_6f77400 _public_6f77400
#define public_6f77407 _public_6f77407
#define public_6f7742f _public_6f7742f
#define public_6f775a3 _public_6f775a3
#define public_6f775cd _public_6f775cd
#define public_6f775e3 _public_6f775e3
#define public_6f77600 _public_6f77600
#define public_6f77750 _public_6f77750
#define public_6f7775d _public_6f7775d
#define public_6f7776b _public_6f7776b
#define public_6f7777c _public_6f7777c
#define public_6f7777e _public_6f7777e
#define public_6f777ff _public_6f777ff
#define public_6f7783a _public_6f7783a
#define public_6f77866 _public_6f77866
#define public_6f77871 _public_6f77871
#define public_6f77889 _public_6f77889

PROC_DECLARE(0x6f77090, internal_6f77090, public_6f77090);
extern "C" NAKED register_t __cdecl internal_6f77090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb03de @0x6f77092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb03de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4D4
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xF0]
        mov ecx, dword ptr ss : [ebp+0xEC]
        push edi
        lea edi, ss:[ebp+0xE8]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x30], edi
        call public_6f7a350
        lea eax, ss:[esp+0x24]
        push eax
        push 0x80
        push 0xBF800000
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0x80
        lea edx, ss:[esp+0x2F8]
        push edx
        lea eax, ss:[ebp+0x48]
        push eax
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x40]
        xor ecx, ecx
        add esp, 0x1C
        xor ebx, ebx
        cmp eax, ecx
        jbe public_6f775cd
        lea esi, ss:[esp+0x2E4]
        mov dword ptr ss : [esp+0x18], esi
        public_6f77135 : nop
        mov dl, byte ptr ss : [esp+0x1F]
        mov byte ptr ss : [esp+0x34], dl
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov eax, dword ptr ds : [esi]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x4EC], ecx
        je public_6f775a3
        mov ebp, dword ptr ds : [public_6fb3664]
        lea ecx, ss:[esp+0x94]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call ebp
        add esp, 0xC
        lea eax, ss:[esp+0x94]
        push eax
        lea ecx, ss:[esp+0x2B8]
        call public_6f778b0
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x198], ecx
        mov dword ptr ss : [esp+0x194], eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x19C], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x1A0], eax
        mov ecx, 0xC
        lea esi, ss:[esp+0x2B4]
        lea edi, ss:[esp+0x1A4]
        rep movsd
        lea ecx, ss:[esp+0x194]
        push ecx
        push edx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x1DC], 0xFFFFFFFF
        call public_6f792f0
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        call dword ptr ds : [public_6fb35a4]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        test eax, eax
        je public_6f7730b
        nop 
        lea esp, ss:[esp]
        public_6f77210 : nop
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call ebp
        add esp, 0xC
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ss:[esp+0x288]
        call public_6f778b0
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x1D8], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x1DC], edx
        mov dword ptr ss : [esp+0x1E4], ecx
        lea edx, ss:[esp+0x1D8]
        push edx
        mov dword ptr ss : [esp+0x1E4], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, 0xC
        lea esi, ss:[esp+0x288]
        lea edi, ss:[esp+0x1EC]
        rep movsd
        push 1
        push eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x224], 0xFFFFFFFF
        call public_6f7a050
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ebx, ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, ebx
        jae public_6f772be
        public_6f772a3 : nop
        cmp dword ptr ss : [esp+eax*4+0x2E4], edx
        je public_6f772b3
        inc eax
        cmp eax, ecx
        jb public_6f772a3
        jmp public_6f772be
        public_6f772b3 : nop
        mov dword ptr ss : [esp+eax*4+0x2E4], 0
        public_6f772be : nop
        cmp eax, ecx
        jne public_6f772e3
        lea eax, ds:[ebx-1]
        xor ecx, ecx
        cmp eax, ecx
        jl public_6f772e3
        nop 
        lea esp, ss:[esp]
        public_6f772d0 : nop
        cmp dword ptr ss : [esp+eax*4+0x2E4], edx
        jne public_6f772e0
        mov dword ptr ss : [esp+eax*4+0x2E4], ecx
        public_6f772e0 : nop
        dec eax
        jns public_6f772d0
        public_6f772e3 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [public_6fb35a4]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        test eax, eax
        jne public_6f77210
        public_6f7730b : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [public_6fb35a4]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        test eax, eax
        je public_6f7742f
        lea ebp, ds:[ebx-1]
        public_6f77332 : nop
        lea ecx, ss:[esp+0x260]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        lea eax, ss:[esp+0x260]
        push eax
        lea ecx, ss:[esp+0xBC]
        call public_6f778b0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x21C], ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x220], edx
        mov dword ptr ss : [esp+0x228], ecx
        lea edx, ss:[esp+0x21C]
        push edx
        mov dword ptr ss : [esp+0x228], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, 0xC
        lea esi, ss:[esp+0xBC]
        lea edi, ss:[esp+0x230]
        rep movsd
        push 1
        push eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x268], 0xFFFFFFFF
        call public_6f7a050
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, ebp
        xor esi, esi
        cmp eax, esi
        jl public_6f773e3
        lea ecx, ds:[ecx]
        public_6f773d0 : nop
        cmp dword ptr ss : [esp+eax*4+0x2E4], ecx
        jne public_6f773e0
        mov dword ptr ss : [esp+eax*4+0x2E4], esi
        public_6f773e0 : nop
        dec eax
        jns public_6f773d0
        public_6f773e3 : nop
        mov edx, dword ptr ss : [esp+0x24]
        cmp ebx, edx
        mov eax, ebx
        jae public_6f77407
        lea ecx, ds:[ecx]
        public_6f773f0 : nop
        cmp dword ptr ss : [esp+eax*4+0x2E4], ecx
        je public_6f77400
        inc eax
        cmp eax, edx
        jb public_6f773f0
        jmp public_6f77407
        public_6f77400 : nop
        mov dword ptr ss : [esp+eax*4+0x2E4], esi
        public_6f77407 : nop
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [public_6fb35a4]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        cmp eax, esi
        jne public_6f77332
        public_6f7742f : nop
        lea ecx, ss:[esp+0x1F]
        push ecx
        lea ecx, ss:[esp+0x100]
        call public_6ead6a0
        lea ecx, ss:[esp+0x124]
        mov byte ptr ss : [esp+0x4EC], 1
        call public_6f143d0
        lea edx, ss:[esp+0x33]
        push edx
        lea ecx, ss:[esp+0x158]
        call public_6ead6a0
        lea eax, ss:[esp+0x1E]
        push eax
        lea ecx, ss:[esp+0x168]
        mov byte ptr ss : [esp+0x4F0], 2
        call public_6ead6a0
        lea ecx, ss:[esp+0x184]
        mov byte ptr ss : [esp+0x4EC], 3
        mov dword ptr ss : [esp+0x174], 0xBF800000
        mov dword ptr ss : [esp+0x178], 0xBF800000
        mov dword ptr ss : [esp+0x17C], 0
        mov dword ptr ss : [esp+0x180], 0
        call public_6eac620
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x100]
        mov byte ptr ss : [esp+0x4F0], 4
        call public_6f68ac0
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ds:[eax+4]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10C], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x110], ecx
        mov edx, dword ptr ds : [edx+8]
        lea esi, ds:[eax+0x10]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x114], edx
        add eax, 0xFFFFFFC0
        mov ecx, 0xC
        lea edi, ss:[esp+0x124]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x118], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x11C], edx
        mov eax, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0xFC]
        push edx
        mov dword ptr ss : [esp+0x124], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        call public_6f7b4d0
        lea ecx, ss:[esp+0x184]
        mov byte ptr ss : [esp+0x4EC], 7
        call public_6f79500
        lea ecx, ss:[esp+0x164]
        mov byte ptr ss : [esp+0x4EC], 6
        call public_6eec8d0
        lea ecx, ss:[esp+0x154]
        mov byte ptr ss : [esp+0x4EC], 5
        call public_6eec8d0
        lea ecx, ss:[esp+0xFC]
        mov byte ptr ss : [esp+0x4EC], 0
        call public_6eec8d0
        mov edi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x18]
        public_6f775a3 : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x4EC], 0xFFFFFFFF
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x24]
        inc ebx
        add esi, 4
        xor ecx, ecx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], esi
        jb public_6f77135
        public_6f775cd : nop
        mov esi, dword ptr ss : [ebp+0xEC]
        cmp esi, dword ptr ss : [ebp+0xF0]
        mov dword ptr ss : [esp+0x10], esi
        je public_6f77866
        public_6f775e3 : nop
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], ecx
        xor ebx, ebx
        lea esp, ss:[esp]
        public_6f77600 : nop
        mov ebp, dword ptr ds : [esi+4]
        test ebp, ebp
        je public_6f7783a
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp dword ptr ss : [esp+0x18], edx
        jae public_6f7783a
        mov ecx, dword ptr ds : [ebx+ebp]
        mov dword ptr ss : [esp+0xB8], ecx
        lea edx, ds:[ebx+ebp+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xBC], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0xC0], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xC4], edx
        lea esi, ds:[ebx+ebp+0x10]
        mov ecx, 0xC
        lea edi, ss:[esp+0xC8]
        rep movsd
        mov eax, dword ptr ds : [ebx+ebp+0x40]
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edi, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0xF8], eax
        push edx
        lea eax, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x68], ecx
        xor esi, esi
        push eax
        lea ecx, ds:[edi+0xF8]
        mov dword ptr ss : [esp+0x70], esi
        call public_6f003e0
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_6fa6e80
        mov eax, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x10], ebp
        mov edx, dword ptr ss : [esp+0xB8]
        lea ecx, ss:[esp+0x50]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call dword ptr ds : [public_6fb33f0]
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        call dword ptr ds : [public_6fb366c]
        mov dl, byte ptr ss : [esp+0x2E]
        add esp, 0x10
        mov byte ptr ss : [esp+0x74], dl
        mov dword ptr ss : [esp+0x78], esi
        mov dword ptr ss : [esp+0x7C], esi
        mov dword ptr ss : [esp+0x80], esi
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x74], eax
        push edx
        lea eax, ss:[esp+0xC4]
        push eax
        lea ecx, ss:[esp+0xC4]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x4FC], 8
        call public_6f778e0
        fld dword ptr ds : [public_6fb444c]
        mov edx, dword ptr ss : [esp+0x78]
        fst dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x7C]
        cmp edx, ecx
        je public_6f7776b
        lea edi, ds:[edx+4]
        lea ecx, ds:[ecx]
        public_6f77750 : nop
        fcom dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_6f7775d
        fstp st(0)
        fld dword ptr ds : [edi]
        public_6f7775d : nop
        add edi, 8
        lea eax, ds:[edi-4]
        cmp eax, ecx
        jne public_6f77750
        fst dword ptr ss : [esp+0x14]
        public_6f7776b : nop
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6f7777c
        fstp dword ptr ss : [esp+0x20]
        jmp public_6f7777e
        public_6f7777c : nop
        fstp st(0)
        public_6f7777e : nop
        cmp edx, esi
        je public_6f777ff
        sub ecx, edx
        sar ecx, 3
        cmp ecx, esi
        je public_6f777ff
        mov ecx, dword ptr ss : [esp+0x70]
        lea edx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x94], ecx
        push edx
        lea ecx, ss:[esp+0x9C]
        call public_6f55880
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xA8], eax
        mov eax, dword ptr ss : [ebp+0x90]
        lea ecx, ss:[esp+0x94]
        push ecx
        push 1
        push eax
        lea ecx, ss:[ebp+0x88]
        mov byte ptr ss : [esp+0x4F8], 9
        call public_6f7b1d0
        mov edx, dword ptr ss : [esp+0x9C]
        push edx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x7C]
        add esp, 4
        mov dword ptr ss : [esp+0x9C], esi
        mov dword ptr ss : [esp+0xA0], esi
        mov dword ptr ss : [esp+0xA4], esi
        public_6f777ff : nop
        mov ebp, dword ptr ss : [esp+0x18]
        inc ebp
        push edx
        mov dword ptr ss : [esp+0x1C], ebp
        add ebx, 0x44
        mov dword ptr ss : [esp+0x4F0], 0xFFFFFFFF
        call public_6fa8fe0
        mov dword ptr ss : [esp+0x7C], esi
        mov dword ptr ss : [esp+0x80], esi
        mov dword ptr ss : [esp+0x84], esi
        mov esi, dword ptr ss : [esp+0x14]
        add esp, 4
        jmp public_6f77600
        public_6f7783a : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0x80], eax
        mov eax, dword ptr ds : [ecx+0xF0]
        add esi, 0x98
        xor ecx, ecx
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f775e3
        mov edi, dword ptr ss : [esp+0x28]
        public_6f77866 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ecx
        jne public_6f77871
        xor eax, eax
        jmp public_6f77889
        public_6f77871 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x6BCA1AF3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6f77889 : nop
        mov ecx, dword ptr ss : [esp+0x4E4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4E0
        ret 
        UNREACHABLE_TRAP(0x6f77090)
    }
}

#undef public_6f77135
#undef public_6f77210
#undef public_6f772a3
#undef public_6f772b3
#undef public_6f772be
#undef public_6f772d0
#undef public_6f772e0
#undef public_6f772e3
#undef public_6f7730b
#undef public_6f77332
#undef public_6f773d0
#undef public_6f773e0
#undef public_6f773e3
#undef public_6f773f0
#undef public_6f77400
#undef public_6f77407
#undef public_6f7742f
#undef public_6f775a3
#undef public_6f775cd
#undef public_6f775e3
#undef public_6f77600
#undef public_6f77750
#undef public_6f7775d
#undef public_6f7776b
#undef public_6f7777c
#undef public_6f7777e
#undef public_6f777ff
#undef public_6f7783a
#undef public_6f77866
#undef public_6f77871
#undef public_6f77889
