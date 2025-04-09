#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_4c4dcf _public_4c4dcf
#define public_4c4dd7 _public_4c4dd7
#define public_4c4dec _public_4c4dec

PROC_DECLARE(0x4c4da0, internal_4c4da0, public_4c4da0);
extern "C" NAKED register_t __cdecl internal_4c4da0()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, offset public_673320
        call public_52c7a0
        mov ecx, dword ptr ds : [public_673324]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_4c4dcf
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_4c4dcf
        lea eax, ss:[esp]
        jmp public_4c4dd7
        public_4c4dcf : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_4c4dd7 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_4c4dec
        mov al, byte ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], al
        mov al, 1
        add esp, 8
        ret 
        public_4c4dec : nop
        xor al, al
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4c4da0)
    }
}

#undef public_4c4dcf
#undef public_4c4dd7
#undef public_4c4dec
