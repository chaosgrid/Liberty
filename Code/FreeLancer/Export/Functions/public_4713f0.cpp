#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4713f0);
CLANG_FORWARD_PROC_SYMBOL(public_471660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_471459 _public_471459
#define public_47146d _public_47146d
#define public_471473 _public_471473
#define public_471481 _public_471481
#define public_4714c2 _public_4714c2
#define public_4714db _public_4714db
#define public_4714ee _public_4714ee
#define public_4714f9 _public_4714f9
#define public_4714fc _public_4714fc
#define public_471501 _public_471501
#define public_47152a _public_47152a
#define public_471543 _public_471543
#define public_471556 _public_471556
#define public_471560 _public_471560
#define public_471583 _public_471583
#define public_47159b _public_47159b
#define public_4715ae _public_4715ae
#define public_4715bb _public_4715bb
#define public_4715bd _public_4715bd
#define public_4715c3 _public_4715c3
#define public_4715ec _public_4715ec
#define public_4715ff _public_4715ff
#define public_47160a _public_47160a
#define public_47160d _public_47160d
#define public_47160f _public_47160f
#define public_471612 _public_471612
#define public_47161e _public_47161e

PROC_DECLARE(0x4713f0, internal_4713f0, public_4713f0);
extern "C" NAKED register_t __cdecl internal_4713f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x18], 0
        mov byte ptr ds : [ebx+0x19], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_471660
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_471459
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_471459
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_471459
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_471473
        mov dword ptr ds : [eax+8], ebx
        jmp public_471473
        public_471459 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_47146d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_471473
        public_47146d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_471473
        mov dword ptr ds : [eax], ebx
        public_471473 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_47161e
        public_471481 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_47161e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_471560
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x18], 0
        jne public_4714c2
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_471612
        public_4714c2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_471501
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4714db
        mov dword ptr ds : [edx+4], eax
        public_4714db : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4714ee
        mov dword ptr ds : [edx+4], ecx
        jmp public_4714fc
        public_4714ee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4714f9
        mov dword ptr ds : [edx], ecx
        jmp public_4714fc
        public_4714f9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4714fc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_471501 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_47152a
        mov dword ptr ds : [edi+4], ecx
        public_47152a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_471543
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_47160f
        public_471543 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_471556
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_47160f
        public_471556 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_47160f
        public_471560 : nop
        cmp byte ptr ds : [edx+0x18], 0
        jne public_471583
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_471612
        public_471583 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4715c3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_47159b
        mov dword ptr ds : [edx+4], eax
        public_47159b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4715ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_4715bd
        public_4715ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4715bb
        mov dword ptr ds : [edx+8], ecx
        jmp public_4715bd
        public_4715bb : nop
        mov dword ptr ds : [edx], ecx
        public_4715bd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4715c3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_4715ec
        mov dword ptr ds : [edi+4], ecx
        public_4715ec : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4715ff
        mov dword ptr ds : [edi+4], edx
        jmp public_47160d
        public_4715ff : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_47160a
        mov dword ptr ds : [edi], edx
        jmp public_47160d
        public_47160a : nop
        mov dword ptr ds : [edi+8], edx
        public_47160d : nop
        mov dword ptr ds : [edx], ecx
        public_47160f : nop
        mov dword ptr ds : [ecx+4], edx
        public_471612 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_471481
        public_47161e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4713f0)
    }
}

#undef public_471459
#undef public_47146d
#undef public_471473
#undef public_471481
#undef public_4714c2
#undef public_4714db
#undef public_4714ee
#undef public_4714f9
#undef public_4714fc
#undef public_471501
#undef public_47152a
#undef public_471543
#undef public_471556
#undef public_471560
#undef public_471583
#undef public_47159b
#undef public_4715ae
#undef public_4715bb
#undef public_4715bd
#undef public_4715c3
#undef public_4715ec
#undef public_4715ff
#undef public_47160a
#undef public_47160d
#undef public_47160f
#undef public_471612
#undef public_47161e
