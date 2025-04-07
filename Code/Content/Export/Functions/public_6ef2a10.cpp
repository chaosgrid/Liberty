#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2610);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2a10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6ef2a3f _public_6ef2a3f
#define public_6ef2a47 _public_6ef2a47
#define public_6ef2a5e _public_6ef2a5e

PROC_DECLARE(0x6ef2a10, internal_6ef2a10, public_6ef2a10);
extern "C" NAKED register_t __cdecl internal_6ef2a10()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov ecx, offset public_6fcf260
        xor bl, bl
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fcf264]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6ef2a3f
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6ef2a3f
        lea eax, ss:[esp+0x10]
        jmp public_6ef2a47
        public_6ef2a3f : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_6ef2a47 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6ef2a5e
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ds:[eax+0x10]
        call public_6ef2610
        pop esi
        pop ebx
        pop ecx
        ret 
        public_6ef2a5e : nop
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef2a10)
    }
}

#undef public_6ef2a3f
#undef public_6ef2a47
#undef public_6ef2a5e
