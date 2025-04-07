#include "Content-PCH.h"


#define public_6ec5983 _public_6ec5983
#define public_6ec599e _public_6ec599e
#define public_6ec59bc _public_6ec59bc
#define public_6ec59d4 _public_6ec59d4
#define public_6ec59ef _public_6ec59ef
#define public_6ec5a0c _public_6ec5a0c
#define public_6ec5a2a _public_6ec5a2a

PROC_DECLARE(0x6ec5960, internal_6ec5960, public_6ec5960);
extern "C" NAKED register_t __cdecl internal_6ec5960()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec5983
        mov dword ptr ss : [ebp+0x50], ebx
        mov byte ptr ss : [ebp+0x54], bl
        jmp public_6ec59bc
        public_6ec5983 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x54]
        jb public_6ec599e
        mov eax, 0x2F
        public_6ec599e : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        xor ebx, ebx
        mov byte ptr ds : [eax+edx], bl
        mov dword ptr ss : [ebp+0x50], eax
        public_6ec59bc : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec59d4
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec5a0c
        public_6ec59d4 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ss:[ebp+0x10]
        jb public_6ec59ef
        mov eax, 0x3F
        public_6ec59ef : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec5a0c : nop
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec5a2a
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x84]
        public_6ec5a2a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec5960)
    }
}

#undef public_6ec5983
#undef public_6ec599e
#undef public_6ec59bc
#undef public_6ec59d4
#undef public_6ec59ef
#undef public_6ec5a0c
#undef public_6ec5a2a
