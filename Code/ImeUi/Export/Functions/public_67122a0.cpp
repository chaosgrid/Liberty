#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67122a0);

#define public_67122ab _public_67122ab
#define public_67122c2 _public_67122c2
#define public_67122fe _public_67122fe

PROC_DECLARE(0x67122a0, internal_67122a0, public_67122a0);
extern "C" NAKED register_t __cdecl internal_67122a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jne public_67122ab
        xor eax, eax
        ret 
        public_67122ab : nop
        mov eax, dword ptr ds : [public_6719040]
        inc eax
        cmp eax, 4
        mov dword ptr ds : [public_6719040], eax
        jne public_67122c2
        xor eax, eax
        mov dword ptr ds : [public_6719040], eax
        public_67122c2 : nop
        shl eax, 0xB
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        add eax, offset public_67193e8
        push 0x800
        push eax
        push esi
        push ecx
        call dword ptr ds : [public_6719384]
        test eax, eax
        jne public_67122fe
        mov eax, dword ptr ds : [public_6719040]
        push esi
        shl eax, 0xB
        add eax, offset public_67193e8
/*FIXUP push offset public_6719044 @0x67122ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719044
        push eax
        call dword ptr ds : [public_671938c]
        add esp, 0xC
        public_67122fe : nop
        mov eax, dword ptr ds : [public_6719040]
        pop esi
        shl eax, 0xB
        add eax, offset public_67193e8
        ret 
        UNREACHABLE_TRAP(0x67122a0)
    }
}

#undef public_67122ab
#undef public_67122c2
#undef public_67122fe
