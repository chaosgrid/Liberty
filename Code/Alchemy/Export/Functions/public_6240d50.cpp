#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240d50);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624a79b);

#define public_6240d70 _public_6240d70
#define public_6240d72 _public_6240d72
#define public_6240da3 _public_6240da3
#define public_6240db7 _public_6240db7
#define public_6240ddc _public_6240ddc

PROC_DECLARE(0x6240d50, internal_6240d50, public_6240d50);
extern "C" NAKED register_t __cdecl internal_6240d50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a79b @0x6240d52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a79b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        test ecx, ecx
        push esi
        je public_6240d70
        lea esi, ds:[ecx+4]
        jmp public_6240d72
        public_6240d70 : nop
        xor esi, esi
        public_6240d72 : nop
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_6240da3
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6240da3
        push eax
        call public_62460e0
        add esp, 4
        public_6240da3 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6240db7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6240db7 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_6240ddc
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        je public_6240ddc
        push esi
        call public_62460e0
        add esp, 4
        public_6240ddc : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6240d50)
    }
}

#undef public_6240d70
#undef public_6240d72
#undef public_6240da3
#undef public_6240db7
#undef public_6240ddc
