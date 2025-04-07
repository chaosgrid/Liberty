#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c310);
CLANG_FORWARD_PROC_SYMBOL(public_635c500);
CLANG_FORWARD_JUMP_SYMBOL(public_639827e);

#define public_635c536 _public_635c536

PROC_DECLARE(0x635c500, internal_635c500, public_635c500);
extern "C" NAKED register_t __cdecl internal_635c500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639827e @0x635c502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639827e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov ecx, dword ptr ds : [esi+0x170]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_635c536
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_635c536 : nop
        lea ecx, ds:[esi+0x144]
        mov dword ptr ds : [esi+0x170], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_635c310
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x635c500)
    }
}

#undef public_635c536
