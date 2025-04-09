#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ab400);

#define public_5ab427 _public_5ab427
#define public_5ab455 _public_5ab455
#define public_5ab46a _public_5ab46a
#define public_5ab476 _public_5ab476
#define public_5ab480 _public_5ab480
#define public_5ab489 _public_5ab489

PROC_DECLARE(0x5ab400, internal_5ab400, public_5ab400);
extern "C" NAKED register_t __cdecl internal_5ab400()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea ebp, ds:[ecx+0x220]
        or ecx, 0xFFFFFFFF
        push edi
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_5ab427
        call dword ptr ds : [public_5c7070]
        public_5ab427 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_5ab455
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_5ab455
        cmp cl, 0xFF
        je public_5ab455
        cmp ebx, edx
        jne public_5ab480
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
        public_5ab455 : nop
        cmp ebx, edx
        jne public_5ab46a
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_5ab46a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_5ab476
        cmp eax, ebx
        jae public_5ab489
        public_5ab476 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        public_5ab480 : nop
        mov ecx, ebp
        push ebx
        call dword ptr ds : [public_5c7074]
        public_5ab489 : nop
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
        UNREACHABLE_TRAP(0x5ab400)
    }
}

#undef public_5ab427
#undef public_5ab455
#undef public_5ab46a
#undef public_5ab476
#undef public_5ab480
#undef public_5ab489
