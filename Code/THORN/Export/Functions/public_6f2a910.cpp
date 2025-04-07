#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f25340);
CLANG_FORWARD_PROC_SYMBOL(public_6f28a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf90);

#define public_6f2a938 _public_6f2a938
#define public_6f2a990 _public_6f2a990
#define public_6f2a9c6 _public_6f2a9c6

PROC_DECLARE(0x6f2a910, internal_6f2a910, public_6f2a910);
extern "C" NAKED register_t __cdecl internal_6f2a910()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6f2a938
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_6f2a938
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        test eax, eax
        jge public_6f2a938
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6f2a938 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [public_6f61dec], edx
        mov dword ptr ds : [public_6f61e00], eax
        mov dword ptr ds : [public_6f5e1e4], 0xFFFFFFFF
        call public_6f4bf30
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6f2a990
/*FIXUP push offset public_6f5e91c @0x6f2a961*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e91c
        call public_6f4b370
        push eax
        call public_6f4b900
        push 0
/*FIXUP push offset _public_6f28a60 @0x6f2a973*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f28a60
        call public_6f4b7c0
/*FIXUP push offset public_6f5e914 @0x6f2a97d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e914
        call public_6f4b370
        push eax
        call public_6f4b0b0
        add esp, 0x18
        public_6f2a990 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6f2a9c6
/*FIXUP push offset public_6f5e90c @0x6f2a997*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e90c
        call public_6f4b370
        push eax
        call public_6f4b900
        push 0
/*FIXUP push offset _public_6f25340 @0x6f2a9a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f25340
        call public_6f4b7c0
/*FIXUP push offset public_6f5e914 @0x6f2a9b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5e914
        call public_6f4b370
        push eax
        call public_6f4b0b0
        add esp, 0x18
        public_6f2a9c6 : nop
        call public_6f4bf90
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6f2a910)
    }
}

#undef public_6f2a938
#undef public_6f2a990
#undef public_6f2a9c6
