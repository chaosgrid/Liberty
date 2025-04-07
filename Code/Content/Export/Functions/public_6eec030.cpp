#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec030);

#define public_6eec062 _public_6eec062
#define public_6eec07e _public_6eec07e
#define public_6eec09e _public_6eec09e

PROC_DECLARE(0x6eec030, internal_6eec030, public_6eec030);
extern "C" NAKED register_t __cdecl internal_6eec030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        push esi
        je public_6eec09e
        sub eax, 2
        je public_6eec07e
        dec eax
        mov esi, dword ptr ss : [esp+8]
        je public_6eec062
        mov eax, dword ptr ss : [esp+0x10]
        push eax
/*FIXUP push offset public_6fb6064 @0x6eec04b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb6ef4 @0x6eec050*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6ef4
        push esi
        call public_6eeaf10
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        public_6eec062 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6eec067*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb6ed4 @0x6eec06c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6ed4
        push esi
        call public_6eeaf10
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        public_6eec07e : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+8]
        push edx
/*FIXUP push offset public_6fb6064 @0x6eec087*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb6eb4 @0x6eec08c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6eb4
        push esi
        call public_6eeaf10
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        public_6eec09e : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+8]
        push eax
/*FIXUP push offset public_6fb6064 @0x6eec0a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb6e98 @0x6eec0ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6e98
        push esi
        call public_6eeaf10
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eec030)
    }
}

#undef public_6eec062
#undef public_6eec07e
#undef public_6eec09e
