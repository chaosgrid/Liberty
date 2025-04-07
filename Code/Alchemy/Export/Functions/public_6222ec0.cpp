#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222ec0);

#define public_6222edb _public_6222edb

PROC_DECLARE(0x6222ec0, internal_6222ec0, public_6222ec0);
extern "C" NAKED register_t __cdecl internal_6222ec0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xFFFFFFFF
        je public_6222edb
        mov eax, dword ptr ds : [esi]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6222edb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6222ec0)
    }
}

#undef public_6222edb
