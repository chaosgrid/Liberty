#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4b70);

#define public_6ce4b80 _public_6ce4b80
#define public_6ce4b8c _public_6ce4b8c

PROC_DECLARE(0x6ce4b70, internal_6ce4b70, public_6ce4b70);
extern "C" NAKED register_t __cdecl internal_6ce4b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_6ce4b8c
        mov edi, edi
        public_6ce4b80 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        je public_6ce4b80
        public_6ce4b8c : nop
        ret 
        UNREACHABLE_TRAP(0x6ce4b70)
    }
}

#undef public_6ce4b80
#undef public_6ce4b8c
