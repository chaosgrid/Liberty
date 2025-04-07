#include "ReadFile-PCH.h"


#define public_6b75e40 _public_6b75e40

PROC_DECLARE(0x6b75e20, internal_6b75e20, public_6b75e20);
extern "C" NAKED register_t __cdecl internal_6b75e20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0x120]
        test eax, eax
        mov dword ptr ds : [edx], eax
        je public_6b75e40
        mov eax, dword ptr ds : [ecx+0x120]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        public_6b75e40 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6b75e20)
    }
}

#undef public_6b75e40
