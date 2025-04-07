#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6ac0);

#define public_4f6b00 _public_4f6b00

PROC_DECLARE(0x4f6ac0, internal_4f6ac0, public_4f6ac0);
extern "C" NAKED register_t __cdecl internal_4f6ac0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_5c70a8]
        mov ebx, dword ptr ss : [esp+0x40]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0xC
        lea edi, ss:[esp+0x10]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ds:[ebx+4]
        jb public_4f6b00
        mov eax, 0x1F
        public_4f6b00 : nop
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
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x4f6ac0)
    }
}

#undef public_4f6b00
