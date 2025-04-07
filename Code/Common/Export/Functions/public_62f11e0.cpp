#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f11e0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62f1217 _public_62f1217
#define public_62f121f _public_62f121f
#define public_62f1249 _public_62f1249

PROC_DECLARE(0x62f11e0, internal_62f11e0, public_62f11e0);
extern "C" NAKED register_t __cdecl internal_62f11e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fcae8
        mov dword ptr ss : [esp+0x10], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fcaec]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], eax
        je public_62f1217
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62f1217
        lea eax, ss:[esp]
        jmp public_62f121f
        public_62f1217 : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_62f121f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f1249
        push edx
        mov edx, dword ptr ds : [public_6399028]
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f122e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f1238*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        add esp, 8
        ret 
        public_62f1249 : nop
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f11e0)
    }
}

#undef public_62f1217
#undef public_62f121f
#undef public_62f1249
