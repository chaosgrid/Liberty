#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d280);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf188);

#define public_6f4d2bb _public_6f4d2bb

PROC_DECLARE(0x6f4d280, internal_6f4d280, public_6f4d280);
extern "C" NAKED register_t __cdecl internal_6f4d280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf188 @0x6f4d282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf188
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6f4d2bb
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], 0
        public_6f4d2bb : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb43f8
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4d280)
    }
}

#undef public_6f4d2bb
