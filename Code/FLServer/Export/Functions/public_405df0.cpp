#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405df0);
CLANG_FORWARD_PROC_SYMBOL(public_405f10);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_405e04 _public_405e04
#define public_405e37 _public_405e37
#define public_405e69 _public_405e69
#define public_405e72 _public_405e72
#define public_405e83 _public_405e83
#define public_405e8c _public_405e8c
#define public_405e94 _public_405e94
#define public_405ea4 _public_405ea4
#define public_405ed2 _public_405ed2
#define public_405edb _public_405edb
#define public_405ef4 _public_405ef4
#define public_405ef9 _public_405ef9
#define public_405f01 _public_405f01

PROC_DECLARE(0x405df0, internal_405df0, public_405df0);
extern "C" NAKED register_t __cdecl internal_405df0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0xFFFFFFFD
        mov esi, ecx
        jbe public_405e04
        call dword ptr ds : [public_41b8a0]
        public_405e04 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_405e37
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_405e37
        cmp cl, 0xFF
        je public_405e37
        cmp edi, ebx
        jne public_405ef9
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
        public_405e37 : nop
        cmp edi, ebx
        mov cl, byte ptr ss : [esp+0x14]
        jne public_405e94
        cmp cl, bl
        je public_405e83
        cmp eax, ebx
        je public_405e72
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_405e69
        cmp cl, 0xFF
        je public_405e69
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
        public_405e69 : nop
        push eax
        call public_418978
        add esp, 4
        public_405e72 : nop
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_405e83 : nop
        cmp eax, ebx
        je public_405e8c
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [eax], bl
        public_405e8c : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_405e94 : nop
        cmp cl, bl
        je public_405ef4
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0x1F
        ja public_405ea4
        cmp ecx, edi
        jae public_405f01
        public_405ea4 : nop
        cmp eax, ebx
        je public_405edb
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_405ed2
        cmp cl, 0xFF
        je public_405ed2
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_405f10
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_405ed2 : nop
        push eax
        call public_418978
        add esp, 4
        public_405edb : nop
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_405f10
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_405ef4 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_405f01
        public_405ef9 : nop
        mov ecx, esi
        push edi
        call public_405f10
        public_405f01 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x405df0)
    }
}

#undef public_405e04
#undef public_405e37
#undef public_405e69
#undef public_405e72
#undef public_405e83
#undef public_405e8c
#undef public_405e94
#undef public_405ea4
#undef public_405ed2
#undef public_405edb
#undef public_405ef4
#undef public_405ef9
#undef public_405f01
