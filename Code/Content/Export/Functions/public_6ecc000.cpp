#include "Content-PCH.h"


#define public_6ecc03d _public_6ecc03d
#define public_6ecc058 _public_6ecc058

PROC_DECLARE(0x6ecc000, internal_6ecc000, public_6ecc000);
extern "C" NAKED register_t __cdecl internal_6ecc000()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call edi
        mov esi, eax
        cmp esi, ebx
        jne public_6ecc03d
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x10], ebx
        mov byte ptr ss : [ebp+0x14], bl
        pop ebp
        pop ebx
        ret 4
        public_6ecc03d : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x14]
        jb public_6ecc058
        mov eax, 0x2F
        public_6ecc058 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ecc000)
    }
}

#undef public_6ecc03d
#undef public_6ecc058
