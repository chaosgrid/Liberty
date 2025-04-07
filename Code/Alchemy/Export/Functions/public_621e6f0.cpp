#include "Alchemy-PCH.h"


#define public_621e718 _public_621e718
#define public_621e748 _public_621e748
#define public_621e75f _public_621e75f
#define public_621e76b _public_621e76b
#define public_621e775 _public_621e775
#define public_621e77e _public_621e77e

PROC_DECLARE(0x621e6f0, internal_621e6f0, public_621e6f0);
extern "C" NAKED register_t __cdecl internal_621e6f0()
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
        jbe public_621e718
        call dword ptr ds : [public_624b024]
        public_621e718 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_621e748
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_621e748
        cmp cl, 0xFF
        je public_621e748
        cmp ebx, edx
        jne public_621e775
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
        public_621e748 : nop
        cmp ebx, edx
        jne public_621e75f
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_624b01c]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_621e75f : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_621e76b
        cmp eax, ebx
        jae public_621e77e
        public_621e76b : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_624b01c]
        public_621e775 : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_624b020]
        public_621e77e : nop
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
        UNREACHABLE_TRAP(0x621e6f0)
    }
}

#undef public_621e718
#undef public_621e748
#undef public_621e75f
#undef public_621e76b
#undef public_621e775
#undef public_621e77e
