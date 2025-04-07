#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d35215 _public_6d35215
#define public_6d35241 _public_6d35241
#define public_6d35251 _public_6d35251
#define public_6d3527b _public_6d3527b
#define public_6d35287 _public_6d35287
#define public_6d3528c _public_6d3528c
#define public_6d3529c _public_6d3529c
#define public_6d3529e _public_6d3529e
#define public_6d352a7 _public_6d352a7

PROC_DECLARE(0x6d351d0, internal_6d351d0, public_6d351d0);
extern "C" NAKED register_t __cdecl internal_6d351d0()
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
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, ebp
        mov dword ptr ds : [esi+0x18], ecx
        mov cx, word ptr ds : [eax]
        xor ebx, ebx
        test cx, cx
        je public_6d3528c
        cmp cx, 0xA
        je public_6d3528c
        add eax, 2
        mov edx, eax
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d35241
        mov ebx, dword ptr ds : [edi+0x10]
        public_6d35215 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3529c
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3529e
        public_6d35241 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d35287
        mov ebx, 1
        cmp eax, ebx
        jbe public_6d35215
        public_6d35251 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [esi+0x10]
        mov cx, word ptr ds : [eax]
        test cx, cx
        je public_6d3527b
        cmp cx, 0xA
        je public_6d3527b
        add eax, 2
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebx, eax
        jb public_6d35251
        jmp public_6d35215
        public_6d3527b : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d35287 : nop
        mov dword ptr ds : [esi+0x10], ebp
        jmp public_6d35215
        public_6d3528c : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d35215
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d3529c : nop
        mov eax, edx
        public_6d3529e : nop
        test eax, eax
        je public_6d352a7
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d352a7 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d351d0)
    }
}

#undef public_6d35215
#undef public_6d35241
#undef public_6d35251
#undef public_6d3527b
#undef public_6d35287
#undef public_6d3528c
#undef public_6d3529c
#undef public_6d3529e
#undef public_6d352a7
