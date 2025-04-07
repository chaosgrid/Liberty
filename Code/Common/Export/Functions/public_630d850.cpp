#include "Common-PCH.h"


#define public_630d860 _public_630d860
#define public_630d868 _public_630d868
#define public_630d86a _public_630d86a

PROC_DECLARE(0x630d850, internal_630d850, public_630d850);
extern "C" NAKED register_t __cdecl internal_630d850()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        je public_630d86a
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_630d868
        mov edi, edi
        public_630d860 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jne public_630d860
        public_630d868 : nop
        mov dword ptr ds : [ecx], edx
        public_630d86a : nop
        ret 4
        UNREACHABLE_TRAP(0x630d850)
    }
}

#undef public_630d860
#undef public_630d868
#undef public_630d86a
