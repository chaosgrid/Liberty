#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c25cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2b490);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c430);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c610);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c630);
CLANG_FORWARD_PROC_SYMBOL(public_6c34e60);

#define public_6c2b512 _public_6c2b512
#define public_6c2b557 _public_6c2b557
#define public_6c2b561 _public_6c2b561
#define public_6c2b580 _public_6c2b580
#define public_6c2b581 _public_6c2b581
#define public_6c2b8c0 _public_6c2b8c0
#define public_6c2b8d3 _public_6c2b8d3
#define public_6c2b9b0 _public_6c2b9b0
#define public_6c2b9dd _public_6c2b9dd
#define public_6c2b9df _public_6c2b9df
#define public_6c2ba09 _public_6c2ba09
#define public_6c2ba20 _public_6c2ba20
#define public_6c2ba36 _public_6c2ba36
#define public_6c2baa0 _public_6c2baa0
#define public_6c2baa2 _public_6c2baa2
#define public_6c2bae6 _public_6c2bae6
#define public_6c2bba3 _public_6c2bba3
#define public_6c2bbaa _public_6c2bbaa
#define public_6c2bc81 _public_6c2bc81
#define public_6c2bcac _public_6c2bcac
#define public_6c2bcd0 _public_6c2bcd0
#define public_6c2bcdb _public_6c2bcdb
#define public_6c2bced _public_6c2bced
#define public_6c2bd03 _public_6c2bd03
#define public_6c2bd0f _public_6c2bd0f
#define public_6c2bd17 _public_6c2bd17
#define public_6c2bd1d _public_6c2bd1d
#define public_6c2bd27 _public_6c2bd27
#define public_6c2bd53 _public_6c2bd53
#define public_6c2bd65 _public_6c2bd65
#define public_6c2bd6f _public_6c2bd6f
#define public_6c2bdb3 _public_6c2bdb3
#define public_6c2bdc7 _public_6c2bdc7
#define public_6c2bdda _public_6c2bdda
#define public_6c2be3e _public_6c2be3e
#define public_6c2bea2 _public_6c2bea2
#define public_6c2beb5 _public_6c2beb5
#define public_6c2bf06 _public_6c2bf06
#define public_6c2bf1b _public_6c2bf1b
#define public_6c2bf26 _public_6c2bf26
#define public_6c2bf9d _public_6c2bf9d
#define public_6c2bfa6 _public_6c2bfa6
#define public_6c2bfde _public_6c2bfde
#define public_6c2bfe0 _public_6c2bfe0
#define public_6c2c000 _public_6c2c000
#define public_6c2c026 _public_6c2c026
#define public_6c2c031 _public_6c2c031
#define public_6c2c03f _public_6c2c03f
#define public_6c2c04f _public_6c2c04f
#define public_6c2c074 _public_6c2c074
#define public_6c2c080 _public_6c2c080
#define public_6c2c088 _public_6c2c088
#define public_6c2c08e _public_6c2c08e
#define public_6c2c098 _public_6c2c098
#define public_6c2c0c8 _public_6c2c0c8
#define public_6c2c0da _public_6c2c0da
#define public_6c2c0e4 _public_6c2c0e4
#define public_6c2c0fc _public_6c2c0fc
#define public_6c2c12c _public_6c2c12c
#define public_6c2c13c _public_6c2c13c
#define public_6c2c14f _public_6c2c14f
#define public_6c2c1d4 _public_6c2c1d4
#define public_6c2c1de _public_6c2c1de
#define public_6c2c1ed _public_6c2c1ed

