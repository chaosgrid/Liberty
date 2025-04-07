#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6278270);

#define public_6278280 _public_6278280
#define public_627828c _public_627828c

PROC_DECLARE(0x6278270, internal_6278270, public_6278270);
extern "C" NAKED register_t __cdecl internal_6278270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x35]
        test dl, dl
        jne public_627828c
        mov edi, edi
        public_6278280 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x35]
        test dl, dl
        je public_6278280
        public_627828c : nop
        ret 
        UNREACHABLE_TRAP(0x6278270)
    }
}

#undef public_6278280
#undef public_627828c
