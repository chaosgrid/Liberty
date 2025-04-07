#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208bc0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_6247676);

#define public_6208c17 _public_6208c17
#define public_6208c19 _public_6208c19

PROC_DECLARE(0x6208bc0, internal_6208bc0, public_6208bc0);
extern "C" NAKED register_t __cdecl internal_6208bc0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6247676 @0x6208bc8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247676
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push esi
        push 0x2C
        call public_624612c
        add esp, 4
        or ecx, 0xFFFFFFFF
        test eax, eax
        je public_6208c17
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], offset public_624bc34
        mov dword ptr ds : [eax+0x18], 0
        mov dword ptr ds : [eax+0xC], 0
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax], offset public_624bbf0
        mov dword ptr ds : [eax+0x28], 1
        mov esi, eax
        jmp public_6208c19
        public_6208c17 : nop
        xor esi, esi
        public_6208c19 : nop
        mov eax, dword ptr ds : [esi]
        push 4
        push esi
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x14]
        push edx
        push 0
        push esi
        call dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6208bc0)
    }
}

#undef public_6208c17
#undef public_6208c19
