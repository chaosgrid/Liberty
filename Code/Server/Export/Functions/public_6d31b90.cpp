#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b270);
CLANG_FORWARD_PROC_SYMBOL(public_6d31b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d31d30);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea40);
CLANG_FORWARD_PROC_SYMBOL(public_6d40760);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d31bcf _public_6d31bcf
#define public_6d31bd4 _public_6d31bd4
#define public_6d31bdc _public_6d31bdc
#define public_6d31be1 _public_6d31be1
#define public_6d31bed _public_6d31bed
#define public_6d31c06 _public_6d31c06
#define public_6d31c1a _public_6d31c1a
#define public_6d31c69 _public_6d31c69
#define public_6d31ca8 _public_6d31ca8
#define public_6d31cbe _public_6d31cbe
#define public_6d31cd5 _public_6d31cd5
#define public_6d31cea _public_6d31cea
#define public_6d31cf5 _public_6d31cf5
#define public_6d31d07 _public_6d31d07
#define public_6d31d0d _public_6d31d0d

PROC_DECLARE(0x6d31b90, internal_6d31b90, public_6d31b90);
extern "C" NAKED register_t __cdecl internal_6d31b90()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, ebp
        sub eax, edx
        sar eax, 5
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+8]
        sub ecx, eax
        sar ecx, 5
        cmp ecx, 1
        push esi
        push edi
        jae public_6d31c69
        test edx, edx
        je public_6d31bcf
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_6d31bd4
        public_6d31bcf : nop
        mov ecx, 1
        public_6d31bd4 : nop
        test edx, edx
        jne public_6d31bdc
        xor eax, eax
        jmp public_6d31be1
        public_6d31bdc : nop
        sub eax, edx
        sar eax, 5
        public_6d31be1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6d31bed
        xor eax, eax
        public_6d31bed : nop
        shl eax, 5
        push eax
        call public_6d60012
        mov esi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6d31c1a
        public_6d31c06 : nop
        push esi
        push edi
        call public_6d40760
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebp
        jne public_6d31c06
        public_6d31c1a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push edi
        call public_6d40760
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        add edi, 0x20
        push edi
        push eax
        push ebp
        mov ecx, ebx
        call public_6d31d30
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x14]
        shl eax, 5
        add eax, esi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_6d1b270
        inc eax
        shl eax, 5
        add eax, esi
        mov dword ptr ds : [ebx+4], esi
        jmp public_6d31d0d
        public_6d31c69 : nop
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        cmp edx, 1
        jae public_6d31cbe
        lea ecx, ss:[ebp+0x20]
        push ecx
        push eax
        push ebp
        mov ecx, ebx
        call public_6d31d30
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, ebx
        call public_6d3ea40
        mov eax, dword ptr ds : [ebx+8]
        cmp ebp, eax
        je public_6d31d07
        public_6d31ca8 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        rep movsd
        jne public_6d31ca8
        jmp public_6d31d07
        public_6d31cbe : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        mov ecx, ebx
        call public_6d31d30
        mov edx, dword ptr ds : [ebx+8]
        lea eax, ds:[edx-0x20]
        cmp ebp, eax
        je public_6d31cea
        public_6d31cd5 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6d31cd5
        public_6d31cea : nop
        lea eax, ss:[ebp+0x20]
        cmp ebp, eax
        je public_6d31d07
        mov edx, dword ptr ss : [esp+0x20]
        public_6d31cf5 : nop
        mov edi, ebp
        add ebp, 0x20
        cmp ebp, eax
        mov ecx, 8
        mov esi, edx
        rep movsd
        jne public_6d31cf5
        public_6d31d07 : nop
        mov eax, dword ptr ds : [ebx+8]
        add eax, 0x20
        public_6d31d0d : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        shl eax, 5
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d31b90)
    }
}

#undef public_6d31bcf
#undef public_6d31bd4
#undef public_6d31bdc
#undef public_6d31be1
#undef public_6d31bed
#undef public_6d31c06
#undef public_6d31c1a
#undef public_6d31c69
#undef public_6d31ca8
#undef public_6d31cbe
#undef public_6d31cd5
#undef public_6d31cea
#undef public_6d31cf5
#undef public_6d31d07
#undef public_6d31d0d
