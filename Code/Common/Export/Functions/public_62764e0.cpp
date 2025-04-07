#include "Common-PCH.h"


#define public_6276500 _public_6276500
#define public_627651f _public_627651f
#define public_6276528 _public_6276528

PROC_DECLARE(0x62764e0, internal_62764e0, public_62764e0);
extern "C" NAKED register_t __cdecl internal_62764e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0x2F
        push eax
        call dword ptr ds : [public_6399300]
        mov esi, dword ptr ss : [esp+0x14]
        add esp, 8
        test eax, eax
        je public_627651f
        inc eax
        mov edx, esi
        sub edx, eax
        mov edi, edi
        public_6276500 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6276500
        push 0x2F
        push esi
        call dword ptr ds : [public_6399304]
        add esp, 8
        test eax, eax
        je public_627651f
        mov byte ptr ds : [eax], 0
        pop esi
        ret 
        public_627651f : nop
        mov eax, offset public_63997b0
        mov edx, esi
        sub edx, eax
        public_6276528 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6276528
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62764e0)
    }
}

#undef public_6276500
#undef public_627651f
#undef public_6276528
