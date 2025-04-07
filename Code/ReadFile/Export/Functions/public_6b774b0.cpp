#include "ReadFile-PCH.h"


#define public_6b7752a _public_6b7752a
#define public_6b7753a _public_6b7753a
#define public_6b77545 _public_6b77545

PROC_DECLARE(0x6b774b0, internal_6b774b0, public_6b774b0);
extern "C" NAKED register_t __cdecl internal_6b774b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        xor eax, eax
        push ebp
        test dword ptr ds : [ebx+0x18], 0x40000000
        je public_6b77545
        mov ebp, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0xC]
        cmp ebp, ecx
        jbe public_6b7753a
        test byte ptr ds : [ebx+0x14], 2
        jne public_6b77545
        add ebp, 0xFFFF
        push 4
        and ebp, 0xFFFFF000
        push 0x1000
        push ebp
        push eax
        call dword ptr ds : [public_6b79060]
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6b7753a
        push esi
        mov esi, dword ptr ds : [ebx+8]
        test esi, esi
        je public_6b7752a
        mov ecx, dword ptr ds : [ebx+0xC]
        push edi
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        push 0x8000
        and ecx, 3
        push 0
        rep movsb
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        call dword ptr ds : [public_6b7905c]
        pop edi
        mov eax, dword ptr ss : [esp+0x10]
        public_6b7752a : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [ebx+8], eax
        or ecx, 4
        mov dword ptr ds : [ebx+0xC], ebp
        mov dword ptr ds : [ebx+0x14], ecx
        pop esi
        public_6b7753a : nop
        mov edx, dword ptr ds : [ebx+0x10]
        mov eax, 1
        mov dword ptr ds : [ebx+0x1C], edx
        public_6b77545 : nop
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6b774b0)
    }
}

#undef public_6b7752a
#undef public_6b7753a
#undef public_6b77545
