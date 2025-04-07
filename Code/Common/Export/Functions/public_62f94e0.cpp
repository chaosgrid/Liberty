#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62f950f _public_62f950f
#define public_62f9517 _public_62f9517
#define public_62f9524 _public_62f9524

PROC_DECLARE(0x62f94e0, internal_62f94e0, public_62f94e0);
extern "C" NAKED register_t __cdecl internal_62f94e0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_63fcb0c
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fcb10]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_62f950f
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62f950f
        lea eax, ss:[esp]
        jmp public_62f9517
        public_62f950f : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_62f9517 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f9524
        xor ax, ax
        add esp, 8
        ret 
        public_62f9524 : nop
        mov ax, word ptr ds : [eax+0x10]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62f94e0)
    }
}

#undef public_62f950f
#undef public_62f9517
#undef public_62f9524
