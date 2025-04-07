#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f92e80);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0ba9);

#define public_6f92eaa _public_6f92eaa

PROC_DECLARE(0x6f92e80, internal_6f92e80, public_6f92e80);
extern "C" NAKED register_t __cdecl internal_6f92e80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb0ba9 @0x6f92e82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0ba9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        xor ecx, ecx
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f92eaa
        lea ecx, ds:[esi+0x10]
        public_6f92eaa : nop
        call dword ptr ds : [public_6fb325c]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3250]
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f92e80)
    }
}

#undef public_6f92eaa
