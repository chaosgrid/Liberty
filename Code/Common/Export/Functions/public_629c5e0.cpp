#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_629c5e0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_629c601 _public_629c601
#define public_629c614 _public_629c614
#define public_629c622 _public_629c622
#define public_629c62a _public_629c62a
#define public_629c664 _public_629c664
#define public_629c6b7 _public_629c6b7
#define public_629c6bc _public_629c6bc
#define public_629c6c4 _public_629c6c4
#define public_629c6c9 _public_629c6c9
#define public_629c6d5 _public_629c6d5
#define public_629c6f3 _public_629c6f3
#define public_629c707 _public_629c707
#define public_629c779 _public_629c779
#define public_629c7b8 _public_629c7b8
#define public_629c7c7 _public_629c7c7
#define public_629c7e0 _public_629c7e0
#define public_629c7ef _public_629c7ef
#define public_629c7f6 _public_629c7f6
#define public_629c803 _public_629c803

PROC_DECLARE(0x629c5e0, internal_629c5e0, public_629c5e0);
extern "C" NAKED register_t __cdecl internal_629c5e0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0x70]
        test edx, edx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        lea ecx, ds:[eax+0xC]
        jne public_629c601
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx+0x70], edx
        jmp public_629c614
        public_629c601 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edx+0x84]
        cmp edx, dword ptr ds : [eax+0x84]
        jge public_629c614
        mov dword ptr ds : [ebx+0x70], eax
        public_629c614 : nop
        mov edx, dword ptr ds : [ebx+0x64]
        test edx, edx
        lea esi, ds:[ebx+0x60]
        jne public_629c622
        xor eax, eax
        jmp public_629c62a
        public_629c622 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_629c62a : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        inc eax
        mov dword ptr ss : [esp+0xC], eax
        fmul dword ptr ds : [ebx+0x74]
        fadd dword ptr ds : [edx+0xA0]
        fidiv dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [ebx+0x74]
        mov edx, dword ptr ds : [ecx]
        fld dword ptr ds : [edx+0xA4]
        fcomp dword ptr ds : [ebx+0x78]
        fnstsw ax
        test ah, 0x41
        jne public_629c664
        mov eax, dword ptr ds : [edx+0xA4]
        mov dword ptr ds : [ebx+0x78], eax
        public_629c664 : nop
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x94]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0xC], edx
        fld dword ptr ss : [esp+0xC]
        mov ecx, ebx
        fadd dword ptr ds : [ebx+0x7C]
        fstp dword ptr ds : [ebx+0x7C]
        call dword ptr ds : [edi+0x3C]
        fadd dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, ebx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_629c779
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_629c6b7
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_629c6bc
        public_629c6b7 : nop
        mov ecx, 1
        public_629c6bc : nop
        test edx, edx
        jne public_629c6c4
        xor eax, eax
        jmp public_629c6c9
        public_629c6c4 : nop
        sub eax, edx
        sar eax, 2
        public_629c6c9 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_629c6d5
        xor eax, eax
        public_629c6d5 : nop
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_629c707
        public_629c6f3 : nop
        push ebx
        push ebp
        call public_630cd00
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_629c6f3
        public_629c707 : nop
        lea eax, ss:[esp+0x20]
        push eax
        push 1
        push ebp
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_626a600
        mov ebx, dword ptr ss : [esp+0x18]
        pop ebp
        lea ecx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+8], ecx
        push 0
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [ebx]
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        public_629c779 : nop
        mov edx, eax
        sub edx, edi
        sar edx, 2
        cmp edx, 1
        jae public_629c7c7
        lea ecx, ds:[edi+4]
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x1C]
        push edx
        sub ecx, edi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_629c803
        public_629c7b8 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_629c7b8
        jmp public_629c803
        public_629c7c7 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_629c7ef
        mov edi, edi
        public_629c7e0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_629c7e0
        public_629c7ef : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_629c803
        public_629c7f6 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_629c7f6
        public_629c803 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        push 0
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [ebx]
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x629c5e0)
    }
}

#undef public_629c601
#undef public_629c614
#undef public_629c622
#undef public_629c62a
#undef public_629c664
#undef public_629c6b7
#undef public_629c6bc
#undef public_629c6c4
#undef public_629c6c9
#undef public_629c6d5
#undef public_629c6f3
#undef public_629c707
#undef public_629c779
#undef public_629c7b8
#undef public_629c7c7
#undef public_629c7e0
#undef public_629c7ef
#undef public_629c7f6
#undef public_629c803
