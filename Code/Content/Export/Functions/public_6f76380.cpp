#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f37110);
CLANG_FORWARD_PROC_SYMBOL(public_6f378c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f37ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f76380);
CLANG_FORWARD_PROC_SYMBOL(public_6f79880);
CLANG_FORWARD_PROC_SYMBOL(public_6f798c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a470);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a650);
CLANG_FORWARD_PROC_SYMBOL(public_6f7acb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8120);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8130);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb02f7);

#define public_6f763e0 _public_6f763e0
#define public_6f76420 _public_6f76420
#define public_6f76430 _public_6f76430
#define public_6f764b0 _public_6f764b0
#define public_6f764c2 _public_6f764c2
#define public_6f764da _public_6f764da
#define public_6f764e8 _public_6f764e8
#define public_6f76522 _public_6f76522
#define public_6f76549 _public_6f76549
#define public_6f7654b _public_6f7654b
#define public_6f76562 _public_6f76562
#define public_6f76592 _public_6f76592
#define public_6f76594 _public_6f76594
#define public_6f76600 _public_6f76600
#define public_6f76670 _public_6f76670
#define public_6f766f0 _public_6f766f0
#define public_6f76708 _public_6f76708
#define public_6f76719 _public_6f76719
#define public_6f76720 _public_6f76720
#define public_6f7673e _public_6f7673e
#define public_6f7677a _public_6f7677a
#define public_6f7678b _public_6f7678b
#define public_6f767a3 _public_6f767a3

