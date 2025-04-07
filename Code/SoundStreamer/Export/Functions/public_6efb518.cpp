#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb518);

#define public_6efb540 _public_6efb540

PROC_DECLARE(0x6efb518, internal_6efb518, public_6efb518);
extern "C" NAKED register_t __cdecl internal_6efb518()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6f02640]
        jae public_6efb540
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        mov ecx, dword ptr ds : [ecx*4+public_6f02540]
        test byte ptr ds : [ecx+eax*8+4], 1
        lea eax, ds:[ecx+eax*8]
        je public_6efb540
        mov eax, dword ptr ds : [eax]
        ret 
        public_6efb540 : nop
        and dword ptr ds : [public_6f010f4], 0
        mov dword ptr ds : [public_6f010f0], 9
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6efb518)
    }
}

#undef public_6efb540
