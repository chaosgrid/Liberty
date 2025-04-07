#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ce00);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ce40);

#define public_6f2c925 _public_6f2c925
#define public_6f2c94d _public_6f2c94d
#define public_6f2c975 _public_6f2c975
#define public_6f2c99c _public_6f2c99c

PROC_DECLARE(0x6f2c8f0, internal_6f2c8f0, public_6f2c8f0);
extern "C" NAKED register_t __cdecl internal_6f2c8f0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+0x10]
        test bl, 1
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6f2c925
        mov eax, dword ptr ds : [public_6f5e1d4]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c90a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov ecx, dword ptr ds : [edi]
        push ecx
/*FIXUP push offset public_6f5f6cc @0x6f2c919*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f6cc
        mov ecx, esi
        call public_6f2ce00
        public_6f2c925 : nop
        test bl, 2
        je public_6f2c94d
        mov edx, dword ptr ds : [public_6f5e1d8]
        push edx
/*FIXUP push offset public_6f5ee7c @0x6f2c931*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov eax, dword ptr ds : [edi+4]
        push eax
/*FIXUP push offset public_6f5f674 @0x6f2c941*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        mov ecx, esi
        call public_6f2ce40
        public_6f2c94d : nop
        test bl, 4
        je public_6f2c975
        mov ecx, dword ptr ds : [public_6f5e1dc]
        push ecx
/*FIXUP push offset public_6f5ee7c @0x6f2c959*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov edx, dword ptr ds : [edi+8]
        push edx
/*FIXUP push offset public_6f5f674 @0x6f2c969*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        mov ecx, esi
        call public_6f2ce40
        public_6f2c975 : nop
        test bl, 8
        je public_6f2c99c
        mov eax, dword ptr ds : [public_6f5e1e0]
        push eax
/*FIXUP push offset public_6f5ee7c @0x6f2c980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5ee7c
        mov ecx, esi
        call public_6f2cc90
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
/*FIXUP push offset public_6f5f674 @0x6f2c990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5f674
        mov ecx, esi
        call public_6f2ce40
        public_6f2c99c : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f2c8f0)
    }
}

#undef public_6f2c925
#undef public_6f2c94d
#undef public_6f2c975
#undef public_6f2c99c
