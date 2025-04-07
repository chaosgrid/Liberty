#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f406e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57ee0);

#define public_6f4074b _public_6f4074b
#define public_6f40772 _public_6f40772
#define public_6f40782 _public_6f40782
#define public_6f4078e _public_6f4078e
#define public_6f40798 _public_6f40798
#define public_6f407a1 _public_6f407a1
#define public_6f407c4 _public_6f407c4
#define public_6f407d2 _public_6f407d2

PROC_DECLARE(0x6f406e0, internal_6f406e0, public_6f406e0);
extern "C" NAKED register_t __cdecl internal_6f406e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        xor eax, eax
        test esi, esi
        push edi
        lea ebx, ds:[ecx+0x18]
        je public_6f407d2
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        inc edi
        mov eax, edi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6f57ee0
        mov ecx, edi
        mov edx, ecx
        shr ecx, 2
        mov eax, esp
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        or ecx, 0xFFFFFFFF
        mov edi, eax
        mov dword ptr ss : [ebp+8], eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        mov ecx, ebx
        mov dword ptr ss : [ebp-4], esi
        call dword ptr ds : [public_6f5a050]
        cmp eax, esi
        jae public_6f4074b
        call dword ptr ds : [public_6f5a01c]
        public_6f4074b : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6f40772
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f40772
        cmp cl, 0xFF
        je public_6f40772
        test esi, esi
        jne public_6f40798
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f407c4
        public_6f40772 : nop
        test esi, esi
        jne public_6f40782
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        jmp public_6f407c4
        public_6f40782 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_6f4078e
        cmp eax, esi
        jae public_6f407a1
        public_6f4078e : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6f5a02c]
        public_6f40798 : nop
        mov ecx, ebx
        push esi
        call dword ptr ds : [public_6f5a018]
        public_6f407a1 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-4]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6f407c4 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov eax, dword ptr ds : [public_6f5a020]
        je public_6f407d2
        mov eax, ebx
        public_6f407d2 : nop
        lea esp, ss:[ebp-0x10]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f406e0)
    }
}

#undef public_6f4074b
#undef public_6f40772
#undef public_6f40782
#undef public_6f4078e
#undef public_6f40798
#undef public_6f407a1
#undef public_6f407c4
#undef public_6f407d2
