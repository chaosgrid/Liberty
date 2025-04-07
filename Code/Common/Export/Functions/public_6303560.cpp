#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63034f0);
CLANG_FORWARD_PROC_SYMBOL(public_6303550);

#define public_6303572 _public_6303572
#define public_63035a0 _public_63035a0

PROC_DECLARE(0x6303560, internal_6303560, public_6303560);
extern "C" NAKED register_t __cdecl internal_6303560()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], 1
        or ecx, 0xFFFFFFFF
        public_6303572 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_63035a0
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset _public_6303550 @0x6303592*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6303550
        push esi
        call public_63034f0
        add esp, 0xC
        public_63035a0 : nop
        cmp esi, 0xFFFFFFFF
        mov ecx, esi
        jne public_6303572
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6303560)
    }
}

#undef public_6303572
#undef public_63035a0
