#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);

#define public_622a504 _public_622a504
#define public_622a50e _public_622a50e
#define public_622a512 _public_622a512
#define public_622a517 _public_622a517

PROC_DECLARE(0x622a4f0, internal_622a4f0, public_622a4f0);
extern "C" NAKED register_t __cdecl internal_622a4f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ecx
        je public_622a517
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_622a504 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_622a50e
        mov edx, dword ptr ds : [edx+8]
        jmp public_622a512
        public_622a50e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_622a512 : nop
        cmp edx, ecx
        jne public_622a504
        pop esi
        public_622a517 : nop
        ret 4
        UNREACHABLE_TRAP(0x622a4f0)
    }
}

#undef public_622a504
#undef public_622a50e
#undef public_622a512
#undef public_622a517
