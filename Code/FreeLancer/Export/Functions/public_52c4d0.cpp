#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c4d0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_52c522 _public_52c522
#define public_52c524 _public_52c524
#define public_52c52c _public_52c52c
#define public_52c53f _public_52c53f
#define public_52c54c _public_52c54c
#define public_52c570 _public_52c570
#define public_52c588 _public_52c588
#define public_52c592 _public_52c592
#define public_52c5b2 _public_52c5b2
#define public_52c5ca _public_52c5ca
#define public_52c5d0 _public_52c5d0
#define public_52c5e3 _public_52c5e3
#define public_52c61f _public_52c61f
#define public_52c64c _public_52c64c
#define public_52c686 _public_52c686
#define public_52c690 _public_52c690
#define public_52c6a7 _public_52c6a7
#define public_52c6c7 _public_52c6c7
#define public_52c6d7 _public_52c6d7
#define public_52c6e2 _public_52c6e2
#define public_52c6f4 _public_52c6f4
#define public_52c70a _public_52c70a
#define public_52c725 _public_52c725
#define public_52c73d _public_52c73d
#define public_52c750 _public_52c750
#define public_52c769 _public_52c769
#define public_52c774 _public_52c774
#define public_52c78a _public_52c78a
#define public_52c78d _public_52c78d

PROC_DECLARE(0x52c4d0, internal_52c4d0, public_52c4d0);
extern "C" NAKED register_t __cdecl internal_52c4d0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        add edx, eax
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_52c64c
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_52c522
        mov edx, esi
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        mov ebx, edx
        jb public_52c524
        public_52c522 : nop
        mov ebx, edi
        public_52c524 : nop
        test ecx, ecx
        jne public_52c52c
        xor edx, edx
        jmp public_52c53f
        public_52c52c : nop
        sub esi, ecx
        mov eax, 0x4EC4EC4F
        imul esi
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_52c53f : nop
        lea eax, ds:[edx+ebx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_52c54c
        xor eax, eax
        public_52c54c : nop
        imul eax, 0x34
        push eax
        call public_5b7e84
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_52c588
        lea ecx, ds:[ecx]
        public_52c570 : nop
        push esi
        push ebx
        call public_52c7d0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x34
        add esp, 8
        add ebx, 0x34
        cmp esi, eax
        jne public_52c570
        public_52c588 : nop
        test edi, edi
        mov esi, ebx
        jbe public_52c5b2
        mov dword ptr ss : [esp+0x24], edi
        public_52c592 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_52c7d0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x34
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_52c592
        mov eax, dword ptr ss : [esp+0x20]
        public_52c5b2 : nop
        mov ecx, edi
        imul ecx, 0x34
        add ecx, ebx
        mov ebx, dword ptr ss : [ebp+8]
        cmp eax, ebx
        mov esi, eax
        je public_52c5e3
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_52c5d0
        public_52c5ca : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_52c5d0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_52c7d0
        add esi, 0x34
        add esp, 8
        cmp esi, ebx
        jne public_52c5ca
        public_52c5e3 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x34
        add eax, esi
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        test eax, eax
        jne public_52c61f
        xor edx, edx
        mov edx, edi
        imul edx, 0x34
        pop edi
        add edx, esi
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_52c61f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, edi
        imul edx, 0x34
        pop edi
        add edx, esi
        mov dword ptr ss : [ebp+4], esi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_52c64c : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, edi
        jae public_52c70a
        mov eax, edi
        imul eax, 0x34
        mov dword ptr ss : [esp+0x20], eax
        add eax, ebx
        cmp ebx, esi
        mov ebp, ebx
        je public_52c6a7
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_52c690
        public_52c686 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea ebx, ds:[ebx]
        public_52c690 : nop
        add eax, ebp
        push ebp
        push eax
        call public_52c7d0
        add ebp, 0x34
        add esp, 8
        cmp ebp, esi
        jne public_52c686
        mov ecx, dword ptr ss : [esp+0x10]
        public_52c6a7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub edi, edx
        je public_52c6d7
        public_52c6c7 : nop
        push ebp
        push esi
        call public_52c7d0
        add esp, 8
        add esi, 0x34
        dec edi
        jne public_52c6c7
        public_52c6d7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        cmp ebx, eax
        je public_52c6f4
        public_52c6e2 : nop
        mov edi, ebx
        add ebx, 0x34
        cmp ebx, eax
        mov ecx, 0xD
        mov esi, ebp
        rep movsd
        jne public_52c6e2
        public_52c6f4 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        add ecx, eax
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_52c70a : nop
        test edi, edi
        jbe public_52c78d
        mov eax, edi
        imul eax, 0x34
        mov edi, esi
        sub edi, eax
        cmp edi, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_52c73d
        public_52c725 : nop
        push edi
        push ebp
        call public_52c7d0
        add edi, 0x34
        add esp, 8
        add ebp, 0x34
        cmp edi, esi
        jne public_52c725
        mov ecx, dword ptr ss : [esp+0x10]
        public_52c73d : nop
        mov edx, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, edx
        sub eax, ebp
        cmp ebx, eax
        je public_52c769
        lea esp, ss:[esp]
        public_52c750 : nop
        sub eax, 0x34
        sub edx, 0x34
        cmp eax, ebx
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_52c750
        mov ecx, dword ptr ss : [esp+0x10]
        public_52c769 : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        je public_52c78a
        mov edx, dword ptr ss : [esp+0x28]
        public_52c774 : nop
        mov edi, ebx
        add ebx, 0x34
        cmp ebx, eax
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_52c774
        mov ecx, dword ptr ss : [esp+0x10]
        public_52c78a : nop
        add dword ptr ds : [ecx+8], ebp
        public_52c78d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x52c4d0)
    }
}

#undef public_52c522
#undef public_52c524
#undef public_52c52c
#undef public_52c53f
#undef public_52c54c
#undef public_52c570
#undef public_52c588
#undef public_52c592
#undef public_52c5b2
#undef public_52c5ca
#undef public_52c5d0
#undef public_52c5e3
#undef public_52c61f
#undef public_52c64c
#undef public_52c686
#undef public_52c690
#undef public_52c6a7
#undef public_52c6c7
#undef public_52c6d7
#undef public_52c6e2
#undef public_52c6f4
#undef public_52c70a
#undef public_52c725
#undef public_52c73d
#undef public_52c750
#undef public_52c769
#undef public_52c774
#undef public_52c78a
#undef public_52c78d
