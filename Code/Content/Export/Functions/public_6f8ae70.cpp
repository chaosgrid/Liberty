#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8ae70);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f8ae90 _public_6f8ae90
#define public_6f8aea6 _public_6f8aea6
#define public_6f8aeab _public_6f8aeab
#define public_6f8aee0 _public_6f8aee0
#define public_6f8aee5 _public_6f8aee5
#define public_6f8af0a _public_6f8af0a
#define public_6f8af1e _public_6f8af1e

PROC_DECLARE(0x6f8ae70, internal_6f8ae70, public_6f8ae70);
extern "C" NAKED register_t __cdecl internal_6f8ae70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x34], ecx
        mov eax, dword ptr ds : [esi+0x6C]
        push edi
        mov edi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp edi, eax
        je public_6f8aeab
        lea esp, ss:[esp]
        public_6f8ae90 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 5
        je public_6f8aea6
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x6C]
        jne public_6f8ae90
        jmp public_6f8aeab
        public_6f8aea6 : nop
        mov ebx, 1
        public_6f8aeab : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+0x18]
        mov ebp, eax
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [esi+0x7C]
        mov edx, dword ptr ds : [esi+0x6C]
        mov eax, ecx
        sub eax, edi
        mov edi, dword ptr ds : [edx]
        sar eax, 2
        add eax, ebx
        test eax, eax
        jle public_6f8aee5
        nop 
        public_6f8aee0 : nop
        dec eax
        mov edi, dword ptr ds : [edi]
        jne public_6f8aee0
        public_6f8aee5 : nop
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        lea ecx, ds:[esi+0x78]
        call public_6f937c0
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f8af0a
        mov ebx, eax
        public_6f8af0a : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f8af1e
        mov dword ptr ds : [eax], ebp
        public_6f8af1e : nop
        inc dword ptr ds : [esi+0x70]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x74], 1
        call dword ptr ds : [edx+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f8ae70)
    }
}

#undef public_6f8ae90
#undef public_6f8aea6
#undef public_6f8aeab
#undef public_6f8aee0
#undef public_6f8aee5
#undef public_6f8af0a
#undef public_6f8af1e
