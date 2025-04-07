#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d285c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d2a500);
CLANG_FORWARD_PROC_SYMBOL(public_6d2aca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);

#define public_6d28605 _public_6d28605
#define public_6d28620 _public_6d28620
#define public_6d28643 _public_6d28643
#define public_6d2865e _public_6d2865e
#define public_6d2866c _public_6d2866c
#define public_6d28675 _public_6d28675
#define public_6d2868d _public_6d2868d
#define public_6d286a8 _public_6d286a8
#define public_6d286ca _public_6d286ca
#define public_6d286f0 _public_6d286f0
#define public_6d28702 _public_6d28702
#define public_6d2872a _public_6d2872a
#define public_6d28734 _public_6d28734
#define public_6d28736 _public_6d28736
#define public_6d2874a _public_6d2874a
#define public_6d2875c _public_6d2875c
#define public_6d28782 _public_6d28782
#define public_6d2878c _public_6d2878c
#define public_6d2878e _public_6d2878e
#define public_6d287b0 _public_6d287b0
#define public_6d287c2 _public_6d287c2
#define public_6d287ea _public_6d287ea
#define public_6d287f4 _public_6d287f4
#define public_6d287f6 _public_6d287f6
#define public_6d28810 _public_6d28810
#define public_6d28819 _public_6d28819
#define public_6d2883e _public_6d2883e
#define public_6d28840 _public_6d28840
#define public_6d2889c _public_6d2889c
#define public_6d288b7 _public_6d288b7
#define public_6d288e7 _public_6d288e7
#define public_6d28921 _public_6d28921
#define public_6d28933 _public_6d28933
#define public_6d2895b _public_6d2895b
#define public_6d28965 _public_6d28965
#define public_6d28967 _public_6d28967
#define public_6d2898c _public_6d2898c
#define public_6d2899e _public_6d2899e
#define public_6d289c4 _public_6d289c4
#define public_6d289ce _public_6d289ce
#define public_6d289d0 _public_6d289d0
#define public_6d289e4 _public_6d289e4
#define public_6d289ed _public_6d289ed
#define public_6d28a03 _public_6d28a03
#define public_6d28a20 _public_6d28a20
#define public_6d28a58 _public_6d28a58
#define public_6d28a6a _public_6d28a6a
#define public_6d28a84 _public_6d28a84
#define public_6d28aa4 _public_6d28aa4
#define public_6d28acc _public_6d28acc
#define public_6d28ad7 _public_6d28ad7
#define public_6d28ae6 _public_6d28ae6
#define public_6d28b0a _public_6d28b0a
#define public_6d28b22 _public_6d28b22

