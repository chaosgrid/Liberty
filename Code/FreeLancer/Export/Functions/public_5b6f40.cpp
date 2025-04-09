#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b6f40);

#define public_5b6f85 _public_5b6f85

PROC_DECLARE(0x5b6f40, internal_5b6f40, public_5b6f40);
extern "C" NAKED register_t __cdecl internal_5b6f40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [public_5c6f00]
        test eax, eax
        mov dword ptr ds : [public_67ed54], eax
        je public_5b6f85
        mov esi, dword ptr ds : [public_616418]
/*FIXUP push offset public_5e7230 @0x5b6f5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7230
        push eax
        call esi
        call eax
        mov dword ptr ds : [public_67ed58], eax
        mov eax, dword ptr ds : [public_67ed54]
/*FIXUP push offset public_5e7218 @0x5b6f6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7218
        push eax
        call esi
        call eax
        mov dword ptr ds : [public_67ed5c], eax
        mov eax, dword ptr ds : [public_67ed58]
        pop esi
        ret 
        public_5b6f85 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x1F
/*FIXUP push offset public_5e71e8 @0x5b6f8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e71e8
        mov eax, 0x100001
/*FIXUP push offset public_5e71ac @0x5b6f98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e71ac
        push eax
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_67ed58]
        add esp, 0x14
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5b6f40)
    }
}

#undef public_5b6f85
