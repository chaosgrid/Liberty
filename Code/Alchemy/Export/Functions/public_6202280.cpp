#include "Alchemy-PCH.h"


#define public_620229a _public_620229a
#define public_62022a7 _public_62022a7

PROC_DECLARE(0x6202280, internal_6202280, public_6202280);
extern "C" NAKED register_t __cdecl internal_6202280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_62022a7
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+1]
        public_620229a : nop
        mov ecx, esi
        call ebx
        add esi, ebp
        dec edi
        jne public_620229a
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_62022a7 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6202280)
    }
}

#undef public_620229a
#undef public_62022a7
