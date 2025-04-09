#include "FreeLancer-PCH.h"


#define public_457c34 _public_457c34

PROC_DECLARE(0x457c20, internal_457c20, public_457c20);
extern "C" NAKED register_t __cdecl internal_457c20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x6C]
        test eax, eax
        je public_457c34
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x30]
        public_457c34 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x457c20)
    }
}

#undef public_457c34
