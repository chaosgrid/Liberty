#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527a00);

#define public_527a10 _public_527a10
#define public_527a1c _public_527a1c

PROC_DECLARE(0x527a00, internal_527a00, public_527a00);
extern "C" NAKED register_t __cdecl internal_527a00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_527a1c
        mov edi, edi
        public_527a10 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_527a10
        public_527a1c : nop
        ret 
        UNREACHABLE_TRAP(0x527a00)
    }
}

#undef public_527a10
#undef public_527a1c
