#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7450);
CLANG_FORWARD_PROC_SYMBOL(public_6ea7730);
CLANG_FORWARD_PROC_SYMBOL(public_6efdfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40340);
CLANG_FORWARD_PROC_SYMBOL(public_6f46170);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f40360 _public_6f40360
#define public_6f40373 _public_6f40373
#define public_6f40376 _public_6f40376
#define public_6f4037a _public_6f4037a
#define public_6f403d9 _public_6f403d9
#define public_6f403f1 _public_6f403f1
#define public_6f403fb _public_6f403fb
#define public_6f403ff _public_6f403ff
#define public_6f40410 _public_6f40410
#define public_6f4044b _public_6f4044b
#define public_6f4045a _public_6f4045a
#define public_6f4047b _public_6f4047b
#define public_6f4049c _public_6f4049c
#define public_6f404aa _public_6f404aa
#define public_6f404c9 _public_6f404c9
#define public_6f404d5 _public_6f404d5
#define public_6f404f1 _public_6f404f1
#define public_6f4050c _public_6f4050c
#define public_6f40513 _public_6f40513
#define public_6f40536 _public_6f40536

PROC_DECLARE(0x6f40340, internal_6f40340, public_6f40340);
extern "C" NAKED register_t __cdecl internal_6f40340()
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
        je public_6f4037a
        lea esp, ss:[esp]
        public_6f40360 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f40373
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f40376
        public_6f40373 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f40376 : nop
        cmp ebp, edx
        jne public_6f40360
        public_6f4037a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f404f1
        push 0
        push esi
        mov ecx, edi
        call public_6f46170
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ea7730
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f403d9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f403d9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f403d9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f403ff
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f403ff
        public_6f403d9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f403f1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f403fb
        public_6f403f1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f403fb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f403fb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f403ff : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f404d5
        lea ecx, ds:[ecx]
        public_6f40410 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x54]
        test cl, cl
        jne public_6f404d5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4047b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6f4044b
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f404c9
        public_6f4044b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4045a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f4045a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x54], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f404c9
        public_6f4047b : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6f4049c
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x54], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f404c9
        public_6f4049c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f404aa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f404aa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f404c9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f40410
        public_6f404d5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x54], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f404f1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f4050c
        cmp esi, dword ptr ds : [ecx]
        je public_6f40513
        lea ecx, ss:[esp+0x10]
        call public_6efdfa0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f4050c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f40536
        public_6f40513 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6ea7450
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
        public_6f40536 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f40340)
    }
}

#undef public_6f40360
#undef public_6f40373
#undef public_6f40376
#undef public_6f4037a
#undef public_6f403d9
#undef public_6f403f1
#undef public_6f403fb
#undef public_6f403ff
#undef public_6f40410
#undef public_6f4044b
#undef public_6f4045a
#undef public_6f4047b
#undef public_6f4049c
#undef public_6f404aa
#undef public_6f404c9
#undef public_6f404d5
#undef public_6f404f1
#undef public_6f4050c
#undef public_6f40513
#undef public_6f40536
