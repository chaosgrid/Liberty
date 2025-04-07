#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f005f0);

#define public_6f00600 _public_6f00600
#define public_6f0060c _public_6f0060c

PROC_DECLARE(0x6f005f0, internal_6f005f0, public_6f005f0);
extern "C" NAKED register_t __cdecl internal_6f005f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_6f0060c
        mov edi, edi
        public_6f00600 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_6f00600
        public_6f0060c : nop
        ret 
        UNREACHABLE_TRAP(0x6f005f0)
    }
}

#undef public_6f00600
#undef public_6f0060c
