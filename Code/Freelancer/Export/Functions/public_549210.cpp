#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_549210);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_JUMP_SYMBOL(public_5c11b0);

#define public_549241 _public_549241
#define public_549243 _public_549243
#define public_549268 _public_549268

PROC_DECLARE(0x549210, internal_549210, public_549210);
extern "C" NAKED register_t __cdecl internal_549210()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c11b0 @0x549212*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c11b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_549241
        lea ecx, ds:[esi+0xF8]
        jmp public_549243
        public_549241 : nop
        xor ecx, ecx
        public_549243 : nop
        call public_576010
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        lea ecx, ds:[esi+0xC0]
        mov dword ptr ss : [esp+0x10], 1
        je public_549268
        push 0
        call dword ptr ds : [public_5c62a8]
        public_549268 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5c8944
        call public_401e90
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x549210)
    }
}

#undef public_549241
#undef public_549243
#undef public_549268
