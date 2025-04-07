#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407ac0);
CLANG_FORWARD_PROC_SYMBOL(public_408170);
CLANG_FORWARD_PROC_SYMBOL(public_408420);
CLANG_FORWARD_PROC_SYMBOL(public_408470);
CLANG_FORWARD_PROC_SYMBOL(public_4084d0);
CLANG_FORWARD_PROC_SYMBOL(public_4084f0);
CLANG_FORWARD_PROC_SYMBOL(public_4085a0);

#define public_407ae0 _public_407ae0
#define public_407af3 _public_407af3
#define public_407af6 _public_407af6
#define public_407afa _public_407afa
#define public_407b59 _public_407b59
#define public_407b71 _public_407b71
#define public_407b7b _public_407b7b
#define public_407b7f _public_407b7f
#define public_407b90 _public_407b90
#define public_407bcb _public_407bcb
#define public_407bda _public_407bda
#define public_407bfb _public_407bfb
#define public_407c1c _public_407c1c
#define public_407c2a _public_407c2a
#define public_407c49 _public_407c49
#define public_407c55 _public_407c55
#define public_407c71 _public_407c71
#define public_407c8c _public_407c8c
#define public_407c93 _public_407c93
#define public_407cb6 _public_407cb6

PROC_DECLARE(0x407ac0, internal_407ac0, public_407ac0);
extern "C" NAKED register_t __cdecl internal_407ac0()
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
        je public_407afa
        lea esp, ss:[esp]
        public_407ae0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_407af3
        mov ebp, dword ptr ss : [ebp]
        jmp public_407af6
        public_407af3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_407af6 : nop
        cmp ebp, edx
        jne public_407ae0
        public_407afa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_407c71
        push 0
        push esi
        mov ecx, edi
        call public_4084d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4085a0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_407b59
        cmp ebp, dword ptr ds : [edi+8]
        jne public_407b59
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_407b59
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_407b7f
        mov dword ptr ds : [eax+8], ebx
        jmp public_407b7f
        public_407b59 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_407b71
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_407b7b
        public_407b71 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_407b7b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_407b7b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_407b7f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_407c55
        lea ecx, ds:[ecx]
        public_407b90 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_407c55
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_407bfb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_407bcb
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_407c49
        public_407bcb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_407bda
        mov esi, eax
        push esi
        mov ecx, edi
        call public_408420
        public_407bda : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x10], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_408470
        jmp public_407c49
        public_407bfb : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_407c1c
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_407c49
        public_407c1c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_407c2a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_408470
        public_407c2a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_408420
        public_407c49 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_407b90
        public_407c55 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_407c71 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_407c8c
        cmp esi, dword ptr ds : [ecx]
        je public_407c93
        lea ecx, ss:[esp+0x10]
        call public_4084f0
        mov edx, dword ptr ss : [esp+0x10]
        public_407c8c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_407cb6
        public_407c93 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_408170
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
        public_407cb6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x407ac0)
    }
}

#undef public_407ae0
#undef public_407af3
#undef public_407af6
#undef public_407afa
#undef public_407b59
#undef public_407b71
#undef public_407b7b
#undef public_407b7f
#undef public_407b90
#undef public_407bcb
#undef public_407bda
#undef public_407bfb
#undef public_407c1c
#undef public_407c2a
#undef public_407c49
#undef public_407c55
#undef public_407c71
#undef public_407c8c
#undef public_407c93
#undef public_407cb6
