#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564170);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1e99);

#define public_5641a7 _public_5641a7

PROC_DECLARE(0x564170, internal_564170, public_564170);
extern "C" NAKED register_t __cdecl internal_564170()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1e99 @0x564172*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1e99
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5e2210
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_5641a7
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_5641a7 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_5c6e50]
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x564170)
    }
}

#undef public_5641a7
