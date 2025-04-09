#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d960);

#define public_59d970 _public_59d970
#define public_59d97e _public_59d97e
#define public_59d990 _public_59d990
#define public_59d9a0 _public_59d9a0

PROC_DECLARE(0x59d960, internal_59d960, public_59d960);
extern "C" NAKED register_t __cdecl internal_59d960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67dce0]
        xor ecx, ecx
        test eax, eax
        je public_59d9a0
        mov edx, dword ptr ss : [esp+4]
        nop 
        public_59d970 : nop
        cmp eax, edx
        je public_59d97e
        mov ecx, eax
        mov eax, dword ptr ds : [eax+0x38]
        test eax, eax
        jne public_59d970
        ret 
        public_59d97e : nop
        test ecx, ecx
        je public_59d990
        mov eax, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [edx+0x38], 0
        ret 
        public_59d990 : nop
        mov ecx, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [public_67dce0], ecx
        mov dword ptr ds : [edx+0x38], 0
        public_59d9a0 : nop
        ret 
        UNREACHABLE_TRAP(0x59d960)
    }
}

#undef public_59d970
#undef public_59d97e
#undef public_59d990
#undef public_59d9a0
