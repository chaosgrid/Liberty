#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f117a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f11a10);

#define public_6f117e0 _public_6f117e0

PROC_DECLARE(0x6f117a0, internal_6f117a0, public_6f117a0);
extern "C" NAKED register_t __cdecl internal_6f117a0()
{
    __asm
    {
        push esi
        push 0xC
        call public_6f11a10
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f117e0
        mov eax, dword ptr ss : [esp+8]
        push 0x40000000
/*FIXUP push offset public_6f13080 @0x6f117ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f13080
        push esi
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6f13080
        mov dword ptr ds : [esi], offset public_6f120b8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6f117e0 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f117a0)
    }
}

#undef public_6f117e0