PROC_DECLARE(0x6f76380, internal_6f76380, public_6f76380);
extern "C" NAKED register_t __cdecl internal_6f76380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb02f7 @0x6f76382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb02f7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x26C
        mov edx, dword ptr ss : [esp+0x28]
        push ebx
        mov ebx, dword ptr ss : [esp+0x280]
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        push 0
        push edx
        mov ebp, ecx
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x34], ebp
        call public_6f7f370
        mov eax, dword ptr ss : [ebp+0x58]
        mov ecx, dword ptr ss : [ebp+0x54]
        lea edx, ss:[ebp+0x50]
        add esp, 0x10
        push eax
        push ecx
        mov ecx, edx
        mov dword ptr ss : [esp+0x40], edx
        call public_6f7a650
        push esi
        push edi
        lea esp, ss:[esp]
        public_6f763e0 : nop
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f764da
        mov edi, dword ptr ds : [ebx+8]
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x38], edx
        je public_6f764da
        cmp esi, edi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        mov eax, dword ptr ds : [esi+4]
        je public_6f76430
        mov edi, edi
        public_6f76420 : nop
        cmp dword ptr ds : [esi+4], eax
        jne public_6f76430
        add esi, 0x38
        cmp esi, edi
        mov dword ptr ss : [esp+0x28], esi
        jne public_6f76420
        public_6f76430 : nop
        push ebp
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x74]
        call public_6f37110
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [edx+8]
        push eax
        push ecx
        mov ecx, edx
        mov dword ptr ss : [esp+0x28C], 0
        call public_6f7a470
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x284], 2
        call public_6f798c0
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x284], 1
        call public_6eec8d0
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x284], 0xFFFFFFFF
        call public_6f79880
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x28]
        cmp esi, edi
        mov ebp, dword ptr ss : [esp+0x24]
        je public_6f764c2
        lea ebx, ds:[ebx]
        public_6f764b0 : nop
        push esi
        mov ecx, ebp
        call public_6f7e0c0
        add esi, 0x38
        add ebp, 0x38
        cmp esi, edi
        jne public_6f764b0
        public_6f764c2 : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push ebp
        mov ecx, ebx
        call public_6f7acb0
        mov dword ptr ds : [ebx+8], ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        jmp public_6f763e0
        public_6f764da : nop
        mov edi, dword ptr ss : [ebp+0x54]
        mov eax, dword ptr ss : [ebp+0x58]
        cmp edi, eax
        je public_6f76592
        public_6f764e8 : nop
        mov cl, byte ptr ss : [esp+0x13]
        xor ebx, ebx
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x288], 3
        call public_6f37ff0
        mov esi, dword ptr ss : [esp+0x18]
        cmp esi, dword ptr ss : [esp+0x1C]
        je public_6f76562
        lea ebx, ss:[ebp+0x70]
        public_6f76522 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x34], eax
        call public_6f7b0f0
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, eax
        je public_6f76549
        mov ecx, dword ptr ds : [ecx+0x10]
        jmp public_6f7654b
        public_6f76549 : nop
        xor ecx, ecx
        public_6f7654b : nop
        push edi
        call public_6fa8120
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 4
        cmp esi, eax
        jne public_6f76522
        mov esi, dword ptr ss : [esp+0x18]
        xor ebx, ebx
        public_6f76562 : nop
        push esi
        add edi, 0x44
        mov dword ptr ss : [esp+0x288], 0xFFFFFFFF
        call public_6fa8fe0
        mov eax, dword ptr ss : [ebp+0x58]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        jne public_6f764e8
        jmp public_6f76594
        public_6f76592 : nop
        xor ebx, ebx
        public_6f76594 : nop
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0x600D60
        push 0xBF800000
        lea edx, ss:[esp+0x5C]
        push edx
        push 0x20
        lea ecx, ss:[esp+0xE4]
        lea eax, ss:[ebp+0x48]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0
        call dword ptr ds : [public_6fb3460]
        fld dword ptr ds : [public_6fbbee8]
        fsqrt 
        mov eax, dword ptr ss : [esp+0x58]
        add esp, 0x1C
        cmp eax, ebx
        mov dword ptr ss : [esp+0x24], ebx
        fstp dword ptr ss : [esp+0x2C]
        jbe public_6f7677a
        lea ebx, ss:[esp+0xD0]
        lea ebx, ds:[ebx]
        public_6f76600 : nop
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0xAC]
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3664]
        mov ecx, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x3C]
        push edx
        push 0x4B
        lea eax, ss:[esp+0x164]
        push eax
        mov eax, dword ptr ss : [ebp+0x48]
        push ecx
        lea edx, ss:[esp+0x78]
        push edx
        push eax
        call dword ptr ds : [public_6fb3398]
        mov cl, byte ptr ss : [esp+0x37]
        xor edi, edi
        xor esi, esi
        add esp, 0x24
        mov byte ptr ss : [esp+0x14], cl
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        cmp dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x284], 4
        jbe public_6f76719
        lea esi, ss:[ebp+0x70]
        lea esp, ss:[esp]
        public_6f76670 : nop
        mov edx, dword ptr ss : [esp+edi*4+0x150]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x30], edx
        call public_6f7b0f0
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [esp+0x44]
        cmp ecx, eax
        je public_6f76708
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_6f76708
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_6f76708
        call public_6fa8130
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], eax
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x38], eax
        jne public_6f766f0
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        call public_6eb5770
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6eb5f30
        mov dword ptr ss : [esp+0x48], eax
        mov byte ptr ss : [esp+0x4C], 1
        jmp public_6f76708
        public_6f766f0 : nop
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x1B], 0
        call public_6fa6e80
        public_6f76708 : nop
        mov eax, dword ptr ss : [esp+0x30]
        inc edi
        cmp edi, eax
        jb public_6f76670
        mov esi, dword ptr ss : [esp+0x18]
        public_6f76719 : nop
        cmp esi, dword ptr ss : [esp+0x1C]
        je public_6f7673e
        nop 
        public_6f76720 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call public_6f378c0
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 4
        cmp esi, eax
        jne public_6f76720
        mov esi, dword ptr ss : [esp+0x18]
        public_6f7673e : nop
        push esi
        mov dword ptr ss : [esp+0x288], 0xFFFFFFFF
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x40]
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 4
        inc eax
        add ebx, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jb public_6f76600
        xor ebx, ebx
        public_6f7677a : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, ebx
        pop edi
        pop esi
        jne public_6f7678b
        xor eax, eax
        jmp public_6f767a3
        public_6f7678b : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6f767a3 : nop
        mov ecx, dword ptr ss : [esp+0x274]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x278
        ret 4
        UNREACHABLE_TRAP(0x6f76380)
    }
}

#undef public_6f763e0
#undef public_6f76420
#undef public_6f76430
#undef public_6f764b0
#undef public_6f764c2
#undef public_6f764da
#undef public_6f764e8
#undef public_6f76522
#undef public_6f76549
#undef public_6f7654b
#undef public_6f76562
#undef public_6f76592
#undef public_6f76594
#undef public_6f76600
#undef public_6f76670
#undef public_6f766f0
#undef public_6f76708
#undef public_6f76719
#undef public_6f76720
#undef public_6f7673e
#undef public_6f7677a
#undef public_6f7678b
#undef public_6f767a3
