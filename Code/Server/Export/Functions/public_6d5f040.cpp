#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5f040);

#define public_6d5f08b _public_6d5f08b

PROC_DECLARE(0x6d5f040, internal_6d5f040, public_6d5f040);
extern "C" NAKED register_t __cdecl internal_6d5f040()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x100
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x11C]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_6d64c30]
        mov ebx, dword ptr ss : [esp+0x120]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0xC
        lea edi, ss:[esp+0x10]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x100
        lea edx, ds:[ebx+4]
        jb public_6d5f08b
        mov eax, 0xFF
        public_6d5f08b : nop
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x10]
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov byte ptr ds : [eax+edx], 0
        pop ebp
        mov dword ptr ds : [ebx], eax
        pop ebx
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x6d5f040)
    }
}

#undef public_6d5f08b