PROC_DECLARE(0x6c2b490, internal_6c2b490, public_6c2b490);
extern "C" NAKED register_t __cdecl internal_6c2b490()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x2EC
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+8], ebp
        je public_6c2c1ed
        cmp dword ptr ss : [ebp+0x14], 0xFFFFFFFF
        je public_6c2c1ed
        mov eax, dword ptr ss : [esp+0x2F4]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        push edi
        push eax
        call dword ptr ds : [ecx+0x40]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edi, eax
        mov eax, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x94], edi
        call dword ptr ds : [edx+0xA0]
        mov esi, dword ptr ss : [esp+0x304]
        test esi, esi
        mov ebx, eax
        mov dword ptr ss : [esp+0x90], ebx
        push 0
        je public_6c2b561
        lea ecx, ss:[esp+0x240]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        jne public_6c2b512
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2b512 : nop
        mov edx, dword ptr ds : [eax]
        push ebx
        push esi
        lea ecx, ss:[esp+0x244]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x23C]
        push edx
        lea ecx, ss:[esp+0x270]
        call public_6c2c610
        push 0
        lea ecx, ss:[esp+0x1E0]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        jne public_6c2b557
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2b557 : nop
        lea edx, ss:[esp+0x26C]
        push edx
        jmp public_6c2b581
        public_6c2b561 : nop
        lea ecx, ss:[esp+0x1E0]
        call public_6c2c630
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        jne public_6c2b580
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2b580 : nop
        push ebx
        public_6c2b581 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x1E4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x1DC]
        lea ecx, ss:[esp+0x20C]
        push eax
        call public_6c2c610
        mov eax, dword ptr ss : [ebp+0x10]
        lea esi, ss:[esp+0x20C]
        lea edi, ss:[esp+0x29C]
        mov ecx, 0xC
        rep movsd
        fld dword ptr ds : [eax+0x10]
        fmul dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ds : [eax+0xC]
        xor eax, eax
        mov esi, 4
        mov edi, 7
        mov ebp, 1
        mov edx, 5
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, 3
        mov dword ptr ss : [esp+0xD4], eax
        mov dword ptr ss : [esp+0xE4], eax
        mov eax, 2
        mov dword ptr ss : [esp+0xD8], ecx
        mov dword ptr ss : [esp+0xDC], esi
        mov dword ptr ss : [esp+0xE0], edi
        mov dword ptr ss : [esp+0xE8], ebp
        mov dword ptr ss : [esp+0xEC], esi
        mov dword ptr ss : [esp+0xF0], edx
        mov dword ptr ss : [esp+0xF4], ebp
        mov dword ptr ss : [esp+0xF8], eax
        mov dword ptr ss : [esp+0xFC], edx
        mov dword ptr ss : [esp+0x100], 6
        mov dword ptr ss : [esp+0x104], eax
        mov dword ptr ss : [esp+0x108], ecx
        mov dword ptr ss : [esp+0x10C], 6
        mov dword ptr ss : [esp+0x110], edi
        mov dword ptr ss : [esp+0x114], 0
        mov dword ptr ss : [esp+0x118], ebp
        mov dword ptr ss : [esp+0x11C], eax
        mov dword ptr ss : [esp+0x120], ecx
        mov dword ptr ss : [esp+0x124], esi
        mov dword ptr ss : [esp+0x128], edx
        mov dword ptr ss : [esp+0x12C], 6
        mov dword ptr ss : [esp+0x130], edi
        mov dword ptr ss : [esp+0x134], 0
        mov dword ptr ss : [esp+0x138], 0
        mov dword ptr ss : [esp+0x13C], 0x3F800000
        mov dword ptr ss : [esp+0x140], 0x3F800000
        mov dword ptr ss : [esp+0x144], 0
        mov dword ptr ss : [esp+0x148], 0
        mov dword ptr ss : [esp+0x14C], 0
        mov dword ptr ss : [esp+0x150], 0
        mov dword ptr ss : [esp+0x154], 0xBF800000
        mov dword ptr ss : [esp+0x158], 0xBF800000
        mov dword ptr ss : [esp+0x15C], 0
        mov dword ptr ss : [esp+0x160], 0
        mov dword ptr ss : [esp+0x164], 0
        mov dword ptr ss : [esp+0x168], 0x3F800000
        mov dword ptr ss : [esp+0x16C], 0
        mov dword ptr ss : [esp+0x170], 0
        mov dword ptr ss : [esp+0x174], 0xBF800000
        mov dword ptr ss : [esp+0x178], 0
        mov dword ptr ss : [esp+0x17C], 0x3F13CD3A
        mov dword ptr ss : [esp+0x180], 0x3F13CD3A
        mov dword ptr ss : [esp+0x184], 0x3F13CD3A
        mov dword ptr ss : [esp+0x188], 0x3F13CD3A
        mov dword ptr ss : [esp+0x18C], 0x3F13CD3A
        mov dword ptr ss : [esp+0x190], 0xBF13CD3A
        mov dword ptr ss : [esp+0x194], 0xBF13CD3A
        mov dword ptr ss : [esp+0x198], 0x3F13CD3A
        mov dword ptr ss : [esp+0x19C], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1A0], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1A4], 0x3F13CD3A
        mov dword ptr ss : [esp+0x1A8], 0x3F13CD3A
        mov ecx, 9
        mov esi, ebx
        lea edi, ss:[esp+0x2CC]
        mov dword ptr ss : [esp+0x1AC], 0x3F13CD3A
        mov dword ptr ss : [esp+0x1B0], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1B4], 0x3F13CD3A
        mov dword ptr ss : [esp+0x1B8], 0x3F13CD3A
        mov dword ptr ss : [esp+0x1BC], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1C0], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1C4], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1C8], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1CC], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1D0], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1D4], 0xBF13CD3A
        mov dword ptr ss : [esp+0x1D8], 0x3F13CD3A
        rep movsd
        mov byte ptr ss : [esp+0x64], 0
        mov byte ptr ss : [esp+0x65], 0
        mov byte ptr ss : [esp+0x66], 0
        mov byte ptr ss : [esp+0x67], 0
        mov byte ptr ss : [esp+0x68], 0
        mov byte ptr ss : [esp+0x69], 0
        mov byte ptr ss : [esp+0x6A], 0
        mov byte ptr ss : [esp+0x6B], 0
        lea esi, ss:[esp+0x134]
        mov edi, 6
        lea ebx, ds:[ebx]
        public_6c2b8c0 : nop
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        jne public_6c2b8d3
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2b8d3 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        lea ecx, ss:[esp+0x2D0]
        push ecx
        lea ecx, ss:[esp+0x88]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [edx+4], ecx
        add esi, 0xC
        dec edi
        mov dword ptr ds : [edx+8], eax
        jne public_6c2b8c0
        mov eax, dword ptr ss : [esp+0x300]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ebx+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ebx+0x24]
        fstp dword ptr ss : [esp]
        call public_6c25cc0
        fld dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x48], 0xBF800000
        fmul dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        fld dword ptr ss : [esp+0x5C]
        xor ecx, ecx
        fmul dword ptr ss : [esp+0x5C]
        lea edx, ss:[esp+0x138]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x58]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ds : [public_6c361ec]
        fdiv dword ptr ss : [esp+0x60]
        fst dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x5C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x5C]
        fstp st(0)
        lea ecx, ds:[ecx]
        public_6c2b9b0 : nop
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [edx-4]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [edx]
        faddp 
        fcom dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_6c2b9dd
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x6C], ecx
        jmp public_6c2b9df
        public_6c2b9dd : nop
        fstp st(0)
        public_6c2b9df : nop
        inc ecx
        add edx, 0xC
        cmp ecx, 6
        jl public_6c2b9b0
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x50]
        fst dword ptr ss : [esp+0x48]
        fcomp qword ptr ds : [public_6c363d0]
        fnstsw ax
        test ah, 0x41
        jne public_6c2ba09
        mov dword ptr ss : [esp+0x48], 0x3F13CD3A
        public_6c2ba09 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        shl edx, 4
        lea ebp, ss:[esp+edx+0xD4]
        mov dword ptr ss : [esp+0x78], ebp
        mov ebx, 4
        public_6c2ba20 : nop
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        mov edi, dword ptr ss : [ebp]
        jne public_6c2ba36
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2ba36 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+edi*2]
        lea esi, ss:[esp+ecx*4+0x17C]
        push esi
        lea ecx, ss:[esp+0x2D0]
        push ecx
        lea ecx, ss:[esp+0x88]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x88]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [esi]
        faddp 
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_6c2baa0
        mov eax, 1
        jmp public_6c2baa2
        public_6c2baa0 : nop
        xor eax, eax
        public_6c2baa2 : nop
        add ebp, 4
        dec ebx
        mov byte ptr ss : [esp+edi+0x64], al
        jne public_6c2ba20
        mov eax, dword ptr ds : [public_6c37cc8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        jne public_6c2bae6
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2bae6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x80]
        push edx
        lea edx, ss:[esp+0x2A0]
        push edx
        lea edx, ss:[esp+0x2F8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x60]
        mov esi, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+0x18]
        mov edi, dword ptr ss : [esp+0x300]
        mov eax, dword ptr ds : [edi]
        push edi
        fstp dword ptr ss : [esp+0x74]
        call dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x50]
        push edi
        call dword ptr ds : [ecx+0x20]
        fmul dword ptr ss : [esp+0x50]
        mov ecx, esi
        fdivr dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        call public_6c2c430
        mov eax, dword ptr ds : [public_6c37d64]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC4]
        push edx
        mov edx, dword ptr ds : [esi+0xB0]
        push edx
        mov edx, dword ptr ds : [esi+0xAC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        jl public_6c2bba3
        mov edx, dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ds : [public_6c37d64]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ebx
        lea edx, ds:[esi+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0xD4]
        push edx
        mov edx, dword ptr ss : [esp+0xE0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_6c37d64]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        jmp public_6c2bbaa
        public_6c2bba3 : nop
        mov dword ptr ss : [esp+0xC4], ebx
        public_6c2bbaa : nop
        mov eax, dword ptr ds : [esi+0x14]
        fld qword ptr ds : [public_6c36330]
        fmul qword ptr ds : [public_6c363c8]
        lea edx, ds:[esi+0x44]
        mov esi, dword ptr ds : [esi+0x30]
        mov dword ptr ss : [esp+0x9C], eax
        mov eax, dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0xB0], ecx
        mov dword ptr ss : [esp+0xA4], eax
        mov dword ptr ss : [esp+0xBC], ebx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC0], esi
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov esi, dword ptr ds : [esi]
        mov edi, esi
        mov dword ptr ss : [esp+0x94], esi
        xor esi, esi
        lea edx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x60], edi
        mov dword ptr ss : [esp+0x74], esi
        mov dword ptr ss : [esp+0x48], edx
        public_6c2bc81 : nop
        mov eax, dword ptr ss : [esp+0x50]
        mov ebx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x308]
        test eax, eax
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xB8], 0
        je public_6c2bcac
        mov dword ptr ss : [esp+0xB8], ebp
        mov ebp, eax
        public_6c2bcac : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0xAC], edx
        xor dl, dl
        cmp esi, eax
        je public_6c2bced
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, 4
        lea esp, ss:[esp]
        public_6c2bcd0 : nop
        mov esi, dword ptr ds : [eax]
        cmp byte ptr ss : [esp+esi+0x64], 0
        je public_6c2bcdb
        mov dl, 1
        public_6c2bcdb : nop
        add eax, 4
        dec ecx
        jne public_6c2bcd0
        test dl, dl
        mov esi, dword ptr ss : [esp+0x74]
        je public_6c2bf06
        public_6c2bced : nop
        lea eax, ds:[esi-1]
        cmp eax, 4
        ja public_6c2bdc7
        lea ecx, ds:[esi-1]
