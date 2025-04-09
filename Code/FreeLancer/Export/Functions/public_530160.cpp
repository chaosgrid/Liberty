#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_530160);
CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0618);

#define public_5301ac _public_5301ac

PROC_DECLARE(0x530160, internal_530160, public_530160);
extern "C" NAKED register_t __cdecl internal_530160()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0618 @0x530162*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0618
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi-0xC], offset public_5dddd4
        mov dword ptr ds : [esi-8], offset public_5ddd54
        mov dword ptr ds : [esi], offset public_5ddd4c
        mov eax, dword ptr ds : [esi+0xA8]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_5301ac
        push eax
        call public_536170
        add esp, 4
        public_5301ac : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_5394b0
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x530160)
    }
}

#undef public_5301ac
