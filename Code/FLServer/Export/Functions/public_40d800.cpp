#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4066c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_JUMP_SYMBOL(public_41a1fa);

#define public_40d855 _public_40d855

PROC_DECLARE(0x40d800, internal_40d800, public_40d800);
extern "C" NAKED register_t __cdecl internal_40d800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a1fa @0x40d802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a1fa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x84
        mov esi, ecx
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_40d855
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push ecx
        mov ecx, eax
        call public_4066c0
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_40d855 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x40d800)
    }
}

#undef public_40d855
