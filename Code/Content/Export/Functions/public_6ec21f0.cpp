#include "Content-PCH.h"


#define public_6ec2213 _public_6ec2213
#define public_6ec222e _public_6ec222e
#define public_6ec224c _public_6ec224c
#define public_6ec2284 _public_6ec2284
#define public_6ec229f _public_6ec229f
#define public_6ec22b8 _public_6ec22b8

PROC_DECLARE(0x6ec21f0, internal_6ec21f0, public_6ec21f0);
extern "C" NAKED register_t __cdecl internal_6ec21f0()
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
        jne public_6ec2213
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec224c
        public_6ec2213 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec222e
        mov eax, 0x2F
        public_6ec222e : nop
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
        public_6ec224c : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3020]
        push 2
        mov ecx, edi
        mov dword ptr ss : [ebp+0x74], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec22b8
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec2284
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        pop ebp
        pop ebx
        ret 4
        public_6ec2284 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec229f
        mov eax, 0x2F
        public_6ec229f : nop
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
        public_6ec22b8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec21f0)
    }
}

#undef public_6ec2213
#undef public_6ec222e
#undef public_6ec224c
#undef public_6ec2284
#undef public_6ec229f
#undef public_6ec22b8
