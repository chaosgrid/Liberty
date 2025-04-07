#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222000);

#define public_6220792 _public_6220792
#define public_622079a _public_622079a
#define public_62207ac _public_62207ac

PROC_DECLARE(0x6220760, internal_6220760, public_6220760);
extern "C" NAKED register_t __cdecl internal_6220760()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push eax
        lea esi, ds:[edi+4]
        mov ecx, esi
        call public_6222000
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6220792
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jb public_6220792
        lea eax, ss:[esp+0x10]
        jmp public_622079a
        public_6220792 : nop
        mov dword ptr ss : [esp+8], esi
        lea eax, ss:[esp+8]
        public_622079a : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+8]
        pop edi
        cmp eax, ecx
        pop esi
        jne public_62207ac
        or eax, 0xFFFFFFFF
        pop ecx
        ret 0xC
        public_62207ac : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x18]
        push eax
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6220760)
    }
}

#undef public_6220792
#undef public_622079a
#undef public_62207ac
