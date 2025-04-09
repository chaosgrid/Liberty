#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_517130);

#define public_517156 _public_517156
#define public_51716f _public_51716f

PROC_DECLARE(0x517130, internal_517130, public_517130);
extern "C" NAKED register_t __cdecl internal_517130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_517156
        mov eax, offset public_5c865c
/*FIXUP public_517156 : nop
        push offset public_5db934 @0x517156*/
  FIXUP public_517156 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db934
        push eax
        call dword ptr ds : [public_5c70dc]
        add esp, 8
        test eax, eax
        je public_51716f
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], esi
        public_51716f : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x517130)
    }
}

#undef public_517156
#undef public_51716f
