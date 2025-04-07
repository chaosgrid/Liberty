#include "Content-PCH.h"


#define public_6ec2783 _public_6ec2783
#define public_6ec279f _public_6ec279f

PROC_DECLARE(0x6ec2750, internal_6ec2750, public_6ec2750);
extern "C" NAKED register_t __cdecl internal_6ec2750()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3040]
        push 1
        mov ecx, esi
        mov byte ptr ss : [ebp+0x40], al
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec2783
        pop esi
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        pop ebp
        pop ebx
        ret 4
        public_6ec2783 : nop
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
        jb public_6ec279f
        mov eax, 0x2F
        public_6ec279f : nop
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
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec2750)
    }
}

#undef public_6ec2783
#undef public_6ec279f