PROC_DECLARE(0x6d285c0, internal_6d285c0, public_6d285c0);
extern "C" NAKED register_t __cdecl internal_6d285c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xB0
        mov dword ptr ss : [ebp-0x88], ecx
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [eax+0xC]
        sub edx, dword ptr ds : [ecx+8]
        sar edx, 5
        cmp edx, dword ptr ss : [ebp+0xC]
        jae public_6d288e7
        mov eax, dword ptr ss : [ebp-0x88]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d28605
        mov dword ptr ss : [ebp-0x8C], 0
        jmp public_6d28620
        public_6d28605 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [ecx+8]
        sub eax, dword ptr ds : [edx+4]
        sar eax, 5
        mov dword ptr ss : [ebp-0x8C], eax
        public_6d28620 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp ecx, dword ptr ss : [ebp-0x8C]
        jae public_6d2866c
        mov edx, dword ptr ss : [ebp-0x88]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d28643
        mov dword ptr ss : [ebp-0x90], 0
        jmp public_6d2865e
        public_6d28643 : nop
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [eax+8]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0x90], edx
        public_6d2865e : nop
        mov eax, dword ptr ss : [ebp-0x90]
        mov dword ptr ss : [ebp-0x94], eax
        jmp public_6d28675
        public_6d2866c : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x94], ecx
        public_6d28675 : nop
        mov edx, dword ptr ss : [ebp-0x88]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2868d
        mov dword ptr ss : [ebp-0x98], 0
        jmp public_6d286a8
        public_6d2868d : nop
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [eax+8]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0x98], edx
        public_6d286a8 : nop
        mov eax, dword ptr ss : [ebp-0x98]
        add eax, dword ptr ss : [ebp-0x94]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x10], ecx
        cmp dword ptr ss : [ebp-0x10], 0
        jge public_6d286ca
        mov dword ptr ss : [ebp-0x10], 0
        public_6d286ca : nop
        mov edx, dword ptr ss : [ebp-0x10]
        shl edx, 5
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x18], edx
        jmp public_6d28702
        public_6d286f0 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x20
        mov dword ptr ss : [ebp-0x18], ecx
        public_6d28702 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ss : [ebp+8]
        je public_6d28736
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x14], eax
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d2872a
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d2b3c0
        mov dword ptr ss : [ebp-0x9C], eax
        jmp public_6d28734
        public_6d2872a : nop
        mov dword ptr ss : [ebp-0x9C], 0
        public_6d28734 : nop
        jmp public_6d286f0
        public_6d28736 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x24], ecx
        jmp public_6d2875c
        public_6d2874a : nop
        mov edx, dword ptr ss : [ebp-0x28]
        sub edx, 1
        mov dword ptr ss : [ebp-0x28], edx
        mov eax, dword ptr ss : [ebp-0x24]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x24], eax
        public_6d2875c : nop
        cmp dword ptr ss : [ebp-0x28], 0
        jbe public_6d2878e
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x20], ecx
        cmp dword ptr ss : [ebp-0x20], 0
        je public_6d28782
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov ecx, dword ptr ss : [ebp-0x20]
        call public_6d2b3c0
        mov dword ptr ss : [ebp-0xA0], eax
        jmp public_6d2878c
        public_6d28782 : nop
        mov dword ptr ss : [ebp-0xA0], 0
        public_6d2878c : nop
        jmp public_6d2874a
        public_6d2878e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 5
        mov ecx, dword ptr ss : [ebp-4]
        add ecx, eax
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x30], ecx
        jmp public_6d287c2
        public_6d287b0 : nop
        mov edx, dword ptr ss : [ebp-0x38]
        add edx, 0x20
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp-0x30]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x30], eax
        public_6d287c2 : nop
        mov ecx, dword ptr ss : [ebp-0x30]
        cmp ecx, dword ptr ss : [ebp-0x34]
        je public_6d287f6
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x2C], edx
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_6d287ea
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        call public_6d2b3c0
        mov dword ptr ss : [ebp-0xA4], eax
        jmp public_6d287f4
        public_6d287ea : nop
        mov dword ptr ss : [ebp-0xA4], 0
        public_6d287f4 : nop
        jmp public_6d287b0
        public_6d287f6 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x40], edx
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x3C], ecx
        jmp public_6d28819
        public_6d28810 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        add edx, 0x20
        mov dword ptr ss : [ebp-0x3C], edx
        public_6d28819 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        cmp eax, dword ptr ss : [ebp-0x40]
        je public_6d28840
        mov ecx, dword ptr ss : [ebp-0x3C]
        call public_6d28b30
        xor ecx, ecx
        and ecx, 1
        test ecx, ecx
        je public_6d2883e
        mov edx, dword ptr ss : [ebp-0x3C]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d2883e : nop
        jmp public_6d28810
        public_6d28840 : nop
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [eax+0xC]
        sub edx, dword ptr ds : [ecx+4]
        sar edx, 5
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x44], ecx
        mov edx, dword ptr ss : [ebp-0x44]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0xC]
        shl eax, 5
        mov ecx, dword ptr ss : [ebp-8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [edx+0xC], ecx
        mov eax, dword ptr ss : [ebp-0x88]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2889c
        mov dword ptr ss : [ebp-0xA8], 0
        jmp public_6d288b7
        public_6d2889c : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [ecx+8]
        sub eax, dword ptr ds : [edx+4]
        sar eax, 5
        mov dword ptr ss : [ebp-0xA8], eax
        public_6d288b7 : nop
        mov ecx, dword ptr ss : [ebp-0xA8]
        shl ecx, 5
        mov edx, dword ptr ss : [ebp-8]
        add edx, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 5
        add edx, eax
        mov ecx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+4], eax
        jmp public_6d28b22
        public_6d288e7 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        sub edx, dword ptr ss : [ebp+8]
        sar edx, 5
        cmp edx, dword ptr ss : [ebp+0xC]
        jae public_6d28a20
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 5
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov dword ptr ss : [ebp-0x58], ecx
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x50], ecx
        jmp public_6d28933
        public_6d28921 : nop
        mov edx, dword ptr ss : [ebp-0x58]
        add edx, 0x20
        mov dword ptr ss : [ebp-0x58], edx
        mov eax, dword ptr ss : [ebp-0x50]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x50], eax
        public_6d28933 : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        cmp ecx, dword ptr ss : [ebp-0x54]
        je public_6d28967
        mov edx, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x4C], edx
        cmp dword ptr ss : [ebp-0x4C], 0
        je public_6d2895b
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        call public_6d2b3c0
        mov dword ptr ss : [ebp-0xAC], eax
        jmp public_6d28965
        public_6d2895b : nop
        mov dword ptr ss : [ebp-0xAC], 0
        public_6d28965 : nop
        jmp public_6d28921
        public_6d28967 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        sub edx, dword ptr ss : [ebp+8]
        sar edx, 5
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, edx
        mov dword ptr ss : [ebp-0x64], eax
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x60], edx
        jmp public_6d2899e
        public_6d2898c : nop
        mov eax, dword ptr ss : [ebp-0x64]
        sub eax, 1
        mov dword ptr ss : [ebp-0x64], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        add ecx, 0x20
        mov dword ptr ss : [ebp-0x60], ecx
        public_6d2899e : nop
        cmp dword ptr ss : [ebp-0x64], 0
        jbe public_6d289d0
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ss : [ebp-0x5C], edx
        cmp dword ptr ss : [ebp-0x5C], 0
        je public_6d289c4
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        call public_6d2b3c0
        mov dword ptr ss : [ebp-0xB0], eax
        jmp public_6d289ce
        public_6d289c4 : nop
        mov dword ptr ss : [ebp-0xB0], 0
        public_6d289ce : nop
        jmp public_6d2898c
        public_6d289d0 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x6C], edx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x68], eax
        jmp public_6d289ed
        public_6d289e4 : nop
        mov ecx, dword ptr ss : [ebp-0x68]
        add ecx, 0x20
        mov dword ptr ss : [ebp-0x68], ecx
        public_6d289ed : nop
        mov edx, dword ptr ss : [ebp-0x68]
        cmp edx, dword ptr ss : [ebp-0x6C]
        je public_6d28a03
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x68]
        call public_6d2aca0
        jmp public_6d289e4
        public_6d28a03 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        shl ecx, 5
        mov edx, dword ptr ss : [ebp-0x88]
        add ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6d28b22
        public_6d28a20 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jbe public_6d28b22
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x78], edx
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x74], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        shl edx, 5
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov dword ptr ss : [ebp-0x70], ecx
        jmp public_6d28a6a
        public_6d28a58 : nop
        mov edx, dword ptr ss : [ebp-0x78]
        add edx, 0x20
        mov dword ptr ss : [ebp-0x78], edx
        mov eax, dword ptr ss : [ebp-0x70]
        add eax, 0x20
        mov dword ptr ss : [ebp-0x70], eax
        public_6d28a6a : nop
        mov ecx, dword ptr ss : [ebp-0x70]
        cmp ecx, dword ptr ss : [ebp-0x74]
        je public_6d28a84
        mov edx, dword ptr ss : [ebp-0x70]
        push edx
        mov eax, dword ptr ss : [ebp-0x78]
        push eax
        call public_6d2a500
        add esp, 8
        jmp public_6d28a58
        public_6d28a84 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x80], edx
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 5
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        sub edx, eax
        mov dword ptr ss : [ebp-0x7C], edx
        public_6d28aa4 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, dword ptr ss : [ebp-0x7C]
        je public_6d28acc
        mov ecx, dword ptr ss : [ebp-0x7C]
        sub ecx, 0x20
        mov dword ptr ss : [ebp-0x7C], ecx
        mov edx, dword ptr ss : [ebp-0x7C]
        push edx
        mov eax, dword ptr ss : [ebp-0x80]
        sub eax, 0x20
        mov dword ptr ss : [ebp-0x80], eax
        mov ecx, dword ptr ss : [ebp-0x80]
        call public_6d2aca0
        jmp public_6d28aa4
        public_6d28acc : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x84], ecx
        jmp public_6d28ae6
        public_6d28ad7 : nop
        mov edx, dword ptr ss : [ebp-0x84]
        add edx, 0x20
        mov dword ptr ss : [ebp-0x84], edx
        public_6d28ae6 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 5
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        cmp dword ptr ss : [ebp-0x84], ecx
        je public_6d28b0a
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov ecx, dword ptr ss : [ebp-0x84]
        call public_6d2aca0
        jmp public_6d28ad7
        public_6d28b0a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        shl eax, 5
        mov ecx, dword ptr ss : [ebp-0x88]
        add eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [edx+8], eax
        public_6d28b22 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d285c0)
    }
}

