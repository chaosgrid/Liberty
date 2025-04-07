#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0570);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabf5f);

#define public_6ef05ab _public_6ef05ab
#define public_6ef05b3 _public_6ef05b3

PROC_DECLARE(0x6ef0570, internal_6ef0570, public_6ef0570);
extern "C" NAKED register_t __cdecl internal_6ef0570()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fabf5f @0x6ef0572*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabf5f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x10], 1
        call dword ptr ds : [public_6fb3034]
        test esi, esi
        je public_6ef05ab
        mov dword ptr ds : [esi+4], offset public_6fb43f8
        jmp public_6ef05b3
        public_6ef05ab : nop
        xor eax, eax
        mov dword ptr ds : [eax], offset public_6fb43f8
        public_6ef05b3 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb4338
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef0570)
    }
}

#undef public_6ef05ab
#undef public_6ef05b3
