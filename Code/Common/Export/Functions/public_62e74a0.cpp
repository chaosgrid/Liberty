#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);

#define public_62e74cf _public_62e74cf

PROC_DECLARE(0x62e74a0, internal_62e74a0, public_62e74a0);
extern "C" NAKED register_t __cdecl internal_62e74a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [edi], 0
        je public_62e74cf
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_62e74cf
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+4]
        mov esi, eax
        test esi, esi
        je public_62e74cf
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [edi]
        jne public_62e74cf
        pop edi
        mov eax, esi
        pop esi
        ret 4
        public_62e74cf : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62e74a0)
    }
}

#undef public_62e74cf
