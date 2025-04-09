#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_52aae0);
CLANG_FORWARD_PROC_SYMBOL(public_52ad20);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_52ab00 _public_52ab00
#define public_52ab15 _public_52ab15
#define public_52ab1a _public_52ab1a
#define public_52ab1e _public_52ab1e
#define public_52ab82 _public_52ab82
#define public_52ab9a _public_52ab9a
#define public_52aba4 _public_52aba4
#define public_52aba8 _public_52aba8
#define public_52abb6 _public_52abb6
#define public_52abf4 _public_52abf4
#define public_52ac03 _public_52ac03
#define public_52ac24 _public_52ac24
#define public_52ac45 _public_52ac45
#define public_52ac53 _public_52ac53
#define public_52ac72 _public_52ac72
#define public_52ac7e _public_52ac7e
#define public_52ac9a _public_52ac9a
#define public_52accb _public_52accb
#define public_52acd8 _public_52acd8
#define public_52ad07 _public_52ad07

PROC_DECLARE(0x52aae0, internal_52aae0, public_52aae0);
extern "C" NAKED register_t __cdecl internal_52aae0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_52ab1e
        lea esp, ss:[esp]
        public_52ab00 : nop
        fld dword ptr ds : [ebx]
        mov esi, ebp
        fcomp dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 5
        jp public_52ab15
        mov ebp, dword ptr ss : [ebp]
        mov al, 1
        jmp public_52ab1a
        public_52ab15 : nop
        mov ebp, dword ptr ss : [ebp+8]
        xor al, al
        public_52ab1a : nop
        cmp ebp, edx
        jne public_52ab00
        public_52ab1e : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_52ac9a
        push 0
        push esi
        mov ecx, edi
        call public_40f110
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4e5fc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_52ab82
        cmp ebp, dword ptr ds : [edi+8]
        jne public_52ab82
        fld dword ptr ds : [ebx]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_52ab82
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_52aba8
        mov dword ptr ds : [eax+8], ebx
        jmp public_52aba8
        public_52ab82 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_52ab9a
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], ecx
        jmp public_52aba4
        public_52ab9a : nop
        cmp esi, dword ptr ds : [eax]
        jne public_52aba4
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_52aba4 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_52aba8 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_52ac7e
        public_52abb6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_52ac7e
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_52ac24
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_52abf4
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_52ac72
        public_52abf4 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_52ac03
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_52ac03 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_52ac72
        public_52ac24 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_52ac45
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_52ac72
        public_52ac45 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_52ac53
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_52ac53 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_52ac72 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_52abb6
        public_52ac7e : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_52ac9a : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_52acd8
        cmp esi, dword ptr ds : [ecx]
        jne public_52accb
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_52ad20
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_52accb : nop
        lea ecx, ss:[esp+0x10]
        call public_43c010
        mov edx, dword ptr ss : [esp+0x10]
        public_52acd8 : nop
        fld dword ptr ds : [edx+0xC]
        fcomp dword ptr ds : [ebx]
        fnstsw ax
        test ah, 5
        jp public_52ad07
        push ebx
        push esi
        push ebp
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_52ad20
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_52ad07 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x52aae0)
    }
}

#undef public_52ab00
#undef public_52ab15
#undef public_52ab1a
#undef public_52ab1e
#undef public_52ab82
#undef public_52ab9a
#undef public_52aba4
#undef public_52aba8
#undef public_52abb6
#undef public_52abf4
#undef public_52ac03
#undef public_52ac24
#undef public_52ac45
#undef public_52ac53
#undef public_52ac72
#undef public_52ac7e
#undef public_52ac9a
#undef public_52accb
#undef public_52acd8
#undef public_52ad07
