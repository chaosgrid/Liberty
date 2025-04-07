#include "Common-PCH.h"


#define public_63065b7 _public_63065b7
#define public_63065cb _public_63065cb

PROC_DECLARE(0x63065a0, internal_63065a0, public_63065a0);
extern "C" NAKED register_t __cdecl internal_63065a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_63065b7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], 0
        public_63065b7 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_63065cb
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_63065cb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63065a0)
    }
}

#undef public_63065b7
#undef public_63065cb