/*FIXUP jmp dword ptr ds : [ecx*4+public_6c2c1fc] @0x6c2bcfc*/
  JMPTB cmp ecx, 0
  JMPTB je public_6c2bd03
  JMPTB cmp ecx, 1
  JMPTB je public_6c2bd0f
  JMPTB cmp ecx, 2
  JMPTB je public_6c2bd17
  JMPTB cmp ecx, 3
  JMPTB je public_6c2bd53
  JMPTB cmp ecx, 4
  JMPTB je public_6c2bd65
  JMPTB int 3
        public_6c2bd03 : nop
        fld dword ptr ss : [esp+0x10]
        fcos 
        fld dword ptr ss : [esp+0x10]
        jmp public_6c2bd27
        public_6c2bd0f : nop
        fld qword ptr ds : [public_6c36330]
        jmp public_6c2bd1d
        public_6c2bd17 : nop
        fld dword ptr ss : [esp+0x10]
        fchs 
        public_6c2bd1d : nop
        fst dword ptr ss : [esp+0x4C]
        fcos 
        fld dword ptr ss : [esp+0x4C]
        public_6c2bd27 : nop
        fsin 
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x34], 0
        fld st(1)
        fstp dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        jmp public_6c2bdb3
        public_6c2bd53 : nop
        fld dword ptr ss : [esp+0x10]
        fchs 
        fst dword ptr ss : [esp+0x4C]
        fcos 
        fld dword ptr ss : [esp+0x4C]
        jmp public_6c2bd6f
        public_6c2bd65 : nop
        fld dword ptr ss : [esp+0x10]
        fcos 
        fld dword ptr ss : [esp+0x10]
        public_6c2bd6f : nop
        fsin 
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x30], 0
        fld st(1)
        fstp dword ptr ss : [esp+0x28]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x34]
        public_6c2bdb3 : nop
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x24], 0
        public_6c2bdc7 : nop
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        jne public_6c2bdda
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2bdda : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x94]
        push ecx
        lea ecx, ss:[esp+0x214]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x20C]
        push edx
        lea ecx, ss:[esp+0x240]
        call public_6c2c610
        mov eax, dword ptr ds : [public_6c37d50]
        lea edx, ss:[esp+0x70]
        push edx
        push 7
        mov dword ptr ss : [esp+0x78], 1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x70]
        test eax, eax
        je public_6c2bea2
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        jne public_6c2be3e
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2be3e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x23C]
        push edx
        mov edx, dword ptr ss : [esp+0x90]
        push edx
        lea edx, ss:[esp+0x274]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x26C]
        push eax
        lea ecx, ss:[esp+0x1E0]
        call public_6c2c610
        mov eax, dword ptr ds : [public_6c37d50]
        lea edx, ss:[esp+0x29C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x1DC]
        lea edi, ss:[esp+0x29C]
        push edx
        rep movsd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov edi, dword ptr ss : [esp+0x60]
        mov esi, dword ptr ss : [esp+0x74]
        jmp public_6c2beb5
        public_6c2bea2 : nop
        mov eax, dword ptr ds : [public_6c37d50]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x23C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_6c2beb5 : nop
        test ebp, ebp
        lea eax, ss:[esp+0x23C]
        mov dword ptr ss : [esp+0xA0], eax
        je public_6c2bf06
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x9C]
        push edx
        push ebp
        call dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [ebp]
        push 0
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        push 0
        push edx
        push ecx
        push 4
        lea edx, ss:[esp+0xB4]
        push edx
        push ebp
        call dword ptr ds : [eax+0x28]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x9C]
        push ecx
        push ebp
        call dword ptr ds : [eax+0x24]
        public_6c2bf06 : nop
        mov eax, dword ptr ss : [esp+0xC0]
        cmp edi, eax
        je public_6c2bf1b
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        mov dword ptr ss : [esp+0x60], edi
        jne public_6c2bf26
        public_6c2bf1b : nop
        mov edi, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x60], edi
        public_6c2bf26 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        inc esi
        add ecx, 0x10
        cmp esi, 6
        mov dword ptr ss : [esp+0x74], esi
        mov dword ptr ss : [esp+0x48], ecx
        jl public_6c2bc81
        mov edx, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edx+0xB8]
        test al, al
        je public_6c2c1de
        mov eax, dword ptr ss : [esp+0x308]
        test eax, eax
        jne public_6c2c1de
        mov al, byte ptr ds : [public_6c37ccc]
        test al, al
        jne public_6c2c1de
        fld dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [edi+8]
        fmul dword ptr ss : [esp+0x98]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xB8], 0
        fcom qword ptr ds : [public_6c363d0]
        fnstsw ax
        test ah, 0x41
        jne public_6c2bf9d
        fstp st(0)
        fld dword ptr ds : [public_6c363c0]
        public_6c2bf9d : nop
        mov edx, dword ptr ss : [esp+0x78]
        mov esi, 4
        public_6c2bfa6 : nop
        mov ecx, dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x5C]
        lea eax, ds:[ecx+ecx*2]
        fmul dword ptr ss : [esp+eax*4+0x184]
        lea eax, ss:[esp+eax*4+0x17C]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [eax]
        faddp 
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6c2bfde
        mov eax, 1
        jmp public_6c2bfe0
        public_6c2bfde : nop
        xor eax, eax
        public_6c2bfe0 : nop
        add edx, 4
        dec esi
        mov byte ptr ss : [esp+ecx+0x64], al
        jne public_6c2bfa6
        mov ecx, dword ptr ds : [public_6c37d4c]
        fstp st(0)
        mov dword ptr ss : [esp+0xBC], ecx
        xor ebx, ebx
        nop 
        lea esp, ss:[esp]
        public_6c2c000 : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x78], eax
        mov eax, dword ptr ss : [esp+0x6C]
        xor dl, dl
        cmp ebx, eax
        je public_6c2c03f
        mov ecx, ebx
        shl ecx, 4
        lea eax, ss:[esp+ecx+0xD4]
        mov ecx, 4
        public_6c2c026 : nop
        mov esi, dword ptr ds : [eax]
        cmp byte ptr ss : [esp+esi+0x64], 0
        je public_6c2c031
        mov dl, 1
        public_6c2c031 : nop
        add eax, 4
        dec ecx
        jne public_6c2c026
        test dl, dl
        je public_6c2c1d4
        public_6c2c03f : nop
        cmp ebx, 5
        ja public_6c2c13c
