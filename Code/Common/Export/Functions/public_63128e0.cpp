#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);

#define public_631291e _public_631291e

PROC_DECLARE(0x63128e0, internal_63128e0, public_63128e0);
extern "C" NAKED register_t __cdecl internal_63128e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        cmp edx, dword ptr ds : [eax+0xC]
        jg public_631291e
        test edx, edx
        jl public_631291e
        je public_631291e
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        add esi, edx
        pop edi
        mov dword ptr ds : [eax+8], esi
        sub ecx, edx
        pop esi
        mov dword ptr ds : [eax+0xC], ecx
        pop ebx
        public_631291e : nop
        ret 8
        UNREACHABLE_TRAP(0x63128e0)
    }
}

#undef public_631291e
