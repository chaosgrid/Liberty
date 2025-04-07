#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);

#define public_6fa0347 _public_6fa0347

PROC_DECLARE(0x6fa0330, internal_6fa0330, public_6fa0330);
extern "C" NAKED register_t __cdecl internal_6fa0330()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6fa0347
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_6fa0347 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6fa0330)
    }
}

#undef public_6fa0347
