#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_424f30);
CLANG_FORWARD_PROC_SYMBOL(public_425080);
CLANG_FORWARD_PROC_SYMBOL(public_425140);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_473cb0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_59e300);
CLANG_FORWARD_PROC_SYMBOL(public_5b0b60);

#define public_473d22 _public_473d22
#define public_473d3c _public_473d3c
#define public_473d46 _public_473d46
#define public_473d70 _public_473d70
#define public_473d9a _public_473d9a
#define public_473da0 _public_473da0
#define public_473dd3 _public_473dd3
#define public_473ddd _public_473ddd
#define public_473dee _public_473dee

PROC_DECLARE(0x473cb0, internal_473cb0, public_473cb0);
extern "C" NAKED register_t __cdecl internal_473cb0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x18
        push ebx
        push esi
/*FIXUP push offset public_5d0610 @0x473cbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_473d46
        push eax
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
/*FIXUP push offset public_5d0610 @0x473cd1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
/*FIXUP push offset public_5d0610 @0x473cd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_473d46
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x340]
        test eax, eax
        je public_473d22
        and byte ptr ds : [eax+0x6C], 0xFC
        public_473d22 : nop
        mov ecx, dword ptr ds : [esi+0x334]
        test ecx, ecx
        je public_473d3c
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        public_473d3c : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x80]
/*FIXUP public_473d46 : nop
        push offset public_5d0610 @0x473d46*/
  FIXUP public_473d46 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        mov dword ptr ss : [esp+0x10], 0
        call public_59d9c0
        add esp, 4
        test eax, eax
        je public_473dee
        mov bl, byte ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [public_5c6ed8]
        lea esp, ss:[esp]
        public_473d70 : nop
        push 0xA
        call esi
        lea eax, ss:[esp+0xC]
        push eax
        call public_5b0b60
        add esp, 4
        test al, al
        je public_473dee
        test bl, bl
        je public_473d9a
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_473da0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        jmp public_473da0
        public_473d9a : nop
        call dword ptr ds : [public_5c6344]
        public_473da0 : nop
        call public_42d680
        fstp qword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        call public_59e080
        add esp, 8
        call public_424f30
        test al, al
        je public_473dd3
        call public_59e300
        call public_425080
        call public_425140
        public_473dd3 : nop
        test bl, bl
        jne public_473ddd
        call dword ptr ds : [public_5c6340]
/*FIXUP public_473ddd : nop
        push offset public_5d0610 @0x473ddd*/
  FIXUP public_473ddd : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_473d70
        public_473dee : nop
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x473cb0)
    }
}

#undef public_473d22
#undef public_473d3c
#undef public_473d46
#undef public_473d70
#undef public_473d9a
#undef public_473da0
#undef public_473dd3
#undef public_473ddd
#undef public_473dee