#undef public_6d28605
#undef public_6d28620
#undef public_6d28643
#undef public_6d2865e
#undef public_6d2866c
#undef public_6d28675
#undef public_6d2868d
#undef public_6d286a8
#undef public_6d286ca
#undef public_6d286f0
#undef public_6d28702
#undef public_6d2872a
#undef public_6d28734
#undef public_6d28736
#undef public_6d2874a
#undef public_6d2875c
#undef public_6d28782
#undef public_6d2878c
#undef public_6d2878e
#undef public_6d287b0
#undef public_6d287c2
#undef public_6d287ea
#undef public_6d287f4
#undef public_6d287f6
#undef public_6d28810
#undef public_6d28819
#undef public_6d2883e
#undef public_6d28840
#undef public_6d2889c
#undef public_6d288b7
#undef public_6d288e7
#undef public_6d28921
#undef public_6d28933
#undef public_6d2895b
#undef public_6d28965
#undef public_6d28967
#undef public_6d2898c
#undef public_6d2899e
#undef public_6d289c4
#undef public_6d289ce
#undef public_6d289d0
#undef public_6d289e4
#undef public_6d289ed
#undef public_6d28a03
#undef public_6d28a20
#undef public_6d28a58
#undef public_6d28a6a
#undef public_6d28a84
#undef public_6d28aa4
#undef public_6d28acc
#undef public_6d28ad7
#undef public_6d28ae6
#undef public_6d28b0a
#undef public_6d28b22
