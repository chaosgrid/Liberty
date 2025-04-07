#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fd0);

#define public_6209fe5 _public_6209fe5

PROC_DECLARE(0x6209fd0, internal_6209fd0, public_6209fd0);
extern "C" NAKED register_t __cdecl internal_6209fd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6209fe5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6209fe5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6209fd0)
    }
}

#undef public_6209fe5
