#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);

#define public_65d48c7 _public_65d48c7
#define public_65d48f7 _public_65d48f7
#define public_65d490d _public_65d490d
#define public_65d4919 _public_65d4919
#define public_65d4922 _public_65d4922
#define public_65d492a _public_65d492a

PROC_DECLARE(0x65d48a0, internal_65d48a0, public_65d48a0);
extern "C" NAKED register_t __cdecl internal_65d48a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        lea ebp, ds:[eax+4]
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_65d48c7
        call public_65d6cc3
        public_65d48c7 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_65d48f7
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d48f7
        cmp cl, 0xFF
        je public_65d48f7
        cmp ebx, edx
        jne public_65d4922
        dec cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_65d48f7 : nop
        cmp ebx, edx
        jne public_65d490d
        push 1
        mov ecx, ebp
        call public_65d3b40
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_65d490d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_65d4919
        cmp eax, ebx
        jae public_65d492a
        public_65d4919 : nop
        push 1
        mov ecx, ebp
        call public_65d3b40
        public_65d4922 : nop
        mov ecx, ebp
        push ebx
        call public_65d4350
        public_65d492a : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        mov byte ptr ds : [ebx+eax], 0
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d48a0)
    }
}

#undef public_65d48c7
#undef public_65d48f7
#undef public_65d490d
#undef public_65d4919
#undef public_65d4922
#undef public_65d492a
