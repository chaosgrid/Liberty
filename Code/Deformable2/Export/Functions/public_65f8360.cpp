#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f8360);

#define public_65f8374 _public_65f8374

PROC_DECLARE(0x65f8360, internal_65f8360, public_65f8360);
extern "C" NAKED register_t __cdecl internal_65f8360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x10], eax
        je public_65f8374
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_65f8374 : nop
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f8360)
    }
}

#undef public_65f8374
