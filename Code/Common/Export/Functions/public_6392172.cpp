#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6392172);

#define public_639219e _public_639219e

PROC_DECLARE(0x6392172, internal_6392172, public_6392172);
extern "C" NAKED register_t __cdecl internal_6392172()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        and dword ptr ds : [esi+0xC], 0
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_63a5ac0
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_639219e
        cmp byte ptr ss : [esp+0x10], 0
        je public_639219e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_639219e : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6392172)
    }
}

#undef public_639219e
