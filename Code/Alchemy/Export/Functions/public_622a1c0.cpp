#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a1c0);

#define public_622a1d4 _public_622a1d4
#define public_622a1de _public_622a1de
#define public_622a1e2 _public_622a1e2
#define public_622a1e7 _public_622a1e7

PROC_DECLARE(0x622a1c0, internal_622a1c0, public_622a1c0);
extern "C" NAKED register_t __cdecl internal_622a1c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_622a1e7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_622a1d4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_622a1de
        mov eax, dword ptr ds : [eax+8]
        jmp public_622a1e2
        public_622a1de : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_622a1e2 : nop
        cmp eax, ecx
        jne public_622a1d4
        pop esi
        public_622a1e7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x622a1c0)
    }
}

#undef public_622a1d4
#undef public_622a1de
#undef public_622a1e2
#undef public_622a1e7
