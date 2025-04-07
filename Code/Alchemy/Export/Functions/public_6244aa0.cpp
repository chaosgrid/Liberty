#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244aa0);
CLANG_FORWARD_JUMP_SYMBOL(public_624aa81);

#define public_6244adc _public_6244adc

PROC_DECLARE(0x6244aa0, internal_6244aa0, public_6244aa0);
extern "C" NAKED register_t __cdecl internal_6244aa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624aa81 @0x6244aa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624aa81
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], ecx
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], 0
        je public_6244adc
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ds : [ecx], eax
        je public_6244adc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6244adc : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6244aa0)
    }
}

#undef public_6244adc
