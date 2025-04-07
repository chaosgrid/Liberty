#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce38a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4520);
CLANG_FORWARD_PROC_SYMBOL(public_6ce54f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce38b9 _public_6ce38b9
#define public_6ce38ca _public_6ce38ca
#define public_6ce38e4 _public_6ce38e4
#define public_6ce38fb _public_6ce38fb
#define public_6ce3933 _public_6ce3933
#define public_6ce3945 _public_6ce3945
#define public_6ce3988 _public_6ce3988
#define public_6ce399e _public_6ce399e
#define public_6ce39be _public_6ce39be
#define public_6ce39cc _public_6ce39cc
#define public_6ce39e1 _public_6ce39e1
#define public_6ce3a01 _public_6ce3a01
#define public_6ce3a12 _public_6ce3a12
#define public_6ce3a3f _public_6ce3a3f
#define public_6ce3a55 _public_6ce3a55
#define public_6ce3a61 _public_6ce3a61
#define public_6ce3a6a _public_6ce3a6a
#define public_6ce3a72 _public_6ce3a72
#define public_6ce3a7e _public_6ce3a7e
#define public_6ce3a90 _public_6ce3a90
#define public_6ce3a9f _public_6ce3a9f
#define public_6ce3aab _public_6ce3aab

PROC_DECLARE(0x6ce38a0, internal_6ce38a0, public_6ce38a0);
extern "C" NAKED register_t __cdecl internal_6ce38a0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [ebp+8], ebx
        push esi
        push edi
        mov esi, ecx
        jae public_6ce38b9
        call dword ptr ds : [public_6d64b04]
        public_6ce38b9 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, eax
        sub edi, ebx
        cmp ecx, edi
        jae public_6ce38ca
        mov edi, ecx
        public_6ce38ca : nop
        cmp esi, ebp
        jne public_6ce3988
        mov eax, dword ptr ds : [esi+8]
        add edi, ebx
        or ebp, 0xFFFFFFFF
        cmp eax, edi
        jae public_6ce38e4
        call dword ptr ds : [public_6d64b04]
        public_6ce38e4 : nop
        mov ecx, esi
        call public_6ce5620
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, 0xFFFFFFFF
        jae public_6ce38fb
        mov ebp, eax
        test ebp, ebp
        jbe public_6ce3933
        public_6ce38fb : nop
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea eax, ds:[edi+ebp]
        lea edx, ds:[ecx+eax*2]
        push edx
        lea eax, ds:[ecx+edi*2]
        push eax
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce3933
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [ecx+edi*2], 0
        public_6ce3933 : nop
        mov ecx, esi
        mov ebp, ebx
        call public_6ce5620
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        jae public_6ce3945
        mov ebp, eax
        public_6ce3945 : nop
        test ebp, ebp
        jbe public_6ce3aab
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp*2]
        push edx
        push ecx
        call public_6ce3ac0
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call public_6ce4520
        test al, al
        je public_6ce3aab
        push edi
        mov ecx, esi
        call public_6ce4500
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ce3988 : nop
        xor edx, edx
        cmp edi, edx
        jbe public_6ce3a01
        cmp edi, eax
        jne public_6ce3a01
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        jne public_6ce399e
        mov eax, offset public_6d64efc
        public_6ce399e : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ce3a01
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        je public_6ce39cc
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce39be
        cmp cl, 0xFF
        je public_6ce39be
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6ce39cc
        public_6ce39be : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        xor edx, edx
        public_6ce39cc : nop
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edx
        jne public_6ce39e1
        mov eax, offset public_6d64efc
        public_6ce39e1 : nop
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ce3a01 : nop
        mov ecx, esi
        call public_6ce54f0
        cmp eax, edi
        jae public_6ce3a12
        call dword ptr ds : [public_6d64b4c]
        public_6ce3a12 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ce3a3f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce3a3f
        cmp cl, 0xFF
        je public_6ce3a3f
        test edi, edi
        jne public_6ce3a6a
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, esi
        call public_6ce3b20
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ce3a3f : nop
        test edi, edi
        jne public_6ce3a55
        push 1
        mov ecx, esi
        call public_6ce3b20
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ce3a55 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_6ce3a61
        cmp eax, edi
        jae public_6ce3a72
        public_6ce3a61 : nop
        push 1
        mov ecx, esi
        call public_6ce3b20
        public_6ce3a6a : nop
        mov ecx, esi
        push edi
        call public_6ce5500
        public_6ce3a72 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6ce3a7e
        mov eax, offset public_6d64efc
        public_6ce3a7e : nop
        test edi, edi
        lea ecx, ds:[eax+ebx*2]
        mov eax, dword ptr ds : [esi+4]
        jbe public_6ce3a9f
        mov edx, edi
        lea ebx, ds:[ebx]
        public_6ce3a90 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6ce3a90
        public_6ce3a9f : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        public_6ce3aab : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ce38a0)
    }
}

#undef public_6ce38b9
#undef public_6ce38ca
#undef public_6ce38e4
#undef public_6ce38fb
#undef public_6ce3933
#undef public_6ce3945
#undef public_6ce3988
#undef public_6ce399e
#undef public_6ce39be
#undef public_6ce39cc
#undef public_6ce39e1
#undef public_6ce3a01
#undef public_6ce3a12
#undef public_6ce3a3f
#undef public_6ce3a55
#undef public_6ce3a61
#undef public_6ce3a6a
#undef public_6ce3a72
#undef public_6ce3a7e
#undef public_6ce3a90
#undef public_6ce3a9f
#undef public_6ce3aab
