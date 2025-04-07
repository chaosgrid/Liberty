#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d33272);
CLANG_FORWARD_PROC_SYMBOL(public_6d33538);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd92);

#define public_6d33564 _public_6d33564
#define public_6d33569 _public_6d33569
#define public_6d3357d _public_6d3357d
#define public_6d3357f _public_6d3357f

PROC_DECLARE(0x6d33538, internal_6d33538, public_6d33538);
extern "C" NAKED register_t __cdecl internal_6d33538()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6d33569
        push edi
/*FIXUP push offset _public_6d33272 @0x6d33546*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d33272
        lea edi, ds:[esi-4]
        push dword ptr ds : [edi]
        push 0xC
        push esi
        call public_6d5cd92
        test bl, 1
        je public_6d33564
        push edi
        call public_6d2f249
        pop ecx
        public_6d33564 : nop
        mov eax, edi
        pop edi
        jmp public_6d3357f
        public_6d33569 : nop
        push dword ptr ds : [esi]
        call public_6d2f249
        test bl, 1
        pop ecx
        je public_6d3357d
        push esi
        call public_6d2f249
        pop ecx
        public_6d3357d : nop
        mov eax, esi
        public_6d3357f : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d33538)
    }
}

#undef public_6d33564
#undef public_6d33569
#undef public_6d3357d
#undef public_6d3357f
