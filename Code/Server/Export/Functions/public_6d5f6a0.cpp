#include "Server-PCH.h"


#define public_6d5f6c3 _public_6d5f6c3
#define public_6d5f6dc _public_6d5f6dc
#define public_6d5f6f9 _public_6d5f6f9
#define public_6d5f71d _public_6d5f71d

PROC_DECLARE(0x6d5f6a0, internal_6d5f6a0, public_6d5f6a0);
extern "C" NAKED register_t __cdecl internal_6d5f6a0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        xor ebx, ebx
        cmp esi, ebx
        mov ebp, 0xFFFFFFFE
        mov byte ptr ss : [esp+0x10], bl
        jne public_6d5f6c3
        mov dword ptr ss : [esp+0xC], ebx
        mov byte ptr ss : [esp+0x10], bl
        jmp public_6d5f6f9
        public_6d5f6c3 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x10
        jb public_6d5f6dc
        mov eax, 0xF
        public_6d5f6dc : nop
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
        pop edi
        public_6d5f6f9 : nop
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_6d648b8]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        je public_6d5f71d
        mov edx, dword ptr ss : [esp+0x24]
        pop esi
        xor ecx, ecx
        pop ebp
        mov dword ptr ds : [edx], eax
        mov eax, ecx
        pop ebx
        add esp, 0x14
        ret 
        public_6d5f71d : nop
        mov eax, dword ptr ss : [esp+0x24]
        pop esi
        mov dword ptr ds : [eax], 0xFFFFFFFF
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d5f6a0)
    }
}

#undef public_6d5f6c3
#undef public_6d5f6dc
#undef public_6d5f6f9
#undef public_6d5f71d
