#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d504f0);

#define public_6d50517 _public_6d50517
#define public_6d50545 _public_6d50545
#define public_6d5055a _public_6d5055a
#define public_6d50566 _public_6d50566
#define public_6d50570 _public_6d50570
#define public_6d50579 _public_6d50579

PROC_DECLARE(0x6d504f0, internal_6d504f0, public_6d504f0);
extern "C" NAKED register_t __cdecl internal_6d504f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea ebp, ds:[ecx+0x380]
        or ecx, 0xFFFFFFFF
        push edi
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_6d50517
        call dword ptr ds : [public_6d64b4c]
        public_6d50517 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_6d50545
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d50545
        cmp cl, 0xFF
        je public_6d50545
        cmp ebx, edx
        jne public_6d50570
        pop edi
        dec cl
        mov byte ptr ds : [eax-1], cl
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        pop ebp
        pop ebx
        ret 4
        public_6d50545 : nop
        cmp ebx, edx
        jne public_6d5055a
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6d64b74]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6d5055a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6d50566
        cmp eax, ebx
        jae public_6d50579
        public_6d50566 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_6d64b74]
        public_6d50570 : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_6d64b30]
        public_6d50579 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+ecx], 0
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d504f0)
    }
}

#undef public_6d50517
#undef public_6d50545
#undef public_6d5055a
#undef public_6d50566
#undef public_6d50570
#undef public_6d50579
