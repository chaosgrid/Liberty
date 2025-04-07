#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4330);

#define public_6ce4340 _public_6ce4340
#define public_6ce434c _public_6ce434c

PROC_DECLARE(0x6ce4330, internal_6ce4330, public_6ce4330);
extern "C" NAKED register_t __cdecl internal_6ce4330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_6ce434c
        mov edi, edi
        public_6ce4340 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        je public_6ce4340
        public_6ce434c : nop
        ret 
        UNREACHABLE_TRAP(0x6ce4330)
    }
}

#undef public_6ce4340
#undef public_6ce434c
