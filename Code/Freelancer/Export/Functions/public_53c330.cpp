#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4e00);

#define public_53c340 _public_53c340
#define public_53c35c _public_53c35c

PROC_DECLARE(0x53c330, internal_53c330, public_53c330);
extern "C" NAKED register_t __cdecl internal_53c330()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi]
        add esi, 4
        test edi, edi
        jle public_53c35c
        nop 
        public_53c340 : nop
        lea eax, ds:[esi+4]
        mov ecx, esi
        mov ecx, dword ptr ds : [ecx]
        lea esi, ds:[eax+1]
        movzx eax, byte ptr ds : [eax]
        push 0
        push eax
        push ecx
        call public_4c4e00
        add esp, 0xC
        dec edi
        jne public_53c340
        public_53c35c : nop
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x53c330)
    }
}

#undef public_53c340
#undef public_53c35c
