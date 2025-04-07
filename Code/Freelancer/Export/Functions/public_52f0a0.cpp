#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);
CLANG_FORWARD_PROC_SYMBOL(public_52f0a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c05a8);

#define public_52f0d7 _public_52f0d7
#define public_52f0e3 _public_52f0e3

PROC_DECLARE(0x52f0a0, internal_52f0a0, public_52f0a0);
extern "C" NAKED register_t __cdecl internal_52f0a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c05a8 @0x52f0a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c05a8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5ddbfc
        mov ecx, dword ptr ds : [esi+0x4C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_52f0d7
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_52f0d7 : nop
        mov ecx, dword ptr ds : [esi+0x48]
        test ecx, ecx
        je public_52f0e3
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_52f0e3 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_429140
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x52f0a0)
    }
}

#undef public_52f0d7
#undef public_52f0e3
