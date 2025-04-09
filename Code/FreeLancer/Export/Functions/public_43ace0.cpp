#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_43ace0);

#define public_43ad10 _public_43ad10
#define public_43ad37 _public_43ad37
#define public_43ad42 _public_43ad42

PROC_DECLARE(0x43ace0, internal_43ace0, public_43ace0);
extern "C" NAKED register_t __cdecl internal_43ace0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        call public_432240
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+4]
        cmp eax, ecx
        pop esi
        je public_43ad10
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43ad37
        nop 
        public_43ad10 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43ad20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43ad2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43ad37 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43ad42
        mov byte ptr ds : [eax+0x14], 1
        public_43ad42 : nop
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x43ace0)
    }
}

#undef public_43ad10
#undef public_43ad37
#undef public_43ad42
