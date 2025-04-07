#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6eac0ec _public_6eac0ec
#define public_6eac0f4 _public_6eac0f4
#define public_6eac100 _public_6eac100

PROC_DECLARE(0x6eac0c0, internal_6eac0c0, public_6eac0c0);
extern "C" NAKED register_t __cdecl internal_6eac0c0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6fcee70
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fcee74]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6eac0ec
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6eac0ec
        lea eax, ss:[esp+0xC]
        jmp public_6eac0f4
        public_6eac0ec : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6eac0f4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_6eac100
        add eax, 0x10
        pop ecx
        ret 
        public_6eac100 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6eac0c0)
    }
}

#undef public_6eac0ec
#undef public_6eac0f4
#undef public_6eac100
