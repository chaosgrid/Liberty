#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_629c820);
CLANG_FORWARD_PROC_SYMBOL(public_629cdb0);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393908);

#define public_629cdef _public_629cdef

PROC_DECLARE(0x629cdb0, internal_629cdb0, public_629cdb0);
extern "C" NAKED register_t __cdecl internal_629cdb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393908 @0x629cdb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393908
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639d5a4
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_629cdef
        push esi
        call public_629c820
        mov dword ptr ds : [esi+0x4C], 0
        public_629cdef : nop
        mov ecx, esi
        call public_629edf0
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6293160
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x629cdb0)
    }
}

#undef public_629cdef
