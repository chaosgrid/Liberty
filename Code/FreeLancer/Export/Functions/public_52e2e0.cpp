#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0518);

#define public_52e317 _public_52e317
#define public_52e323 _public_52e323

PROC_DECLARE(0x52e2e0, internal_52e2e0, public_52e2e0);
extern "C" NAKED register_t __cdecl internal_52e2e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0518 @0x52e2e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0518
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5ddad4
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_52e317
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_52e317 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        test ecx, ecx
        je public_52e323
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        public_52e323 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_531af0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x52e2e0)
    }
}

#undef public_52e317
#undef public_52e323
