#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4070);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b91b9);

#define public_437588 _public_437588
#define public_4375b5 _public_4375b5

PROC_DECLARE(0x437540, internal_437540, public_437540);
extern "C" NAKED register_t __cdecl internal_437540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b91b9 @0x437542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b91b9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x20]
        push esi
        push edi
        push eax
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c6100]
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ss : [esp+0x20], 0
        call public_4c4070
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi]
        add esp, 4
        cmp esi, edi
        je public_4375b5
        public_437588 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ecx
        jne public_437588
        mov edi, dword ptr ss : [esp+0xC]
        public_4375b5 : nop
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x437540)
    }
}

#undef public_437588
#undef public_4375b5
