#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4044b0);
CLANG_FORWARD_PROC_SYMBOL(public_4055b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4044c7 _public_4044c7
#define public_4044fa _public_4044fa
#define public_40452c _public_40452c
#define public_404538 _public_404538
#define public_404549 _public_404549
#define public_404553 _public_404553
#define public_40455b _public_40455b
#define public_40456b _public_40456b
#define public_404599 _public_404599
#define public_4045a5 _public_4045a5
#define public_4045be _public_4045be
#define public_4045c3 _public_4045c3
#define public_4045cb _public_4045cb

PROC_DECLARE(0x4044b0, internal_4044b0, public_4044b0);
extern "C" NAKED register_t __cdecl internal_4044b0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, 0x7FFFFFFD
        mov esi, ecx
        jbe public_4044c7
        call dword ptr ds : [public_41b8a0]
        public_4044c7 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, ebx
        je public_4044fa
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_4044fa
        cmp cl, 0xFF
        je public_4044fa
        cmp edi, ebx
        jne public_4045c3
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
        public_4044fa : nop
        cmp edi, ebx
        mov cl, byte ptr ss : [esp+0x14]
        jne public_40455b
        cmp cl, bl
        je public_404549
        cmp eax, ebx
        je public_404538
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_40452c
        cmp cl, 0xFF
        je public_40452c
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
        public_40452c : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_404538 : nop
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_404549 : nop
        cmp eax, ebx
        je public_404553
        mov dword ptr ds : [esi+8], ebx
        mov word ptr ds : [eax], bx
        public_404553 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 8
        public_40455b : nop
        cmp cl, bl
        je public_4045be
        mov ecx, dword ptr ds : [esi+0xC]
        cmp ecx, 0x1F
        ja public_40456b
        cmp ecx, edi
        jae public_4045cb
        public_40456b : nop
        cmp eax, ebx
        je public_4045a5
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_404599
        cmp cl, 0xFF
        je public_404599
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_4055b0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_404599 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_418978
        add esp, 4
        public_4045a5 : nop
        mov ecx, esi
        push edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        call public_4055b0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_4045be : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_4045cb
        public_4045c3 : nop
        mov ecx, esi
        push edi
        call public_4055b0
        public_4045cb : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4044b0)
    }
}

#undef public_4044c7
#undef public_4044fa
#undef public_40452c
#undef public_404538
#undef public_404549
#undef public_404553
#undef public_40455b
#undef public_40456b
#undef public_404599
#undef public_4045a5
#undef public_4045be
#undef public_4045c3
#undef public_4045cb
