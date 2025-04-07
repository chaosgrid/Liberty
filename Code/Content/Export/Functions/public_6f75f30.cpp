#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f75f5c _public_6f75f5c
#define public_6f75f64 _public_6f75f64
#define public_6f75f70 _public_6f75f70

PROC_DECLARE(0x6f75f30, internal_6f75f30, public_6f75f30);
extern "C" NAKED register_t __cdecl internal_6f75f30()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6fd3a5c
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd3a60]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f75f5c
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f75f5c
        lea eax, ss:[esp+0xC]
        jmp public_6f75f64
        public_6f75f5c : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6f75f64 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_6f75f70
        add eax, 0x10
        pop ecx
        ret 
        public_6f75f70 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f75f30)
    }
}

#undef public_6f75f5c
#undef public_6f75f64
#undef public_6f75f70
