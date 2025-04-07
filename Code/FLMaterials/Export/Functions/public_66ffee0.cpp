#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1210);

#define public_66fff0e _public_66fff0e

PROC_DECLARE(0x66ffee0, internal_66ffee0, public_66ffee0);
extern "C" NAKED register_t __cdecl internal_66ffee0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        call public_66f1210
        mov ebx, eax
        test ebx, ebx
        jl public_66fff0e
        mov eax, dword ptr ds : [edi]
        add esi, 0x70
        push esi
/*FIXUP push offset public_6702f98 @0x66ffefe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702f98
        push edi
        call dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        public_66fff0e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66ffee0)
    }
}

#undef public_66fff0e
