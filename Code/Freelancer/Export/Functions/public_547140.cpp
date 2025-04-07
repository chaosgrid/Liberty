#include "Freelancer-PCH.h"


#define public_547166 _public_547166
#define public_547168 _public_547168
#define public_54717b _public_54717b
#define public_54717d _public_54717d
#define public_547188 _public_547188

PROC_DECLARE(0x547140, internal_547140, public_547140);
extern "C" NAKED register_t __cdecl internal_547140()
{
    __asm
    {
        lea eax, ds:[ecx-4]
        test eax, eax
        je public_547166
        add eax, 0xC
        test eax, eax
        je public_547166
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_547166
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_547168
        public_547166 : nop
        xor eax, eax
        public_547168 : nop
        lea ecx, ds:[eax+0x1B8]
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_54717b
        add eax, 8
        jmp public_54717d
        public_54717b : nop
        xor eax, eax
        public_54717d : nop
        cmp eax, dword ptr ds : [ecx]
        je public_547188
        push eax
        call dword ptr ds : [public_5c62a8]
        public_547188 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x547140)
    }
}

#undef public_547166
#undef public_547168
#undef public_54717b
#undef public_54717d
#undef public_547188
