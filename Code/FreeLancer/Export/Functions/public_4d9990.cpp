#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c72b0);
CLANG_FORWARD_PROC_SYMBOL(public_4d9990);

#define public_4d99b2 _public_4d99b2
#define public_4d99cf _public_4d99cf
#define public_4d99e7 _public_4d99e7

PROC_DECLARE(0x4d9990, internal_4d9990, public_4d9990);
extern "C" NAKED register_t __cdecl internal_4d9990()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        xor eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, eax
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [ebx+0xC], al
        mov dword ptr ds : [ebx], offset public_5d6e30
        mov dword ptr ds : [ebx+4], eax
        jne public_4d99b2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_4d99e7
        public_4d99b2 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea ebp, ds:[ebx+0xC]
        jb public_4d99cf
        mov eax, 0x1F
        public_4d99cf : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        public_4d99e7 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_4c72b0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d8470
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4d9990)
    }
}

#undef public_4d99b2
#undef public_4d99cf
#undef public_4d99e7
