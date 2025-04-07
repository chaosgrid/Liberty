#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af640);

#define public_62af65b _public_62af65b

PROC_DECLARE(0x62af640, internal_62af640, public_62af640);
extern "C" NAKED register_t __cdecl internal_62af640()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x98]
        dec edx
        push esi
        mov esi, edx
        test esi, esi
        mov dword ptr ds : [ecx+0x98], edx
        jne public_62af65b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        public_62af65b : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62af640)
    }
}

#undef public_62af65b