/*FIXUP jmp dword ptr ds : [ebx*4+public_6c2c210] @0x6c2c048*/
  JMPTB cmp ebx, 0
  JMPTB je public_6c2c04f
  JMPTB cmp ebx, 1
  JMPTB je public_6c2c074
  JMPTB cmp ebx, 2
  JMPTB je public_6c2c080
  JMPTB cmp ebx, 3
  JMPTB je public_6c2c088
  JMPTB cmp ebx, 4
  JMPTB je public_6c2c0c8
  JMPTB cmp ebx, 5
  JMPTB je public_6c2c0da
  JMPTB int 3
        public_6c2c04f : nop
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        jmp public_6c2c0fc
        public_6c2c074 : nop
        fld dword ptr ss : [esp+0x10]
        fcos 
        fld dword ptr ss : [esp+0x10]
        jmp public_6c2c098
        public_6c2c080 : nop
        fld qword ptr ds : [public_6c36330]
        jmp public_6c2c08e
        public_6c2c088 : nop
        fld dword ptr ss : [esp+0x10]
        fchs 
        public_6c2c08e : nop
        fst dword ptr ss : [esp+0x14]
        fcos 
        fld dword ptr ss : [esp+0x14]
        public_6c2c098 : nop
        fsin 
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x34], 0
        fld st(1)
        fstp dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x38]
        jmp public_6c2c12c
        public_6c2c0c8 : nop
        fld dword ptr ss : [esp+0x10]
        fchs 
        fst dword ptr ss : [esp+0x14]
        fcos 
        fld dword ptr ss : [esp+0x14]
        jmp public_6c2c0e4
        public_6c2c0da : nop
        fld dword ptr ss : [esp+0x10]
        fcos 
        fld dword ptr ss : [esp+0x10]
        public_6c2c0e4 : nop
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x28]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x38]
        public_6c2c0fc : nop
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x30], 0
        public_6c2c12c : nop
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x24], 0
        public_6c2c13c : nop
        mov eax, dword ptr ds : [public_6c37cc8]
        test eax, eax
        jne public_6c2c14f
        call public_6c34e60
        mov dword ptr ds : [public_6c37cc8], eax
        public_6c2c14f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x94]
        push ecx
        lea ecx, ss:[esp+0x214]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        test ebp, ebp
        mov ecx, 0xC
        lea esi, ss:[esp+0x20C]
        lea edi, ss:[esp+0x26C]
        lea edx, ss:[esp+0x26C]
        rep movsd
        mov dword ptr ss : [esp+0xA0], edx
        je public_6c2c1d4
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x9C]
        push ecx
        push ebp
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [ebp]
        push 0
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        push 0
        push ecx
        push eax
        push 4
        lea ecx, ss:[esp+0xB4]
        push ecx
        push ebp
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x9C]
        push eax
        push ebp
        call dword ptr ds : [edx+0x24]
        public_6c2c1d4 : nop
        inc ebx
        cmp ebx, 6
        jl public_6c2c000
        public_6c2c1de : nop
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        add esp, 0x2EC
        ret 0xC
        public_6c2c1ed : nop
        xor al, al
        pop ebp
        add esp, 0x2EC
        ret 0xC
        UNREACHABLE_TRAP(0x6c2b490)
        ASM_EXPORT_ENTRY_FIRST(0x6c2bd03, public_6c2bd03)
        ASM_EXPORT_ENTRY(0x6c2bd0f, public_6c2bd0f)
        ASM_EXPORT_ENTRY(0x6c2bd17, public_6c2bd17)
        ASM_EXPORT_ENTRY(0x6c2bd53, public_6c2bd53)
        ASM_EXPORT_ENTRY(0x6c2bd65, public_6c2bd65)
        ASM_EXPORT_ENTRY(0x6c2c04f, public_6c2c04f)
        ASM_EXPORT_ENTRY(0x6c2c074, public_6c2c074)
        ASM_EXPORT_ENTRY(0x6c2c080, public_6c2c080)
        ASM_EXPORT_ENTRY(0x6c2c088, public_6c2c088)
        ASM_EXPORT_ENTRY(0x6c2c0c8, public_6c2c0c8)
        ASM_EXPORT_ENTRY_LAST(0x6c2c0da, public_6c2c0da)
    }
}

