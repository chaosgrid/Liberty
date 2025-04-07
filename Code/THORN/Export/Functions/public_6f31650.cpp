#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31650);
CLANG_FORWARD_PROC_SYMBOL(public_6f31930);
CLANG_FORWARD_PROC_SYMBOL(public_6f319a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f31d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e20);

#define public_6f31670 _public_6f31670
#define public_6f31683 _public_6f31683
#define public_6f31686 _public_6f31686
#define public_6f3168a _public_6f3168a
#define public_6f316e9 _public_6f316e9
#define public_6f31701 _public_6f31701
#define public_6f3170b _public_6f3170b
#define public_6f3170f _public_6f3170f
#define public_6f31720 _public_6f31720
#define public_6f3175b _public_6f3175b
#define public_6f3176a _public_6f3176a
#define public_6f3178b _public_6f3178b
#define public_6f317ac _public_6f317ac
#define public_6f317ba _public_6f317ba
#define public_6f317d9 _public_6f317d9
#define public_6f317e5 _public_6f317e5
#define public_6f31801 _public_6f31801
#define public_6f3181c _public_6f3181c
#define public_6f31823 _public_6f31823
#define public_6f31846 _public_6f31846

PROC_DECLARE(0x6f31650, internal_6f31650, public_6f31650);
extern "C" NAKED register_t __cdecl internal_6f31650()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6f3168a
        lea esp, ss:[esp]
        public_6f31670 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6f31683
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f31686
        public_6f31683 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f31686 : nop
        cmp ebp, edx
        jne public_6f31670
        public_6f3168a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f31801
        push 0
        push esi
        mov ecx, edi
        call public_6f31d70
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f33e20
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f316e9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f316e9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6f316e9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3170f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3170f
        public_6f316e9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f31701
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3170b
        public_6f31701 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f3170b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f3170b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f3170f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f317e5
        lea ecx, ds:[ecx]
        public_6f31720 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6f317e5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3178b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f3175b
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f317d9
        public_6f3175b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f3176a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f31930
        public_6f3176a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f319a0
        jmp public_6f317d9
        public_6f3178b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f317ac
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f317d9
        public_6f317ac : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f317ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f319a0
        public_6f317ba : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f31930
        public_6f317d9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f31720
        public_6f317e5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f31801 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f3181c
        cmp esi, dword ptr ds : [ecx]
        je public_6f31823
        lea ecx, ss:[esp+0x10]
        call public_6f31d90
        mov edx, dword ptr ss : [esp+0x10]
        public_6f3181c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6f31846
        public_6f31823 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f31af0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6f31846 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f31650)
    }
}

#undef public_6f31670
#undef public_6f31683
#undef public_6f31686
#undef public_6f3168a
#undef public_6f316e9
#undef public_6f31701
#undef public_6f3170b
#undef public_6f3170f
#undef public_6f31720
#undef public_6f3175b
#undef public_6f3176a
#undef public_6f3178b
#undef public_6f317ac
#undef public_6f317ba
#undef public_6f317d9
#undef public_6f317e5
#undef public_6f31801
#undef public_6f3181c
#undef public_6f31823
#undef public_6f31846
