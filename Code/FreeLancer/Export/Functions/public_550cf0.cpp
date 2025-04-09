#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_550cf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_550d00 _public_550d00
#define public_550d12 _public_550d12
#define public_550d23 _public_550d23

PROC_DECLARE(0x550cf0, internal_550cf0, public_550cf0);
extern "C" NAKED register_t __cdecl internal_550cf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        xor edi, edi
        test eax, eax
        jle public_550d23
        lea ecx, ds:[ecx]
        public_550d00 : nop
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+edi*4]
        test eax, eax
        je public_550d12
        push eax
        call public_5b7e1d
        add esp, 4
        public_550d12 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+edi*4], 0
        mov eax, dword ptr ds : [esi+0xC]
        inc edi
        cmp edi, eax
        jl public_550d00
        public_550d23 : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_5b7e1d
        add esp, 4
        pop edi
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x550cf0)
    }
}

#undef public_550d00
#undef public_550d12
#undef public_550d23
