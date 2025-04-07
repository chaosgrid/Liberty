#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_635d3e0);

#define public_635d409 _public_635d409
#define public_635d41a _public_635d41a
#define public_635d438 _public_635d438

PROC_DECLARE(0x635d3e0, internal_635d3e0, public_635d3e0);
extern "C" NAKED register_t __cdecl internal_635d3e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax*8+8]
        push edi
        push ecx
        call public_6343f70
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edi, eax
        lea eax, ds:[edx+edx+1]
        mov dword ptr ds : [esi], eax
        add esp, 4
        xor eax, eax
        test ecx, ecx
        jle public_635d41a
        public_635d409 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov dword ptr ds : [edi+eax*4], edx
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        jl public_635d409
        public_635d41a : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+0xC]
        cmp eax, ecx
        je public_635d438
        test eax, eax
        je public_635d438
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        public_635d438 : nop
        mov dword ptr ds : [esi+8], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x635d3e0)
    }
}

#undef public_635d409
#undef public_635d41a
#undef public_635d438
