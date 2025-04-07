#include "Common-PCH.h"


#define public_633b7de _public_633b7de

PROC_DECLARE(0x633b7b0, internal_633b7b0, public_633b7b0);
extern "C" NAKED register_t __cdecl internal_633b7b0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x58]
        test edx, edx
        je public_633b7de
        mov eax, dword ptr ds : [ecx+0x5C]
        sub eax, edx
        mov edx, dword ptr ss : [esp+4]
        sar eax, 5
        cmp edx, eax
        jae public_633b7de
        push esi
        mov esi, dword ptr ds : [ecx+0x58]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        shl edx, 5
        add esi, edx
        mov ecx, 8
        rep movsd
        pop edi
        pop esi
        public_633b7de : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x633b7b0)
    }
}

#undef public_633b7de
