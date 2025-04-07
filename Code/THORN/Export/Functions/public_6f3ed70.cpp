#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ed70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f200);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3ed84 _public_6f3ed84
#define public_6f3edb7 _public_6f3edb7
#define public_6f3ede9 _public_6f3ede9
#define public_6f3edf2 _public_6f3edf2
#define public_6f3ee03 _public_6f3ee03
#define public_6f3ee0c _public_6f3ee0c
#define public_6f3ee14 _public_6f3ee14
#define public_6f3ee24 _public_6f3ee24
#define public_6f3ee52 _public_6f3ee52
#define public_6f3ee5b _public_6f3ee5b
#define public_6f3ee74 _public_6f3ee74
#define public_6f3ee79 _public_6f3ee79
#define public_6f3ee81 _public_6f3ee81

PROC_DECLARE(0x6f3ed70, internal_6f3ed70, public_6f3ed70);
extern "C" NAKED register_t __cdecl internal_6f3ed70()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0xFFFFFFFD
        mov esi, ecx
        jbe public_6f3ed84
        call dword ptr ds : [public_6f5a01c]
        public_6f3ed84 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f3edb7
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6f3edb7
        cmp cl, 0xFF
        je public_6f3edb7
        cmp edi, ebx
        jne public_6f3ee79
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
        public_6f3edb7 : nop
        cmp edi, ebx
        mov cl, byte ptr ss : [esp+0x14]
        jne public_6f3ee14
        cmp cl, bl
        je public_6f3ee03
        cmp eax, ebx
        je public_6f3edf2
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f3ede9
        cmp cl, 0xFF
        je public_6f3ede9
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
        public_6f3ede9 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f3edf2 : nop
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6f3ee03 : nop
        cmp eax, ebx
        je public_6f3ee0c
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [eax], bl
        public_6f3ee0c : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6f3ee14 : nop
        cmp cl, bl
        je public_6f3ee74
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0x1F
        ja public_6f3ee24
        cmp ecx, edi
        jae public_6f3ee81
        public_6f3ee24 : nop
        cmp eax, ebx
        je public_6f3ee5b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6f3ee52
        cmp cl, 0xFF
        je public_6f3ee52
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f3f200
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6f3ee52 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f3ee5b : nop
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6f3f200
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6f3ee74 : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6f3ee81
        public_6f3ee79 : nop
        mov ecx, esi
        push edi
        call public_6f3f200
        public_6f3ee81 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f3ed70)
    }
}

#undef public_6f3ed84
#undef public_6f3edb7
#undef public_6f3ede9
#undef public_6f3edf2
#undef public_6f3ee03
#undef public_6f3ee0c
#undef public_6f3ee14
#undef public_6f3ee24
#undef public_6f3ee52
#undef public_6f3ee5b
#undef public_6f3ee74
#undef public_6f3ee79
#undef public_6f3ee81
