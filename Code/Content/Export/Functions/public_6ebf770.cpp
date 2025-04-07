#include "Content-PCH.h"


#define public_6ebf79e _public_6ebf79e
#define public_6ebf7b6 _public_6ebf7b6
#define public_6ebf7d2 _public_6ebf7d2
#define public_6ebf7f8 _public_6ebf7f8

PROC_DECLARE(0x6ebf770, internal_6ebf770, public_6ebf770);
extern "C" NAKED register_t __cdecl internal_6ebf770()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x38]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jne public_6ebf79e
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jmp public_6ebf7d2
        public_6ebf79e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_6ebf7b6
        mov eax, 0x1F
        public_6ebf7b6 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], bl
        mov dword ptr ss : [esp+0x10], eax
        public_6ebf7d2 : nop
        mov edi, offset public_6fb579c
        lea esi, ss:[esp+0x14]
        mov ecx, 4
        xor eax, eax
        repe cmpsb
        je public_6ebf7f8
        lea ecx, ss:[esp+0x14]
        push ecx
        add ebp, 0xC
        push ebp
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        public_6ebf7f8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6ebf770)
    }
}

#undef public_6ebf79e
#undef public_6ebf7b6
#undef public_6ebf7d2
#undef public_6ebf7f8
