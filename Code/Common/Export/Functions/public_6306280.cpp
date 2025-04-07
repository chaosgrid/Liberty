#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306280);

#define public_630629d _public_630629d
#define public_63062b1 _public_63062b1

PROC_DECLARE(0x6306280, internal_6306280, public_6306280);
extern "C" NAKED register_t __cdecl internal_6306280()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi], offset public_63a2ffc
        je public_630629d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], 0
        public_630629d : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_63062b1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_63062b1 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6306280)
    }
}

#undef public_630629d
#undef public_63062b1
