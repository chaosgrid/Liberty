#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62728a0);
CLANG_FORWARD_PROC_SYMBOL(public_628b0a0);
CLANG_FORWARD_PROC_SYMBOL(public_628b440);
CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_628eed0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6332675 _public_6332675
#define public_633268a _public_633268a
#define public_6332730 _public_6332730
#define public_633276e _public_633276e
#define public_6332770 _public_6332770
#define public_6332776 _public_6332776
#define public_63327a0 _public_63327a0
#define public_63327ba _public_63327ba
#define public_63327d6 _public_63327d6

PROC_DECLARE(0x6332660, internal_6332660, public_6332660);
extern "C" NAKED register_t __cdecl internal_6332660()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        lea esi, ss:[ebp+4]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_633268a
        public_6332675 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6271cc0
        cmp edi, ebx
        jne public_6332675
        public_633268a : nop
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        push eax
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov dword ptr ss : [esp+0x60], 0x3F800000
        mov dword ptr ss : [esp+0x50], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov byte ptr ss : [esp+0x2A], bl
        mov dword ptr ss : [esp+0x64], ebp
        call public_628b0a0
        mov eax, dword ptr ss : [esp+0x1C]
        push 1
        push eax
        call public_628b540
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call public_628b440
        mov ebp, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [ebp]
        add esp, 0x18
        cmp edi, ebp
        je public_6332776
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        je public_6332776
        lea esp, ss:[esp]
        public_6332730 : nop
        mov edx, dword ptr ds : [edi+8]
        cmp edx, dword ptr ds : [eax+8]
        jne public_633276e
        mov dword ptr ss : [esp+0x60], eax
        push ebx
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        jmp public_6332770
        public_633276e : nop
        mov edi, eax
        public_6332770 : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, ebp
        jne public_6332730
        public_6332776 : nop
        mov ebp, dword ptr ss : [esp+0x6C]
        cmp ebp, esi
        je public_63327d6
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x60]
        push eax
        mov ecx, esi
        call public_632c410
        cmp edi, ebx
        mov esi, dword ptr ds : [esi+4]
        je public_63327ba
        mov eax, dword ptr ss : [esp+0x60]
        lea ebx, ds:[ebx]
        public_63327a0 : nop
        cmp eax, esi
        je public_63327ba
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ss : [esp+0x60]
        mov edi, dword ptr ds : [edi]
        cmp edi, ebx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x60], eax
        jne public_63327a0
        public_63327ba : nop
        push ebx
        push edi
        lea eax, ss:[esp+0x6C]
        push eax
        mov ecx, ebp
        call public_62728a0
        mov ecx, dword ptr ss : [esp+0x60]
        push esi
        push ecx
        push ebx
        mov ecx, ebp
        call public_628eed0
        public_63327d6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 0x10
        UNREACHABLE_TRAP(0x6332660)
    }
}

#undef public_6332675
#undef public_633268a
#undef public_6332730
#undef public_633276e
#undef public_6332770
#undef public_6332776
#undef public_63327a0
#undef public_63327ba
#undef public_63327d6
