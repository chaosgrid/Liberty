#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f511e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53160);
CLANG_FORWARD_PROC_SYMBOL(public_6f531e0);

#define public_6f53217 _public_6f53217

PROC_DECLARE(0x6f531e0, internal_6f531e0, public_6f531e0);
extern "C" NAKED register_t __cdecl internal_6f531e0()
{
    __asm
    {
        sub esp, 0x84
        push esi
        mov esi, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [esi+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x9C]
        cmp edi, eax
        jne public_6f53217
        mov eax, dword ptr ss : [esp+0x94]
        push eax
        push esi
        call public_6f53160
        add esp, 8
        pop edi
        pop esi
        add esp, 0x84
        ret 
        public_6f53217 : nop
        mov edx, dword ptr ss : [esp+0x94]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        call public_6f511e0
        mov ecx, dword ptr ss : [esp+0xA0]
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        call public_6f511e0
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x44]
/*FIXUP push offset public_6f61274 @0x6f5324a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61274
        push ecx
        call dword ptr ds : [public_6f5a06c]
        lea edx, ss:[esp+0x4C]
        push edx
        push esi
        call public_6f511c0
        add esp, 0x2C
        pop edi
        pop esi
        add esp, 0x84
        ret 
        UNREACHABLE_TRAP(0x6f531e0)
    }
}

#undef public_6f53217
