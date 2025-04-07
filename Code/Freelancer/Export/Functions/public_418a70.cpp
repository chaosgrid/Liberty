#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4029a0);
CLANG_FORWARD_PROC_SYMBOL(public_418a70);
CLANG_FORWARD_PROC_SYMBOL(public_43c010);

#define public_418a90 _public_418a90
#define public_418aa3 _public_418aa3
#define public_418aa6 _public_418aa6
#define public_418aaa _public_418aaa
#define public_418ae3 _public_418ae3
#define public_418af0 _public_418af0
#define public_418af8 _public_418af8
#define public_418b1c _public_418b1c

PROC_DECLARE(0x418a70, internal_418a70, public_418a70);
extern "C" NAKED register_t __cdecl internal_418a70()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ecx
        push edi
        mov edi, edx
        mov al, 1
        je public_418aaa
        lea esp, ss:[esp]
        public_418a90 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        setl al
        test al, al
        je public_418aa3
        mov esi, dword ptr ds : [esi]
        jmp public_418aa6
        public_418aa3 : nop
        mov esi, dword ptr ds : [esi+8]
        public_418aa6 : nop
        cmp esi, ecx
        jne public_418a90
        public_418aaa : nop
        mov cl, byte ptr ds : [ebx+0xC]
        test cl, cl
        jne public_418af8
        test al, al
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_418af0
        cmp edi, dword ptr ds : [edx]
        jne public_418ae3
        push ebp
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_4029a0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_418ae3 : nop
        lea ecx, ss:[esp+0x1C]
        call public_43c010
        mov ecx, dword ptr ss : [esp+0x1C]
        public_418af0 : nop
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp]
        jge public_418b1c
        public_418af8 : nop
        push ebp
        push edi
        push esi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call public_4029a0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_418b1c : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x418a70)
    }
}

#undef public_418a90
#undef public_418aa3
#undef public_418aa6
#undef public_418aaa
#undef public_418ae3
#undef public_418af0
#undef public_418af8
#undef public_418b1c
