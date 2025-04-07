#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f700);

#define public_6f4f729 _public_6f4f729

PROC_DECLARE(0x6f4f700, internal_6f4f700, public_6f4f700);
extern "C" NAKED register_t __cdecl internal_6f4f700()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6f4b090
        mov esi, eax
        push esi
        call public_6f4b520
        add esp, 8
        test eax, eax
        jne public_6f4f729
/*FIXUP push offset public_6f60968 @0x6f4f71b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60968
        push edi
        call public_6f4f570
        add esp, 8
        public_6f4f729 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f700)
    }
}

#undef public_6f4f729
