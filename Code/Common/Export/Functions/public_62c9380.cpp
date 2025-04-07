#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c939a _public_62c939a

PROC_DECLARE(0x62c9380, internal_62c9380, public_62c9380);
extern "C" NAKED register_t __cdecl internal_62c9380()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x28], 2
        jne public_62c939a
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        lea ecx, ds:[esi+0x30]
        je public_62c939a
        push 0
        call public_6341610
        public_62c939a : nop
        mov eax, dword ptr ds : [esi+0xE0]
        lea ecx, ds:[esi+0xE0]
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x1A0]
        lea ecx, ds:[esi+0x1A0]
        call dword ptr ds : [edx+0x10]
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62c9380)
    }
}

#undef public_62c939a
