#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f49b2c _public_6f49b2c
#define public_6f49b34 _public_6f49b34
#define public_6f49b40 _public_6f49b40

PROC_DECLARE(0x6f49b00, internal_6f49b00, public_6f49b00);
extern "C" NAKED register_t __cdecl internal_6f49b00()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov ecx, offset public_6fd0bbc
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0bc0]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f49b2c
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f49b2c
        lea eax, ss:[esp+0xC]
        jmp public_6f49b34
        public_6f49b2c : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_6f49b34 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop esi
        je public_6f49b40
        mov eax, dword ptr ds : [eax+0x10]
        pop ecx
        ret 
        public_6f49b40 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f49b00)
    }
}

#undef public_6f49b2c
#undef public_6f49b34
#undef public_6f49b40
