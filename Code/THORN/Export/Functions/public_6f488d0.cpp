#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f488d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f59578);

#define public_6f48908 _public_6f48908

PROC_DECLARE(0x6f488d0, internal_6f488d0, public_6f488d0);
extern "C" NAKED register_t __cdecl internal_6f488d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f59578 @0x6f488d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f59578
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6f5b38c
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6f48908
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f48908 : nop
        mov ecx, esi
        call public_6f439a0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f488d0)
    }
}

#undef public_6f48908
