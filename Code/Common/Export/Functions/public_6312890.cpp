#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);

#define public_63128cf _public_63128cf

PROC_DECLARE(0x6312890, internal_6312890, public_6312890);
extern "C" NAKED register_t __cdecl internal_6312890()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        test edx, edx
        mov eax, ecx
        je public_63128cf
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [eax+8]
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+0x10]
        add edi, edx
        sub esi, edx
        mov dword ptr ds : [eax+8], edi
        pop edi
        mov dword ptr ds : [eax+0xC], esi
        add ecx, edx
        pop esi
        mov dword ptr ds : [eax+0x10], ecx
        pop ebx
        public_63128cf : nop
        ret 8
        UNREACHABLE_TRAP(0x6312890)
    }
}

#undef public_63128cf
