#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5df0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5f10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce5e04 _public_6ce5e04
#define public_6ce5e37 _public_6ce5e37
#define public_6ce5e69 _public_6ce5e69
#define public_6ce5e72 _public_6ce5e72
#define public_6ce5e83 _public_6ce5e83
#define public_6ce5e8c _public_6ce5e8c
#define public_6ce5e94 _public_6ce5e94
#define public_6ce5ea4 _public_6ce5ea4
#define public_6ce5ed2 _public_6ce5ed2
#define public_6ce5edb _public_6ce5edb
#define public_6ce5ef4 _public_6ce5ef4
#define public_6ce5ef9 _public_6ce5ef9
#define public_6ce5f01 _public_6ce5f01

PROC_DECLARE(0x6ce5df0, internal_6ce5df0, public_6ce5df0);
extern "C" NAKED register_t __cdecl internal_6ce5df0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0xFFFFFFFD
        mov esi, ecx
        jbe public_6ce5e04
        call dword ptr ds : [public_6d64b4c]
        public_6ce5e04 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_6ce5e37
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6ce5e37
        cmp cl, 0xFF
        je public_6ce5e37
        cmp edi, ebx
        jne public_6ce5ef9
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6ce5e37 : nop
        cmp edi, ebx
        mov cl, byte ptr ss : [esp+0x14]
        jne public_6ce5e94
        cmp cl, bl
        je public_6ce5e83
        cmp eax, ebx
        je public_6ce5e72
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ce5e69
        cmp cl, 0xFF
        je public_6ce5e69
        dec cl
        mov byte ptr ds : [eax], cl
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6ce5e69 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce5e72 : nop
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6ce5e83 : nop
        cmp eax, ebx
        je public_6ce5e8c
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [eax], bl
        public_6ce5e8c : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6ce5e94 : nop
        cmp cl, bl
        je public_6ce5ef4
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0x1F
        ja public_6ce5ea4
        cmp ecx, edi
        jae public_6ce5f01
        public_6ce5ea4 : nop
        cmp eax, ebx
        je public_6ce5edb
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ce5ed2
        cmp cl, 0xFF
        je public_6ce5ed2
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6ce5f10
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ce5ed2 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce5edb : nop
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6ce5f10
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ce5ef4 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6ce5f01
        public_6ce5ef9 : nop
        mov ecx, esi
        push edi
        call public_6ce5f10
        public_6ce5f01 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce5df0)
    }
}

#undef public_6ce5e04
#undef public_6ce5e37
#undef public_6ce5e69
#undef public_6ce5e72
#undef public_6ce5e83
#undef public_6ce5e8c
#undef public_6ce5e94
#undef public_6ce5ea4
#undef public_6ce5ed2
#undef public_6ce5edb
#undef public_6ce5ef4
#undef public_6ce5ef9
#undef public_6ce5f01
