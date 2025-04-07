#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f58080);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f580ac _public_6f580ac
#define public_6f580b4 _public_6f580b4
#define public_6f580c0 _public_6f580c0

PROC_DECLARE(0x6f58080, internal_6f58080, public_6f58080);
extern "C" NAKED register_t __cdecl internal_6f58080()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6fd0ddc
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0de0]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f580ac
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f580ac
        lea eax, ss:[esp+0xC]
        jmp public_6f580b4
        public_6f580ac : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6f580b4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_6f580c0
        add eax, 0x10
        pop ecx
        ret 
        public_6f580c0 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f58080)
    }
}

#undef public_6f580ac
#undef public_6f580b4
#undef public_6f580c0
