#include "Freelancer-PCH.h"


#define public_4a6620 _public_4a6620
#define public_4a6625 _public_4a6625

PROC_DECLARE(0x4a6600, internal_4a6600, public_4a6600);
extern "C" NAKED register_t __cdecl internal_4a6600()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xF
        jne public_4a6625
        mov al, byte ptr ds : [ecx+0xC]
        test al, al
        jne public_4a6625
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_4a6620
        mov ecx, dword ptr ds : [ecx+8]
        push 1
        push ecx
        call eax
        add esp, 8
        public_4a6620 : nop
        mov al, 1
        ret 4
        public_4a6625 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x4a6600)
    }
}

#undef public_4a6620
#undef public_4a6625
