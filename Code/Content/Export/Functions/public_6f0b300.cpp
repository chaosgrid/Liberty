#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0b300);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad268);

#define public_6f0b338 _public_6f0b338

PROC_DECLARE(0x6f0b300, internal_6f0b300, public_6f0b300);
extern "C" NAKED register_t __cdecl internal_6f0b300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad268 @0x6f0b302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad268
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_6f0b338
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x28], 0
        public_6f0b338 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb43f8
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f0b300)
    }
}

#undef public_6f0b338
