#include "Common-PCH.h"


#define public_63286d7 _public_63286d7
#define public_63286df _public_63286df

PROC_DECLARE(0x63286c0, internal_63286c0, public_63286c0);
extern "C" NAKED register_t __cdecl internal_63286c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        mov ebx, dword ptr ds : [esi+0x1C]
        push edi
        jne public_63286d7
        lea edi, ds:[esi+0x24]
        jmp public_63286df
        public_63286d7 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [eax]
        add edi, 8
        public_63286df : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [edi]
        mov ebp, edx
        not ebp
        and ecx, ebp
        and edi, edx
        or ecx, edi
        and ecx, eax
        not eax
        and eax, ebx
        pop edi
        or ecx, eax
        mov dword ptr ds : [esi+0x1C], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x63286c0)
    }
}

#undef public_63286d7
#undef public_63286df
