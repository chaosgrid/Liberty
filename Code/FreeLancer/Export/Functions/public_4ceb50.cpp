#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb50);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdc18);

#define public_4ceb8d _public_4ceb8d

PROC_DECLARE(0x4ceb50, internal_4ceb50, public_4ceb50);
extern "C" NAKED register_t __cdecl internal_4ceb50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdc18 @0x4ceb52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdc18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        lea ecx, ds:[esi+0xC0]
        mov dword ptr ss : [esp+0x10], 0
        je public_4ceb8d
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4ceb8d : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5c8944
        call public_401e90
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4ceb50)
    }
}

#undef public_4ceb8d
