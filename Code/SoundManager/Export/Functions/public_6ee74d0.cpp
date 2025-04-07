#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee74d0);

#define public_6ee74ee _public_6ee74ee
#define public_6ee74fa _public_6ee74fa

PROC_DECLARE(0x6ee74d0, internal_6ee74d0, public_6ee74d0);
extern "C" NAKED register_t __cdecl internal_6ee74d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        cmp eax, edi
        je public_6ee74fa
        test eax, eax
        je public_6ee74ee
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ee74ee : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_6ee74fa
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6ee74fa : nop
        mov eax, dword ptr ds : [esi]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ee74d0)
    }
}

#undef public_6ee74ee
#undef public_6ee74fa
