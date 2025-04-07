#include "Common-PCH.h"


#define public_6299593 _public_6299593
#define public_629959f _public_629959f

PROC_DECLARE(0x6299580, internal_6299580, public_6299580);
extern "C" NAKED register_t __cdecl internal_6299580()
{
    __asm
    {
        sub esp, 8
        lea eax, ds:[ecx+0x54]
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [eax]
        xor edx, edx
        cmp ecx, 0xFFFFFFFF
        je public_629959f
        public_6299593 : nop
        mov ecx, dword ptr ds : [eax+0x34]
        add eax, 0x34
        inc edx
        cmp ecx, 0xFFFFFFFF
        jne public_6299593
        public_629959f : nop
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], 0
        fild qword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x8C]
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6299580)
    }
}

#undef public_6299593
#undef public_629959f
