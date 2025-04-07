#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);

#define public_6eec2f0 _public_6eec2f0

PROC_DECLARE(0x6eec2b0, internal_6eec2b0, public_6eec2b0);
extern "C" NAKED register_t __cdecl internal_6eec2b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x5C]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_6fb3350]
        mov ebx, dword ptr ss : [esp+0x60]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0xC
        lea edi, ss:[esp+0x10]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ds:[ebx+4]
        jb public_6eec2f0
        mov eax, 0x3F
        public_6eec2f0 : nop
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
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6eec2b0)
    }
}

#undef public_6eec2f0
