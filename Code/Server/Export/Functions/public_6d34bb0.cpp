#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d34bed _public_6d34bed
#define public_6d34c20 _public_6d34c20
#define public_6d34c41 _public_6d34c41
#define public_6d34c43 _public_6d34c43
#define public_6d34c4c _public_6d34c4c
#define public_6d34c5b _public_6d34c5b

PROC_DECLARE(0x6d34bb0, internal_6d34bb0, public_6d34bb0);
extern "C" NAKED register_t __cdecl internal_6d34bb0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        xor ebx, ebx
        test eax, eax
        je public_6d34bed
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, ebp
        cmp ecx, eax
        je public_6d34bed
        add eax, 2
        mov edx, eax
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d34c20
        mov ebx, dword ptr ds : [edi+0xC]
        public_6d34bed : nop
        cmp ebx, dword ptr ds : [edi+0xC]
        jb public_6d34c5b
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d34c41
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d34c43
        mov edi, edi
        public_6d34c20 : nop
        mov eax, dword ptr ds : [edi+0x10]
        inc ebx
        cmp ebx, eax
        jae public_6d34bed
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0xC], eax
        je public_6d34bed
        add eax, 2
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d34c20
        public_6d34c41 : nop
        mov eax, edx
        public_6d34c43 : nop
        test eax, eax
        je public_6d34c4c
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d34c4c : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6d34c5b : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d34bb0)
    }
}

#undef public_6d34bed
#undef public_6d34c20
#undef public_6d34c41
#undef public_6d34c43
#undef public_6d34c4c
#undef public_6d34c5b
