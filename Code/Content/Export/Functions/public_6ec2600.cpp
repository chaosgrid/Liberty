#include "Content-PCH.h"


#define public_6ec262a _public_6ec262a
#define public_6ec2642 _public_6ec2642
#define public_6ec265e _public_6ec265e
#define public_6ec267f _public_6ec267f
#define public_6ec269a _public_6ec269a

PROC_DECLARE(0x6ec2600, internal_6ec2600, public_6ec2600);
extern "C" NAKED register_t __cdecl internal_6ec2600()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x58]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        mov byte ptr ss : [esp+0x14], bl
        jne public_6ec262a
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        jmp public_6ec265e
        public_6ec262a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_6ec2642
        mov eax, 0x3F
        public_6ec2642 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], bl
        mov dword ptr ss : [esp+0x10], eax
        public_6ec265e : nop
        mov edi, offset public_6fb5984
        lea esi, ss:[esp+0x14]
        mov ecx, 4
        xor eax, eax
        repe cmpsb
        jne public_6ec267f
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], ebx
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        public_6ec267f : nop
        mov edi, offset public_6fb5980
        lea esi, ss:[esp+0x14]
        mov ecx, 3
        xor edx, edx
        repe cmpsb
        jne public_6ec269a
        mov dword ptr ss : [ebp+0xC], 1
        public_6ec269a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x6ec2600)
    }
}

#undef public_6ec262a
#undef public_6ec2642
#undef public_6ec265e
#undef public_6ec267f
#undef public_6ec269a
