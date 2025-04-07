#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6275aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_6275ab8 _public_6275ab8
#define public_6275ae4 _public_6275ae4
#define public_6275b1c _public_6275b1c
#define public_6275b54 _public_6275b54
#define public_6275b8b _public_6275b8b
#define public_6275b90 _public_6275b90
#define public_6275ba0 _public_6275ba0

PROC_DECLARE(0x6275aa0, internal_6275aa0, public_6275aa0);
extern "C" NAKED register_t __cdecl internal_6275aa0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        mov ecx, esi
        call public_6310170
        test al, al
        je public_6275ba0
        push edi
/*FIXUP public_6275ab8 : nop
        push offset public_6399f10 @0x6275ab8*/
  FIXUP public_6275ab8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275ae4
        call public_6310b70
        push eax
        lea eax, ds:[ebx+0x1C4]
        push eax
        call public_6334400
        add esp, 8
        jmp public_6275b90
/*FIXUP public_6275ae4 : nop
        push offset public_639a904 @0x6275ae4*/
  FIXUP public_6275ae4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a904
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275b1c
        mov edi, 0x100002
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x4D7
/*FIXUP push offset public_639a188 @0x6275b0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a8c0 @0x6275b0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a8c0
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_6275b90
/*FIXUP public_6275b1c : nop
        push offset public_639a8b0 @0x6275b1c*/
  FIXUP public_6275b1c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a8b0
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275b54
        mov edi, 0x100002
        call public_6310040
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x4DB
/*FIXUP push offset public_639a188 @0x6275b42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a868 @0x6275b47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a868
        push edi
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6275b90
/*FIXUP public_6275b54 : nop
        push offset public_639a858 @0x6275b54*/
  FIXUP public_6275b54 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a858
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275b8b
        mov edi, 0x100002
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x4DF
/*FIXUP push offset public_639a188 @0x6275b79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a810 @0x6275b7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a810
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_6275b90
        public_6275b8b : nop
        call public_6310040
        public_6275b90 : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6275ab8
        pop edi
        public_6275ba0 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6275aa0)
    }
}

#undef public_6275ab8
#undef public_6275ae4
#undef public_6275b1c
#undef public_6275b54
#undef public_6275b8b
#undef public_6275b90
#undef public_6275ba0
