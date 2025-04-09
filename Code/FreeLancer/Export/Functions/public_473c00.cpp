#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473c00);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_473c6c _public_473c6c
#define public_473c87 _public_473c87
#define public_473c91 _public_473c91

PROC_DECLARE(0x473c00, internal_473c00, public_473c00);
extern "C" NAKED register_t __cdecl internal_473c00()
{
    __asm
    {
        sub esp, 0xC
        push esi
/*FIXUP push offset public_5d0610 @0x473c04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_473c91
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
/*FIXUP push offset public_5d0610 @0x473c1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
/*FIXUP push offset public_5d0610 @0x473c20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_473c91
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+8]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x340]
        test eax, eax
        je public_473c6c
        and byte ptr ds : [eax+0x6C], 0xFC
        public_473c6c : nop
        mov ecx, dword ptr ds : [esi+0x334]
        test ecx, ecx
        je public_473c87
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        public_473c87 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
        public_473c91 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x473c00)
    }
}

#undef public_473c6c
#undef public_473c87
#undef public_473c91
