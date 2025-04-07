#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_528d00);
CLANG_FORWARD_JUMP_SYMBOL(public_5c029b);

#define public_528d38 _public_528d38
#define public_528d53 _public_528d53

PROC_DECLARE(0x528d00, internal_528d00, public_528d00);
extern "C" NAKED register_t __cdecl internal_528d00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c029b @0x528d02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c029b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_528d38
        call public_4f7a90
        mov dword ptr ds : [esi+8], 0
        public_528d38 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        je public_528d53
        call public_4f7a90
        mov dword ptr ds : [esi+4], 0
        public_528d53 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x528d00)
    }
}

#undef public_528d38
#undef public_528d53
