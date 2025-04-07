#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6323d70);

#define public_6323d80 _public_6323d80
#define public_6323d8e _public_6323d8e

PROC_DECLARE(0x6323d70, internal_6323d70, public_6323d70);
extern "C" NAKED register_t __cdecl internal_6323d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x9D]
        test dl, dl
        jne public_6323d8e
        public_6323d80 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x9D]
        test dl, dl
        je public_6323d80
        public_6323d8e : nop
        ret 
        UNREACHABLE_TRAP(0x6323d70)
    }
}

#undef public_6323d80
#undef public_6323d8e
