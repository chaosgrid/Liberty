#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267db0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62bd520 _public_62bd520
#define public_62bd527 _public_62bd527
#define public_62bd532 _public_62bd532
#define public_62bd539 _public_62bd539
#define public_62bd544 _public_62bd544
#define public_62bd554 _public_62bd554
#define public_62bd570 _public_62bd570
#define public_62bd58a _public_62bd58a
#define public_62bd592 _public_62bd592
#define public_62bd599 _public_62bd599
#define public_62bd5a1 _public_62bd5a1
#define public_62bd5a8 _public_62bd5a8
#define public_62bd5b8 _public_62bd5b8
#define public_62bd5bf _public_62bd5bf
#define public_62bd5c6 _public_62bd5c6
#define public_62bd5d6 _public_62bd5d6
#define public_62bd5e6 _public_62bd5e6
#define public_62bd5fe _public_62bd5fe
#define public_62bd61c _public_62bd61c
#define public_62bd638 _public_62bd638
#define public_62bd64c _public_62bd64c
#define public_62bd653 _public_62bd653
#define public_62bd659 _public_62bd659
#define public_62bd67e _public_62bd67e

PROC_DECLARE(0x62bd4e0, internal_62bd4e0, public_62bd4e0);
extern "C" NAKED register_t __cdecl internal_62bd4e0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        mov al, byte ptr ds : [edi+0x10]
        add edi, 0x14
        lea ebp, ds:[ebx+0x14]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ds : [ebx+0x10], al
        je public_62bd67e
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62bd520
        xor esi, esi
        jmp public_62bd527
        public_62bd520 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 1
        public_62bd527 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_62bd532
        xor ecx, ecx
        jmp public_62bd539
        public_62bd532 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 1
        public_62bd539 : nop
        cmp esi, ecx
        ja public_62bd58a
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_62bd554
        public_62bd544 : nop
        mov si, word ptr ds : [eax]
        mov word ptr ds : [edx], si
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_62bd544
        public_62bd554 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62bd570
        mov ecx, dword ptr ss : [ebp+4]
        xor edi, edi
        lea edx, ds:[ecx+edi*2]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_62bd570 : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [ebp+4]
        sub edi, eax
        sar edi, 1
        lea edx, ds:[ecx+edi*2]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_62bd58a : nop
        test eax, eax
        jne public_62bd592
        xor esi, esi
        jmp public_62bd599
        public_62bd592 : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 1
        public_62bd599 : nop
        test edx, edx
        jne public_62bd5a1
        xor ecx, ecx
        jmp public_62bd5a8
        public_62bd5a1 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 1
        public_62bd5a8 : nop
        cmp esi, ecx
        ja public_62bd638
        test edx, edx
        jne public_62bd5b8
        xor ecx, ecx
        jmp public_62bd5bf
        public_62bd5b8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 1
        public_62bd5bf : nop
        lea ecx, ds:[eax+ecx*2]
        cmp eax, ecx
        je public_62bd5d6
        public_62bd5c6 : nop
        mov si, word ptr ds : [eax]
        mov word ptr ds : [edx], si
        add eax, 2
        add edx, 2
        cmp eax, ecx
        jne public_62bd5c6
        public_62bd5d6 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], eax
        mov esi, ecx
        je public_62bd5fe
        public_62bd5e6 : nop
        push esi
        push ebx
        call public_626c1c0
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 2
        add esp, 8
        add ebx, 2
        cmp esi, eax
        jne public_62bd5e6
        public_62bd5fe : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62bd61c
        mov eax, dword ptr ss : [ebp+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*2]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62bd61c : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ss : [ebp+4]
        sar edi, 1
        lea ecx, ds:[eax+edi*2]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_62bd638 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_62bd64c
        xor eax, eax
        jmp public_62bd653
        public_62bd64c : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 1
        public_62bd653 : nop
        test eax, eax
        jge public_62bd659
        xor eax, eax
        public_62bd659 : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6267db0
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_62bd67e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62bd4e0)
    }
}

#undef public_62bd520
#undef public_62bd527
#undef public_62bd532
#undef public_62bd539
#undef public_62bd544
#undef public_62bd554
#undef public_62bd570
#undef public_62bd58a
#undef public_62bd592
#undef public_62bd599
#undef public_62bd5a1
#undef public_62bd5a8
#undef public_62bd5b8
#undef public_62bd5bf
#undef public_62bd5c6
#undef public_62bd5d6
#undef public_62bd5e6
#undef public_62bd5fe
#undef public_62bd61c
#undef public_62bd638
#undef public_62bd64c
#undef public_62bd653
#undef public_62bd659
#undef public_62bd67e
