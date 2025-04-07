#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef66e0);

#define public_6ef6720 _public_6ef6720

PROC_DECLARE(0x6ef66e0, internal_6ef66e0, public_6ef66e0);
extern "C" NAKED register_t __cdecl internal_6ef66e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_6fb3350]
        mov ebx, dword ptr ss : [esp+0x2C]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0xC
        lea edi, ss:[esp+0x10]
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0xA
        lea edx, ds:[ebx+4]
        jb public_6ef6720
        mov eax, 9
        public_6ef6720 : nop
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
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef66e0)
    }
}

#undef public_6ef6720
