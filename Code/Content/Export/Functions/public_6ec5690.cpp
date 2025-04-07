#include "Content-PCH.h"


#define public_6ec56b0 _public_6ec56b0
#define public_6ec56cc _public_6ec56cc
#define public_6ec56e6 _public_6ec56e6

PROC_DECLARE(0x6ec5690, internal_6ec5690, public_6ec5690);
extern "C" NAKED register_t __cdecl internal_6ec5690()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec56b0
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec56e6
        public_6ec56b0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec56cc
        mov eax, 0x2F
        public_6ec56cc : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        pop edi
        public_6ec56e6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        call dword ptr ds : [public_6fb3040]
        pop esi
        mov byte ptr ss : [ebp+0x40], al
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec5690)
    }
}

#undef public_6ec56b0
#undef public_6ec56cc
#undef public_6ec56e6
