#include "Server-PCH.h"


#define public_6d34625 _public_6d34625
#define public_6d3463e _public_6d3463e
#define public_6d34650 _public_6d34650
#define public_6d34664 _public_6d34664
#define public_6d34668 _public_6d34668
#define public_6d3466c _public_6d3466c
#define public_6d34671 _public_6d34671
#define public_6d3468e _public_6d3468e
#define public_6d3469d _public_6d3469d
#define public_6d346ab _public_6d346ab
#define public_6d346b4 _public_6d346b4

PROC_DECLARE(0x6d345d0, internal_6d345d0, public_6d345d0);
extern "C" NAKED register_t __cdecl internal_6d345d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        push edi
        xor edx, edx
        xor edi, edi
        test ecx, ecx
        mov eax, esi
        mov dword ptr ss : [esp+0x18], edx
        je public_6d3466c
        mov ebp, dword ptr ss : [ebp+0xC]
        cmp ebp, esi
        je public_6d34668
        cmp word ptr ds : [esi], 0xA
        je public_6d34668
        add esi, 2
        mov edi, esi
        sub edi, eax
        sar edi, 1
        neg edi
        jne public_6d34650
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d34625
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        ret 8
        public_6d34625 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3463e
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3463e
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_6d3463e : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 8
        lea ebx, ds:[ebx]
        public_6d34650 : nop
        inc edx
        cmp edx, ecx
        jae public_6d34664
        cmp ebp, esi
        je public_6d34664
        cmp word ptr ds : [esi], 0xA
        je public_6d34664
        add esi, 2
        jmp public_6d34650
        public_6d34664 : nop
        mov dword ptr ss : [esp+0x18], edx
        public_6d34668 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3466c : nop
        cmp dword ptr ds : [ebx+0xC], edx
        ja public_6d346b4
        public_6d34671 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_6d3469d
        mov eax, dword ptr ds : [ecx]
        push esi
        push ebp
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        jne public_6d346ab
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3468e : nop
        cmp dword ptr ds : [ebx+0xC], edx
        je public_6d346b4
        dec edx
        mov dword ptr ss : [esp+0x18], edx
        lea esi, ds:[esi+edi*2]
        jmp public_6d34671
        public_6d3469d : nop
        mov al, byte ptr ss : [ebp+0x1C]
        test al, al
        je public_6d346ab
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d346ab
        jmp public_6d3468e
        public_6d346ab : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_6d346b4 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d345d0)
    }
}

#undef public_6d34625
#undef public_6d3463e
#undef public_6d34650
#undef public_6d34664
#undef public_6d34668
#undef public_6d3466c
#undef public_6d34671
#undef public_6d3468e
#undef public_6d3469d
#undef public_6d346ab
#undef public_6d346b4
