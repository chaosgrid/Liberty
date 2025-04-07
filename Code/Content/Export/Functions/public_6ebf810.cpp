#include "Content-PCH.h"


#define public_6ebf855 _public_6ebf855
#define public_6ebf870 _public_6ebf870
#define public_6ebf88e _public_6ebf88e
#define public_6ebf8ab _public_6ebf8ab
#define public_6ebf8c6 _public_6ebf8c6
#define public_6ebf8df _public_6ebf8df

PROC_DECLARE(0x6ebf810, internal_6ebf810, public_6ebf810);
extern "C" NAKED register_t __cdecl internal_6ebf810()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6fb306c]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        push 0
        mov ecx, edi
        call esi
        test al, al
        jne public_6ebf8df
        push 1
        mov ecx, edi
        call esi
        test al, al
        jne public_6ebf8df
        xor ebx, ebx
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ebf855
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ebf88e
        public_6ebf855 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ebf870
        mov eax, 0x2F
        public_6ebf870 : nop
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
        mov dword ptr ss : [ebp+0xC], eax
        public_6ebf88e : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ebf8ab
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        pop ebp
        pop ebx
        ret 4
        public_6ebf8ab : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ebf8c6
        mov eax, 0x2F
        public_6ebf8c6 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x40], eax
        public_6ebf8df : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ebf810)
    }
}

#undef public_6ebf855
#undef public_6ebf870
#undef public_6ebf88e
#undef public_6ebf8ab
#undef public_6ebf8c6
#undef public_6ebf8df
