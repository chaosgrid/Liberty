#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_622f23d _public_622f23d
#define public_622f259 _public_622f259

PROC_DECLARE(0x622f220, internal_622f220, public_622f220);
extern "C" NAKED register_t __cdecl internal_622f220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xEC7A290
        jne public_622f23d
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x6C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_622f23d : nop
        cmp eax, 0x3B76E6C
        jne public_622f259
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x8C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_622f259 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x622f220)
    }
}

#undef public_622f23d
#undef public_622f259
