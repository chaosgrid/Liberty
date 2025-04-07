#include "Content-PCH.h"


#define public_6ec2457 _public_6ec2457
#define public_6ec2472 _public_6ec2472
#define public_6ec248d _public_6ec248d

PROC_DECLARE(0x6ec2400, internal_6ec2400, public_6ec2400);
extern "C" NAKED register_t __cdecl internal_6ec2400()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        push 0
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        push 1
        mov ecx, esi
        mov dword ptr ss : [ebp+0xC], eax
        call dword ptr ds : [public_6fb3020]
        push 2
        mov ecx, esi
        mov dword ptr ss : [ebp+0x44], eax
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec248d
        push 2
        mov ecx, esi
        call edi
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_6ec2457
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x14], al
        mov dword ptr ss : [ebp+0x10], eax
        pop ebp
        ret 4
        public_6ec2457 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea edx, ss:[ebp+0x14]
        jb public_6ec2472
        mov eax, 0x2F
        public_6ec2472 : nop
        push ebx
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        pop ebx
        mov dword ptr ss : [ebp+0x10], eax
        public_6ec248d : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ec2400)
    }
}

#undef public_6ec2457
#undef public_6ec2472
#undef public_6ec248d
