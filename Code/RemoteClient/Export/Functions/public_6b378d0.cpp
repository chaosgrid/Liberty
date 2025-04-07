#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33c10);
CLANG_FORWARD_PROC_SYMBOL(public_6b38750);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b37936 _public_6b37936
#define public_6b37941 _public_6b37941
#define public_6b37949 _public_6b37949
#define public_6b37954 _public_6b37954
#define public_6b37962 _public_6b37962
#define public_6b37979 _public_6b37979
#define public_6b3798f _public_6b3798f
#define public_6b37997 _public_6b37997
#define public_6b3799f _public_6b3799f
#define public_6b379a7 _public_6b379a7
#define public_6b379af _public_6b379af
#define public_6b379bb _public_6b379bb
#define public_6b379c3 _public_6b379c3
#define public_6b379d0 _public_6b379d0
#define public_6b379de _public_6b379de
#define public_6b379f0 _public_6b379f0
#define public_6b37a08 _public_6b37a08
#define public_6b37a1d _public_6b37a1d
#define public_6b37a31 _public_6b37a31
#define public_6b37a45 _public_6b37a45
#define public_6b37a4d _public_6b37a4d
#define public_6b37a53 _public_6b37a53
#define public_6b37a79 _public_6b37a79
#define public_6b37a7c _public_6b37a7c
#define public_6b37a8f _public_6b37a8f

PROC_DECLARE(0x6b378d0, internal_6b378d0, public_6b378d0);
extern "C" NAKED register_t __cdecl internal_6b378d0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+8]
        push 0x1D
        xor esi, esi
        push 1
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], esi
        call public_6b3b480
        test eax, eax
        jne public_6b37a8f
        mov edx, dword ptr ss : [esp+8]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [edx+0x20], ecx
        mov ax, word ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [ecx+0x24], ax
        mov edx, dword ptr ss : [esp+0x10]
        add edi, 8
        lea ebp, ds:[edx+0x28]
        cmp ebp, edi
        je public_6b37a7c
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_6b37936
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6b37936 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6b37941
        xor ecx, ecx
        jmp public_6b37949
        public_6b37941 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6b37949 : nop
        cmp esi, ecx
        ja public_6b3798f
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6b37962
        public_6b37954 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6b37954
        public_6b37962 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6b37979
        mov eax, dword ptr ss : [ebp+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6b37a7c
        public_6b37979 : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ss : [ebp+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6b37a7c
        public_6b3798f : nop
        test eax, eax
        jne public_6b37997
        xor esi, esi
        jmp public_6b3799f
        public_6b37997 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6b3799f : nop
        test edx, edx
        jne public_6b379a7
        xor ecx, ecx
        jmp public_6b379af
        public_6b379a7 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6b379af : nop
        cmp esi, ecx
        ja public_6b37a31
        test edx, edx
        jne public_6b379bb
        xor ecx, ecx
        jmp public_6b379c3
        public_6b379bb : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6b379c3 : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6b379de
        lea ebx, ds:[ebx]
        public_6b379d0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6b379d0
        public_6b379de : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x20], eax
        mov esi, ecx
        je public_6b37a08
        mov edi, edi
        public_6b379f0 : nop
        push esi
        push ebx
        call public_6b38750
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_6b379f0
        public_6b37a08 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6b37a1d
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea eax, ds:[edx+edi*4]
        jmp public_6b37a79
        public_6b37a1d : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [esp+0x14]
        sub edi, eax
        sar edi, 2
        lea eax, ds:[edx+edi*4]
        jmp public_6b37a79
        public_6b37a31 : nop
        push edx
        call public_6b6a092
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6b37a45
        xor eax, eax
        jmp public_6b37a4d
        public_6b37a45 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6b37a4d : nop
        test eax, eax
        jge public_6b37a53
        xor eax, eax
        public_6b37a53 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6b6a134
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6b33c10
        mov dword ptr ss : [ebp+0xC], eax
        public_6b37a79 : nop
        mov dword ptr ss : [ebp+8], eax
        public_6b37a7c : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x24]
        pop edi
        pop ebp
        public_6b37a8f : nop
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6b378d0)
    }
}

#undef public_6b37936
#undef public_6b37941
#undef public_6b37949
#undef public_6b37954
#undef public_6b37962
#undef public_6b37979
#undef public_6b3798f
#undef public_6b37997
#undef public_6b3799f
#undef public_6b379a7
#undef public_6b379af
#undef public_6b379bb
#undef public_6b379c3
#undef public_6b379d0
#undef public_6b379de
#undef public_6b379f0
#undef public_6b37a08
#undef public_6b37a1d
#undef public_6b37a31
#undef public_6b37a45
#undef public_6b37a4d
#undef public_6b37a53
#undef public_6b37a79
#undef public_6b37a7c
#undef public_6b37a8f