#undef public_6c2b512
#undef public_6c2b557
#undef public_6c2b561
#undef public_6c2b580
#undef public_6c2b581
#undef public_6c2b8c0
#undef public_6c2b8d3
#undef public_6c2b9b0
#undef public_6c2b9dd
#undef public_6c2b9df
#undef public_6c2ba09
#undef public_6c2ba20
#undef public_6c2ba36
#undef public_6c2baa0
#undef public_6c2baa2
#undef public_6c2bae6
#undef public_6c2bba3
#undef public_6c2bbaa
#undef public_6c2bc81
#undef public_6c2bcac
#undef public_6c2bcd0
#undef public_6c2bcdb
#undef public_6c2bced
#undef public_6c2bd03
#undef public_6c2bd0f
#undef public_6c2bd17
#undef public_6c2bd1d
#undef public_6c2bd27
#undef public_6c2bd53
#undef public_6c2bd65
#undef public_6c2bd6f
#undef public_6c2bdb3
#undef public_6c2bdc7
#undef public_6c2bdda
#undef public_6c2be3e
#undef public_6c2bea2
#undef public_6c2beb5
#undef public_6c2bf06
#undef public_6c2bf1b
#undef public_6c2bf26
#undef public_6c2bf9d
#undef public_6c2bfa6
#undef public_6c2bfde
#undef public_6c2bfe0
#undef public_6c2c000
#undef public_6c2c026
#undef public_6c2c031
#undef public_6c2c03f
#undef public_6c2c04f
#undef public_6c2c074
#undef public_6c2c080
#undef public_6c2c088
#undef public_6c2c08e
#undef public_6c2c098
#undef public_6c2c0c8
#undef public_6c2c0da
#undef public_6c2c0e4
#undef public_6c2c0fc
#undef public_6c2c12c
#undef public_6c2c13c
#undef public_6c2c14f
#undef public_6c2c1d4
#undef public_6c2c1de
#undef public_6c2c1ed

#pragma init_seg(compiler)
extern "C" void const* const public_6c2bd03 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2bd03);
extern "C" void const* const public_6c2bd0f = __AsmFindLabelExport(&internal_6c2b490, 0x6c2bd0f);
extern "C" void const* const public_6c2bd17 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2bd17);
extern "C" void const* const public_6c2bd53 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2bd53);
extern "C" void const* const public_6c2bd65 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2bd65);
extern "C" void const* const public_6c2c04f = __AsmFindLabelExport(&internal_6c2b490, 0x6c2c04f);
extern "C" void const* const public_6c2c074 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2c074);
extern "C" void const* const public_6c2c080 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2c080);
extern "C" void const* const public_6c2c088 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2c088);
extern "C" void const* const public_6c2c0c8 = __AsmFindLabelExport(&internal_6c2b490, 0x6c2c0c8);
extern "C" void const* const public_6c2c0da = __AsmFindLabelExport(&internal_6c2b490, 0x6c2c0da);
