#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3540);

#define public_6ef355a _public_6ef355a
#define public_6ef3575 _public_6ef3575
#define public_6ef3592 _public_6ef3592
#define public_6ef35a1 _public_6ef35a1
#define public_6ef35bc _public_6ef35bc
#define public_6ef35d9 _public_6ef35d9

PROC_DECLARE(0x6ef3540, internal_6ef3540, public_6ef3540);
extern "C" NAKED register_t __cdecl internal_6ef3540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov edx, ecx
        lea esi, ds:[eax+4]
        xor ecx, ecx
        cmp esi, ecx
        push edi
        jne public_6ef355a
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
        jmp public_6ef3592
        public_6ef355a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[edx+4]
        jb public_6ef3575
        mov eax, 0x2F
        public_6ef3575 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+ebp], cl
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        public_6ef3592 : nop
        lea esi, ds:[eax+0x38]
        cmp esi, ecx
        jne public_6ef35a1
        mov dword ptr ds : [edx+0x34], ecx
        mov byte ptr ds : [edx+0x38], cl
        jmp public_6ef35d9
        public_6ef35a1 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[edx+0x38]
        jb public_6ef35bc
        mov eax, 0x2F
        public_6ef35bc : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [edx+0x34], eax
        mov eax, dword ptr ss : [esp+0x14]
        public_6ef35d9 : nop
        mov cl, byte ptr ds : [eax+0x68]
        mov byte ptr ds : [edx+0x68], cl
        mov cl, byte ptr ds : [eax+0x69]
        mov byte ptr ds : [edx+0x69], cl
        add eax, 0x6C
        mov esi, dword ptr ds : [eax]
        lea ecx, ds:[edx+0x6C]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [ecx+8], esi
        mov eax, dword ptr ds : [eax+0xC]
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef3540)
    }
}

#undef public_6ef355a
#undef public_6ef3575
#undef public_6ef3592
#undef public_6ef35a1
#undef public_6ef35bc
#undef public_6ef35d9
