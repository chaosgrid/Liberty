#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34a40);

#define public_6c34a50 _public_6c34a50
#define public_6c34a5b _public_6c34a5b

PROC_DECLARE(0x6c34a40, internal_6c34a40, public_6c34a40);
extern "C" NAKED register_t __cdecl internal_6c34a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x25]
        test dl, dl
        jne public_6c34a5b
        lea ecx, ds:[ecx]
        public_6c34a50 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x25]
        test dl, dl
        je public_6c34a50
        public_6c34a5b : nop
        ret 
        UNREACHABLE_TRAP(0x6c34a40)
    }
}

#undef public_6c34a50
#undef public_6c34a5b
