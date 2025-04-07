#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6356920);

#define public_6356957 _public_6356957

PROC_DECLARE(0x6356920, internal_6356920, public_6356920);
extern "C" NAKED register_t __cdecl internal_6356920()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        je public_6356957
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        inc edi
        push edi
        call public_6343f70
        mov ecx, edi
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        ret 
        public_6356957 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6356920)
    }
}

#undef public_6356957
