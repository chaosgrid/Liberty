#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a7c80);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5301);

#define public_5a7cc0 _public_5a7cc0

PROC_DECLARE(0x5a7c80, internal_5a7c80, public_5a7c80);
extern "C" NAKED register_t __cdecl internal_5a7c80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5301 @0x5a7c82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5301
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_5a7cc0
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6420]
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], eax
        pop edi
        public_5a7cc0 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5a7c80)
    }
}

#undef public_5a7cc0
