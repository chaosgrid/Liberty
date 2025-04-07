#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_45a460);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_4b6b60);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_4b6c4b _public_4b6c4b

PROC_DECLARE(0x4b6b60, internal_4b6b60, public_4b6b60);
extern "C" NAKED register_t __cdecl internal_4b6b60()
{
    __asm
    {
        sub esp, 0xC
        push esi
        call public_45a460
        call public_54baf0
        test eax, eax
        je public_4b6c4b
/*FIXUP push offset public_5d0234 @0x4b6b76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4b6c4b
/*FIXUP push offset public_5d0228 @0x4b6b8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4b6c4b
        call public_45a470
        test al, al
        jne public_4b6c4b
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_4b6c4b
        call public_42d730
        test al, al
        jne public_4b6c4b
        call public_41a3e0
        test al, al
        jne public_4b6c4b
        push 0
        push 0
/*FIXUP push offset public_5d021c @0x4b6bd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
/*FIXUP push offset public_5d021c @0x4b6bd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        call public_59db20
        add esp, 0x10
        test eax, eax
        je public_4b6c4b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_4b6c4b
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0x3D9BA5E3
        mov dword ptr ss : [esp+0x10], 0xBFA4DD2F
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push 0x49
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 0x4A
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        push 0xD
        call public_5645c0
        add esp, 4
        public_4b6c4b : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4b6b60)
    }
}

#undef public_4b6c4b
