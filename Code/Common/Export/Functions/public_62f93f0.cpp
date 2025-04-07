#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62f9427 _public_62f9427
#define public_62f942f _public_62f942f
#define public_62f9459 _public_62f9459

PROC_DECLARE(0x62f93f0, internal_62f93f0, public_62f93f0);
extern "C" NAKED register_t __cdecl internal_62f93f0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fcad4
        mov dword ptr ss : [esp+0x10], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fcad8]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], eax
        je public_62f9427
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62f9427
        lea eax, ss:[esp]
        jmp public_62f942f
        public_62f9427 : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_62f942f : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f9459
        push edx
        mov edx, dword ptr ds : [public_6399028]
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f943e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f9448*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        add esp, 8
        ret 
        public_62f9459 : nop
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f93f0)
    }
}

#undef public_62f9427
#undef public_62f942f
#undef public_62f9459
