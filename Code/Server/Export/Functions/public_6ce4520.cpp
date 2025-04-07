#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5500);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce4537 _public_6ce4537
#define public_6ce456a _public_6ce456a
#define public_6ce459c _public_6ce459c
#define public_6ce45a8 _public_6ce45a8
#define public_6ce45b9 _public_6ce45b9
#define public_6ce45c3 _public_6ce45c3
#define public_6ce45cb _public_6ce45cb
#define public_6ce45db _public_6ce45db
#define public_6ce4609 _public_6ce4609
#define public_6ce4615 _public_6ce4615
#define public_6ce462e _public_6ce462e
#define public_6ce4633 _public_6ce4633
#define public_6ce463b _public_6ce463b

PROC_DECLARE(0x6ce4520, internal_6ce4520, public_6ce4520);
extern "C" NAKED register_t __cdecl internal_6ce4520()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0x7FFFFFFD
        mov esi, ecx
        jbe public_6ce4537
        call dword ptr ds : [public_6d64b4c]
        public_6ce4537 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_6ce456a
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6ce456a
        cmp cl, 0xFF
        je public_6ce456a
        cmp edi, ebx
        jne public_6ce4633
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
        public_6ce456a : nop
        cmp edi, ebx
        mov cl, byte ptr ss : [esp+0x14]
        jne public_6ce45cb
        cmp cl, bl
        je public_6ce45b9
        cmp eax, ebx
        je public_6ce45a8
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6ce459c
        cmp cl, 0xFF
        je public_6ce459c
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
        public_6ce459c : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce45a8 : nop
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6ce45b9 : nop
        cmp eax, ebx
        je public_6ce45c3
        mov dword ptr ds : [esi+8], ebx
        mov word ptr ds : [eax], bx
        public_6ce45c3 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_6ce45cb : nop
        cmp cl, bl
        je public_6ce462e
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0x1F
        ja public_6ce45db
        cmp ecx, edi
        jae public_6ce463b
        public_6ce45db : nop
        cmp eax, ebx
        je public_6ce4615
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6ce4609
        cmp cl, 0xFF
        je public_6ce4609
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6ce5500
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ce4609 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce4615 : nop
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_6ce5500
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ce462e : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6ce463b
        public_6ce4633 : nop
        mov ecx, esi
        push edi
        call public_6ce5500
        public_6ce463b : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ce4520)
    }
}

#undef public_6ce4537
#undef public_6ce456a
#undef public_6ce459c
#undef public_6ce45a8
#undef public_6ce45b9
#undef public_6ce45c3
#undef public_6ce45cb
#undef public_6ce45db
#undef public_6ce4609
#undef public_6ce4615
#undef public_6ce462e
#undef public_6ce4633
#undef public_6ce463b
