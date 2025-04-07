#include "Content-PCH.h"


#define public_6ebfa44 _public_6ebfa44
#define public_6ebfa5f _public_6ebfa5f
#define public_6ebfa82 _public_6ebfa82

PROC_DECLARE(0x6ebfa20, internal_6ebfa20, public_6ebfa20);
extern "C" NAKED register_t __cdecl internal_6ebfa20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        push 0
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_6ebfa44
        mov dword ptr ss : [ebp+0x10], eax
        mov byte ptr ss : [ebp+0x14], al
        jmp public_6ebfa82
        public_6ebfa44 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x14]
        jb public_6ebfa5f
        mov eax, 0x1F
        public_6ebfa5f : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        mov ebx, dword ptr ds : [public_6fb3048]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x10], eax
        public_6ebfa82 : nop
        push 2
        mov ecx, edi
        lea esi, ss:[ebp+0x34]
        call ebx
        push eax
        push esi
        call dword ptr ds : [public_6fb36a8]
        add esp, 8
        push 1
        mov ecx, edi
        call ebx
        push eax
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6fb35f0]
        add esp, 8
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ebfa20)
    }
}

#undef public_6ebfa44
#undef public_6ebfa5f
#undef public_6ebfa82
