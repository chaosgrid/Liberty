#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb7e7);

#define public_6efb809 _public_6efb809
#define public_6efb815 _public_6efb815
#define public_6efb829 _public_6efb829
#define public_6efb82b _public_6efb82b

PROC_DECLARE(0x6efb7e7, internal_6efb7e7, public_6efb7e7);
extern "C" NAKED register_t __cdecl internal_6efb7e7()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6f00c60]
        cmp dword ptr ds : [public_6f00be4], edx
        push esi
        mov eax, offset public_6f00be0
        je public_6efb815
        lea esi, ds:[ecx+ecx*2]
        lea esi, ds : [esi*4+public_6f00be0]
        public_6efb809 : nop
        add eax, 0xC
        cmp eax, esi
        jae public_6efb815
        cmp dword ptr ds : [eax+4], edx
        jne public_6efb809
        public_6efb815 : nop
        lea ecx, ds:[ecx+ecx*2]
        pop esi
        lea ecx, ds : [ecx*4+public_6f00be0]
        cmp eax, ecx
        jae public_6efb829
        cmp dword ptr ds : [eax+4], edx
        je public_6efb82b
        public_6efb829 : nop
        xor eax, eax
        public_6efb82b : nop
        ret 
        UNREACHABLE_TRAP(0x6efb7e7)
    }
}

#undef public_6efb809
#undef public_6efb815
#undef public_6efb829
#undef public_6efb82b
