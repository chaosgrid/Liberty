#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c770);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);

#define public_41c7bd _public_41c7bd

PROC_DECLARE(0x41c770, internal_41c770, public_41c770);
extern "C" NAKED register_t __cdecl internal_41c770()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67eca8]
        sub esp, 0x800
        push esi
        mov esi, dword ptr ss : [esp+0x80C]
        push 0x400
        lea eax, ss:[esp+8]
        push eax
        push esi
        push ecx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_41c7bd
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0xF1
/*FIXUP push offset public_5c93e4 @0x41c7a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100001
/*FIXUP push offset public_5c9414 @0x41c7b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9414
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_41c7bd : nop
        mov ecx, dword ptr ss : [esp+0x808]
        lea eax, ss:[esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_5c6080]
        add esp, 8
        pop esi
        add esp, 0x800
        ret 
        UNREACHABLE_TRAP(0x41c770)
    }
}

#undef public_41c7bd
