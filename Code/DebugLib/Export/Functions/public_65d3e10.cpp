#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3e10);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);

#define public_65d3e23 _public_65d3e23
#define public_65d3e56 _public_65d3e56
#define public_65d3e88 _public_65d3e88
#define public_65d3e91 _public_65d3e91
#define public_65d3ea2 _public_65d3ea2
#define public_65d3eab _public_65d3eab
#define public_65d3eb3 _public_65d3eb3
#define public_65d3ec3 _public_65d3ec3
#define public_65d3ef1 _public_65d3ef1
#define public_65d3efa _public_65d3efa
#define public_65d3f13 _public_65d3f13
#define public_65d3f18 _public_65d3f18
#define public_65d3f20 _public_65d3f20

PROC_DECLARE(0x65d3e10, internal_65d3e10, public_65d3e10);
extern "C" NAKED register_t __cdecl internal_65d3e10()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0xFFFFFFFD
        mov esi, ecx
        jbe public_65d3e23
        call public_65d6cc3
        public_65d3e23 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_65d3e56
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_65d3e56
        cmp cl, 0xFF
        je public_65d3e56
        cmp edi, ebx
        jne public_65d3f18
        dec cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_65d3e56 : nop
        mov cl, byte ptr ss : [esp+0x14]
        cmp edi, ebx
        jne public_65d3eb3
        cmp cl, bl
        je public_65d3ea2
        cmp eax, ebx
        je public_65d3e91
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d3e88
        cmp cl, 0xFF
        je public_65d3e88
        dec cl
        pop edi
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_65d3e88 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d3e91 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_65d3ea2 : nop
        cmp eax, ebx
        je public_65d3eab
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [eax], bl
        public_65d3eab : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_65d3eb3 : nop
        cmp cl, bl
        je public_65d3f13
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0x1F
        ja public_65d3ec3
        cmp ecx, edi
        jae public_65d3f20
        public_65d3ec3 : nop
        cmp eax, ebx
        je public_65d3efa
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_65d3ef1
        cmp cl, 0xFF
        je public_65d3ef1
        dec cl
        push edi
        mov byte ptr ds : [eax], cl
        mov ecx, esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_65d4350
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_65d3ef1 : nop
        push eax
        call public_65d6cb8
        add esp, 4
        public_65d3efa : nop
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_65d4350
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_65d3f13 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_65d3f20
        public_65d3f18 : nop
        mov ecx, esi
        push edi
        call public_65d4350
        public_65d3f20 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d3e10)
    }
}

#undef public_65d3e23
#undef public_65d3e56
#undef public_65d3e88
#undef public_65d3e91
#undef public_65d3ea2
#undef public_65d3eab
#undef public_65d3eb3
#undef public_65d3ec3
#undef public_65d3ef1
#undef public_65d3efa
#undef public_65d3f13
#undef public_65d3f18
#undef public_65d3f20
