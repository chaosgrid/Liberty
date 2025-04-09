#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555f00);
CLANG_FORWARD_PROC_SYMBOL(public_556090);
CLANG_FORWARD_PROC_SYMBOL(public_558f80);

#define public_558fd8 _public_558fd8
#define public_558ff7 _public_558ff7

PROC_DECLARE(0x558f80, internal_558f80, public_558f80);
extern "C" NAKED register_t __cdecl internal_558f80()
{
    __asm
    {
        push ecx
        mov al, byte ptr ds : [public_679a04]
        test al, al
        je public_558ff7
        mov eax, dword ptr ds : [public_679a0c]
        test eax, eax
        jne public_558ff7
        lea eax, ss:[esp]
        push eax
/*FIXUP push offset public_6799fc @0x558f98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6799fc
        mov byte ptr ds : [public_679a04], 1
        call public_556090
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_679a08]
        add esp, 8
        cmp eax, ecx
        je public_558ff7
        test ecx, ecx
        je public_558fd8
/*FIXUP push offset public_6799fc @0x558fbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6799fc
        mov byte ptr ds : [ecx+0xD], 0
        mov ecx, dword ptr ds : [public_679a08]
        push 2
        call public_555f00
        mov eax, dword ptr ss : [esp]
        public_558fd8 : nop
        test eax, eax
        mov dword ptr ds : [public_679a08], eax
        je public_558ff7
/*FIXUP push offset public_6799fc @0x558fe1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6799fc
        mov byte ptr ds : [eax+0xD], 1
        mov ecx, dword ptr ds : [public_679a08]
        push 1
        call public_555f00
        public_558ff7 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x558f80)
    }
}

#undef public_558fd8
#undef public_558ff7
