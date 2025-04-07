#include "Content-PCH.h"


#define public_6ec2ab3 _public_6ec2ab3
#define public_6ec2ace _public_6ec2ace
#define public_6ec2aec _public_6ec2aec
#define public_6ec2b24 _public_6ec2b24
#define public_6ec2b3f _public_6ec2b3f
#define public_6ec2b58 _public_6ec2b58

PROC_DECLARE(0x6ec2a90, internal_6ec2a90, public_6ec2a90);
extern "C" NAKED register_t __cdecl internal_6ec2a90()
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
        jne public_6ec2ab3
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec2aec
        public_6ec2ab3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x10]
        jb public_6ec2ace
        mov eax, 0x2F
        public_6ec2ace : nop
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
        public_6ec2aec : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [ebp+0x74]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec2b58
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec2b24
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], bl
        pop ebp
        pop ebx
        ret 4
        public_6ec2b24 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x44]
        jb public_6ec2b3f
        mov eax, 0x2F
        public_6ec2b3f : nop
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
        public_6ec2b58 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec2a90)
    }
}

#undef public_6ec2ab3
#undef public_6ec2ace
#undef public_6ec2aec
#undef public_6ec2b24
#undef public_6ec2b3f
#undef public_6ec2b58
