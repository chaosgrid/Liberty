#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d01e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d60190);

#define public_6cfaaa1 _public_6cfaaa1
#define public_6cfaaa3 _public_6cfaaa3

PROC_DECLARE(0x6cfaa50, internal_6cfaa50, public_6cfaa50);
extern "C" NAKED register_t __cdecl internal_6cfaa50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cfaaa3
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cfaaa1
        push 0
/*FIXUP push offset public_6d88890 @0x6cfaa78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88890
/*FIXUP push offset public_6d88538 @0x6cfaa7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88538
        push 0
        push eax
        call public_6d60190
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0x14
        push 0
        push edx
        push 2
        mov ecx, eax
        call public_6d01e80
        xor eax, eax
        pop esi
        ret 
        public_6cfaaa1 : nop
        mov eax, esi
        public_6cfaaa3 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfaa50)
    }
}

#undef public_6cfaaa1
#undef public_6cfaaa3
