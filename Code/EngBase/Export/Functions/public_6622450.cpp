#include "EngBase-PCH.h"


#define public_662246b _public_662246b
#define public_6622477 _public_6622477
#define public_6622479 _public_6622479

PROC_DECLARE(0x6622450, internal_6622450, public_6622450);
extern "C" NAKED register_t __cdecl internal_6622450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_6622477
        test eax, eax
        je public_6622477
        mov ecx, dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [eax+0x1C]
        cmp eax, ecx
        je public_6622477
        mov edx, dword ptr ss : [esp+0xC]
        public_662246b : nop
        cmp dword ptr ds : [eax+0x44], edx
        je public_6622479
        add eax, 0x48
        cmp eax, ecx
        jne public_662246b
        public_6622477 : nop
        xor eax, eax
        public_6622479 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6622450)
    }
}

#undef public_662246b
#undef public_6622477
#undef public_6622479
