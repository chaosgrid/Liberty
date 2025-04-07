#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630a4e6 _public_630a4e6
#define public_630a500 _public_630a500
#define public_630a51d _public_630a51d
#define public_630a535 _public_630a535
#define public_630a546 _public_630a546
#define public_630a5c4 _public_630a5c4
#define public_630a5dc _public_630a5dc
#define public_630a5f0 _public_630a5f0
#define public_630a60d _public_630a60d
#define public_630a625 _public_630a625
#define public_630a635 _public_630a635

PROC_DECLARE(0x630a4d0, internal_630a4d0, public_630a4d0);
extern "C" NAKED register_t __cdecl internal_630a4d0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        je public_630a60d
        mov ebx, dword ptr ss : [esp+0x14]
        public_630a4e6 : nop
        mov ebp, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_632c410
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        je public_630a51d
        public_630a500 : nop
        cmp dword ptr ds : [eax+0xC], ebp
        je public_630a546
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_632ca20
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        jne public_630a500
        public_630a51d : nop
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_630a535
        mov ebp, eax
        public_630a535 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push ebx
        jmp public_630a635
        public_630a546 : nop
        lea esi, ds:[eax+8]
        test esi, esi
        je public_630a51d
        mov dl, byte ptr ds : [esi+0x18]
        cmp dl, byte ptr ds : [ebx+0x18]
        jne public_630a4e6
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, dword ptr ds : [ebx+0x1C]
        jne public_630a4e6
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_630a4e6
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_630a5f0
        fld dword ptr ds : [ebx+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ds : [esi+0x14]
        jp public_630a5dc
        fld dword ptr ds : [ebx+0x10]
        mov ebx, dword ptr ds : [ebx+0x14]
        fadd dword ptr ds : [esi+0x10]
        add ebx, eax
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_630a5c4
        dec ebx
        fstp dword ptr ds : [esi+0x10]
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_630a5c4 : nop
        fsub dword ptr ds : [public_639a1d0]
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, 1
        fstp dword ptr ds : [esi+0x10]
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_630a5dc : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        add eax, ecx
        pop edi
        mov dword ptr ds : [esi+0x14], eax
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_630a5f0 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [esi+0x14]
        add eax, edx
        mov dword ptr ds : [esi+0x14], eax
        fld dword ptr ds : [ebx+0x10]
        pop edi
        fstp dword ptr ds : [esi+0x10]
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        public_630a60d : nop
        mov esi, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [esi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_630a625
        mov ebx, eax
        public_630a625 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        push ecx
        public_630a635 : nop
        add eax, 8
        push eax
        call public_626c1e0
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x630a4d0)
    }
}

#undef public_630a4e6
#undef public_630a500
#undef public_630a51d
#undef public_630a535
#undef public_630a546
#undef public_630a5c4
#undef public_630a5dc
#undef public_630a5f0
#undef public_630a60d
#undef public_630a625
#undef public_630a635
