#include "SoundManager-PCH.h"


#define public_6ee5712 _public_6ee5712

PROC_DECLARE(0x6ee56f0, internal_6ee56f0, public_6ee56f0);
extern "C" NAKED register_t __cdecl internal_6ee56f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi+0x12C]
        test eax, eax
        lea esi, ds:[edi+0x12C]
        je public_6ee5712
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ee5712 : nop
        call dword ptr ds : [public_6ee9004]
        mov edx, dword ptr ds : [eax]
        push esi
/*FIXUP push offset public_6eea468 @0x6ee571b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea468
        push eax
        call dword ptr ds : [edx]
        mov byte ptr ds : [edi+4], 1
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee56f0)
    }
}

#undef public_6ee5712
