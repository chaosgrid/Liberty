#include "Content-PCH.h"


#define public_6ec6070 _public_6ec6070
#define public_6ec608c _public_6ec608c
#define public_6ec60a6 _public_6ec60a6

PROC_DECLARE(0x6ec6050, internal_6ec6050, public_6ec6050);
extern "C" NAKED register_t __cdecl internal_6ec6050()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        cmp esi, ebx
        jne public_6ec6070
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec60a6
        public_6ec6070 : nop
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
        jb public_6ec608c
        mov eax, 0x2F
        public_6ec608c : nop
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
        pop edi
        public_6ec60a6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        call dword ptr ds : [public_6fb3020]
        pop esi
        mov dword ptr ss : [ebp+0x40], eax
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ec6050)
    }
}

#undef public_6ec6070
#undef public_6ec608c
#undef public_6ec60a6
