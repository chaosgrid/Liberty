#include "Content-PCH.h"


#define public_6ec2e43 _public_6ec2e43
#define public_6ec2e5e _public_6ec2e5e
#define public_6ec2e7c _public_6ec2e7c
#define public_6ec2ea2 _public_6ec2ea2
#define public_6ec2ebd _public_6ec2ebd
#define public_6ec2ed6 _public_6ec2ed6
#define public_6ec2ee6 _public_6ec2ee6

PROC_DECLARE(0x6ec2e20, internal_6ec2e20, public_6ec2e20);
extern "C" NAKED register_t __cdecl internal_6ec2e20()
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
        jne public_6ec2e43
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        jmp public_6ec2e7c
        public_6ec2e43 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec2e5e
        mov eax, 0x2F
        public_6ec2e5e : nop
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
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec2e7c : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec2ee6
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec2ea2
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec2ed6
        public_6ec2ea2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec2ebd
        mov eax, 0x2F
        public_6ec2ebd : nop
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
        public_6ec2ed6 : nop
        lea eax, ss:[ebp+0x10]
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        mov dword ptr ss : [ebp+0x74], eax
        public_6ec2ee6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec2e20)
    }
}

#undef public_6ec2e43
#undef public_6ec2e5e
#undef public_6ec2e7c
#undef public_6ec2ea2
#undef public_6ec2ebd
#undef public_6ec2ed6
#undef public_6ec2ee6
