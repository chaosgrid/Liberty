#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dad0);

#define public_59dae0 _public_59dae0
#define public_59daee _public_59daee
#define public_59db00 _public_59db00
#define public_59db10 _public_59db10

PROC_DECLARE(0x59dad0, internal_59dad0, public_59dad0);
extern "C" NAKED register_t __cdecl internal_59dad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67dcec]
        xor ecx, ecx
        test eax, eax
        je public_59db10
        mov edx, dword ptr ss : [esp+4]
        nop 
        public_59dae0 : nop
        cmp eax, edx
        je public_59daee
        mov ecx, eax
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_59dae0
        ret 
        public_59daee : nop
        test ecx, ecx
        je public_59db00
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [edx+4], 0
        ret 
        public_59db00 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [public_67dcec], ecx
        mov dword ptr ds : [edx+4], 0
        public_59db10 : nop
        ret 
        UNREACHABLE_TRAP(0x59dad0)
    }
}

#undef public_59dae0
#undef public_59daee
#undef public_59db00
#undef public_59db10
