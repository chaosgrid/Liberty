#include "Content-PCH.h"


#define public_6ec0381 _public_6ec0381
#define public_6ec039c _public_6ec039c
#define public_6ec03b6 _public_6ec03b6
#define public_6ec03d5 _public_6ec03d5
#define public_6ec03f0 _public_6ec03f0

PROC_DECLARE(0x6ec0360, internal_6ec0360, public_6ec0360);
extern "C" NAKED register_t __cdecl internal_6ec0360()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec0381
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec03b6
        public_6ec0381 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec039c
        mov eax, 0x2F
        public_6ec039c : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ebx, ebx
        mov byte ptr ds : [eax+edx], bl
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec03b6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 1
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec03d5
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        pop ebp
        pop ebx
        ret 4
        public_6ec03d5 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec03f0
        mov eax, 0x2F
        public_6ec03f0 : nop
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
        mov dword ptr ss : [ebp+0x40], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec0360)
    }
}

#undef public_6ec0381
#undef public_6ec039c
#undef public_6ec03b6
#undef public_6ec03d5
#undef public_6ec03f0
