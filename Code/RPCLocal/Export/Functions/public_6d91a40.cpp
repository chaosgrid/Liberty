#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d91a8a _public_6d91a8a
#define public_6d91aa2 _public_6d91aa2
#define public_6d91ae0 _public_6d91ae0
#define public_6d91b15 _public_6d91b15
#define public_6d91b28 _public_6d91b28
#define public_6d91b58 _public_6d91b58
#define public_6d91b79 _public_6d91b79
#define public_6d91ba1 _public_6d91ba1
#define public_6d91bd7 _public_6d91bd7
#define public_6d91bef _public_6d91bef
#define public_6d91c0f _public_6d91c0f
#define public_6d91c30 _public_6d91c30
#define public_6d91c3d _public_6d91c3d
#define public_6d91c7b _public_6d91c7b
#define public_6d91c87 _public_6d91c87

PROC_DECLARE(0x6d91a40, internal_6d91a40, public_6d91a40);
extern "C" NAKED register_t __cdecl internal_6d91a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edi
        lea ebx, ss:[ebp+0x10]
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d91a8a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d91a8a : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov esi, 0x17
        jbe public_6d91aa2
        mov dword ptr ds : [ebx+0xC], esi
        public_6d91aa2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d91c87
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x24], edx
        jbe public_6d91b15
        push eax
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x20], eax
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d91ae0
        mov dword ptr ds : [ebx+0xC], esi
        public_6d91ae0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d91c87
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [edi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, 0x17
        public_6d91b15 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d91b28
        mov dword ptr ds : [ebx+0xC], esi
        public_6d91b28 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d91c87
        mov eax, dword ptr ss : [ebp+0x18]
        lea edi, ss:[ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [esp+0x18], ecx
        jbe public_6d91c0f
        mov dword ptr ss : [esp+0x20], 0
        public_6d91b58 : nop
        push 8
        call public_6db1f8a
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, eax
        mov eax, dword ptr ds : [ebx]
        add eax, 4
        add esp, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6d91b79
        mov dword ptr ds : [ebx+0xC], esi
        public_6d91b79 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d91c30
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6d91ba1
        mov dword ptr ds : [ebx+0xC], esi
        public_6d91ba1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d91c30
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ss : [ebp+0x2C]
        mov eax, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x14], eax
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], esi
        jne public_6d91bd7
        mov ecx, eax
        public_6d91bd7 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d91bef
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        public_6d91bef : nop
        mov esi, dword ptr ss : [ebp+0x30]
        mov eax, dword ptr ss : [esp+0x20]
        inc esi
        inc eax
        cmp ax, word ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [esp+0x20], eax
        mov esi, 0x17
        jb public_6d91b58
        public_6d91c0f : nop
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        push eax
        push edi
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d91c3d
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d91c30 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d91c3d : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6d91c7b
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6d91c7b : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d91c87 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d91a40)
    }
}

#undef public_6d91a8a
#undef public_6d91aa2
#undef public_6d91ae0
#undef public_6d91b15
#undef public_6d91b28
#undef public_6d91b58
#undef public_6d91b79
#undef public_6d91ba1
#undef public_6d91bd7
#undef public_6d91bef
#undef public_6d91c0f
#undef public_6d91c30
#undef public_6d91c3d
#undef public_6d91c7b
#undef public_6d91c87
