#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63274df _public_63274df

PROC_DECLARE(0x63274c0, internal_63274c0, public_63274c0);
extern "C" NAKED register_t __cdecl internal_63274c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_63274df
        mov ebx, eax
        public_63274df : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[esi+0x1C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_630cd00
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63274c0)
    }
}

#undef public_63274df
