#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0360);

#define public_6ec03a8 _public_6ec03a8
#define public_6ec03b6 _public_6ec03b6

PROC_DECLARE(0x6ec0360, internal_6ec0360, public_6ec0360);
extern "C" NAKED register_t __cdecl internal_6ec0360()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        push esi
        lea edx, ss:[esp+4]
        push edx
/*FIXUP push offset public_6ed4b54 @0x6ec036a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b54
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        or esi, 0xFFFFFFFF
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_6ec03a8
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
/*FIXUP push offset public_6ed4b6c @0x6ec0392*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4b6c
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov esi, eax
        cmp esi, 0xFFFFFFF9
        jne public_6ec03a8
        mov esi, 0xFFFFFFF8
        public_6ec03a8 : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6ec03b6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6ec03b6 : nop
        mov eax, esi
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec0360)
    }
}

#undef public_6ec03a8
#undef public_6ec03b6
