#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442720);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_442750 _public_442750
#define public_442764 _public_442764
#define public_442778 _public_442778
#define public_44278b _public_44278b

PROC_DECLARE(0x442720, internal_442720, public_442720);
extern "C" NAKED register_t __cdecl internal_442720()
{
    __asm
    {
/*FIXUP push offset public_5cb548 @0x442720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        je public_44278b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_44278b
/*FIXUP push offset public_5cb6cc @0x44273c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6cc
        call public_59da10
        add esp, 4
        test eax, eax
        je public_442750
        mov al, 1
        ret 
/*FIXUP public_442750 : nop
        push offset public_5cb6bc @0x442750*/
  FIXUP public_442750 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6bc
        call public_59da10
        add esp, 4
        test eax, eax
        je public_442764
        mov al, 1
        ret 
/*FIXUP public_442764 : nop
        push offset public_5cb6b4 @0x442764*/
  FIXUP public_442764 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6b4
        call public_59da10
        add esp, 4
        test eax, eax
        je public_442778
        mov al, 1
        ret 
/*FIXUP public_442778 : nop
        push offset public_5cb6a0 @0x442778*/
  FIXUP public_442778 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6a0
        call public_59da10
        add esp, 4
        test eax, eax
        setne al
        ret 
        public_44278b : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x442720)
    }
}

#undef public_442750
#undef public_442764
#undef public_442778
#undef public_44278b
