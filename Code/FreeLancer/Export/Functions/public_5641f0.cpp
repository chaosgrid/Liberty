#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5641f0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1eb9);

#define public_56422a _public_56422a
#define public_564239 _public_564239

PROC_DECLARE(0x5641f0, internal_5641f0, public_5641f0);
extern "C" NAKED register_t __cdecl internal_5641f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1eb9 @0x5641f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1eb9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5e2250
        mov ecx, dword ptr ds : [esi+0x98]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_56422a
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_56422a : nop
        mov ecx, dword ptr ds : [esi+0x9C]
        test ecx, ecx
        je public_564239
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_564239 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_5c6ea8]
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5641f0)
    }
}

#undef public_56422a
#undef public_564239
