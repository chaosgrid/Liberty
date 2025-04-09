#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43bbe0);

#define public_43bc10 _public_43bc10
#define public_43bc37 _public_43bc37
#define public_43bc41 _public_43bc41
#define public_43bc55 _public_43bc55

PROC_DECLARE(0x43bbe0, internal_43bbe0, public_43bbe0);
extern "C" NAKED register_t __cdecl internal_43bbe0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0xC], eax
        call public_432240
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ecx
        pop esi
        je public_43bc10
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43bc37
        public_43bc10 : nop
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x100
/*FIXUP push offset public_5caf30 @0x43bc20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caf78 @0x43bc2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf78
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43bc37 : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_43bc41
        add esp, 8
        ret 
        public_43bc41 : nop
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_5c6090]
        add esp, 4
        test eax, eax
        jne public_43bc55
        add esp, 8
        ret 
        public_43bc55 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x43bbe0)
    }
}

#undef public_43bc10
#undef public_43bc37
#undef public_43bc41
#undef public_43bc55
