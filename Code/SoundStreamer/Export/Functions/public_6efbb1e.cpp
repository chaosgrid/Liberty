#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb518);
CLANG_FORWARD_PROC_SYMBOL(public_6efbb1e);

#define public_6efbb5c _public_6efbb5c
#define public_6efbb5e _public_6efbb5e
#define public_6efbb67 _public_6efbb67
#define public_6efbb74 _public_6efbb74

PROC_DECLARE(0x6efbb1e, internal_6efbb1e, public_6efbb1e);
extern "C" NAKED register_t __cdecl internal_6efbb1e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6f02640]
        jae public_6efbb67
        mov ecx, eax
        mov edx, eax
        sar ecx, 5
        and edx, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_6f02540]
        test byte ptr ds : [ecx+edx*8+4], 1
        je public_6efbb67
        push eax
        call public_6efb518
        pop ecx
        push eax
        call dword ptr ds : [public_6efc060]
        test eax, eax
        jne public_6efbb5c
        call dword ptr ds : [public_6efc0d0]
        jmp public_6efbb5e
        public_6efbb5c : nop
        xor eax, eax
        public_6efbb5e : nop
        test eax, eax
        je public_6efbb74
        mov dword ptr ds : [public_6f010f4], eax
        public_6efbb67 : nop
        mov dword ptr ds : [public_6f010f0], 9
        or eax, 0xFFFFFFFF
        public_6efbb74 : nop
        ret 
        UNREACHABLE_TRAP(0x6efbb1e)
    }
}

#undef public_6efbb5c
#undef public_6efbb5e
#undef public_6efbb67
#undef public_6efbb74
