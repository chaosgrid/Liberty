#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5501e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5501f7 _public_5501f7
#define public_550209 _public_550209
#define public_55021a _public_55021a
#define public_55023a _public_55023a

PROC_DECLARE(0x5501e0, internal_5501e0, public_5501e0);
extern "C" NAKED register_t __cdecl internal_5501e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0xEC]
        test al, al
        je public_55023a
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        xor edi, edi
        test eax, eax
        jle public_55021a
        public_5501f7 : nop
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+edi*4]
        test eax, eax
        je public_550209
        push eax
        call public_5b7e1d
        add esp, 4
        public_550209 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+edi*4], 0
        mov eax, dword ptr ds : [esi+0xC]
        inc edi
        cmp edi, eax
        jl public_5501f7
        public_55021a : nop
        mov edx, dword ptr ds : [esi]
        push edx
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        mov byte ptr ds : [esi+0xEC], 0
        pop edi
        public_55023a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5501e0)
    }
}

#undef public_5501f7
#undef public_550209
#undef public_55021a
#undef public_55023a
