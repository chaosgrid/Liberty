#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433940);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_526d20);
CLANG_FORWARD_PROC_SYMBOL(public_527500);
CLANG_FORWARD_PROC_SYMBOL(public_527800);
CLANG_FORWARD_PROC_SYMBOL(public_527850);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_526d40 _public_526d40
#define public_526d53 _public_526d53
#define public_526d56 _public_526d56
#define public_526d5a _public_526d5a
#define public_526db9 _public_526db9
#define public_526dd1 _public_526dd1
#define public_526ddb _public_526ddb
#define public_526ddf _public_526ddf
#define public_526df0 _public_526df0
#define public_526e2b _public_526e2b
#define public_526e3a _public_526e3a
#define public_526e5b _public_526e5b
#define public_526e7c _public_526e7c
#define public_526e8a _public_526e8a
#define public_526ea9 _public_526ea9
#define public_526eb5 _public_526eb5
#define public_526ed1 _public_526ed1
#define public_526eec _public_526eec
#define public_526ef3 _public_526ef3
#define public_526f16 _public_526f16

PROC_DECLARE(0x526d20, internal_526d20, public_526d20);
extern "C" NAKED register_t __cdecl internal_526d20()
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
        je public_526d5a
        lea esp, ss:[esp]
        public_526d40 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_526d53
        mov ebp, dword ptr ss : [ebp]
        jmp public_526d56
        public_526d53 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_526d56 : nop
        cmp ebp, edx
        jne public_526d40
        public_526d5a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_526ed1
        push 0
        push esi
        mov ecx, edi
        call public_527800
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_527850
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_526db9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_526db9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_526db9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_526ddf
        mov dword ptr ds : [eax+8], ebx
        jmp public_526ddf
        public_526db9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_526dd1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_526ddb
        public_526dd1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_526ddb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_526ddb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_526ddf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_526eb5
        lea ecx, ds:[ecx]
        public_526df0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x60]
        test cl, cl
        jne public_526eb5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_526e5b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_526e2b
        mov byte ptr ds : [eax+0x60], 1
        mov byte ptr ds : [ecx+0x60], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_526ea9
        public_526e2b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_526e3a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_526e3a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x60], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x60], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_526ea9
        public_526e5b : nop
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_526e7c
        mov byte ptr ds : [eax+0x60], 1
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x60], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_526ea9
        public_526e7c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_526e8a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_526e8a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x60], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_526ea9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_526df0
        public_526eb5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x60], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_526ed1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_526eec
        cmp esi, dword ptr ds : [ecx]
        je public_526ef3
        lea ecx, ss:[esp+0x10]
        call public_433940
        mov edx, dword ptr ss : [esp+0x10]
        public_526eec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_526f16
        public_526ef3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_527500
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
        public_526f16 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x526d20)
    }
}

#undef public_526d40
#undef public_526d53
#undef public_526d56
#undef public_526d5a
#undef public_526db9
#undef public_526dd1
#undef public_526ddb
#undef public_526ddf
#undef public_526df0
#undef public_526e2b
#undef public_526e3a
#undef public_526e5b
#undef public_526e7c
#undef public_526e8a
#undef public_526ea9
#undef public_526eb5
#undef public_526ed1
#undef public_526eec
#undef public_526ef3
#undef public_526f16
