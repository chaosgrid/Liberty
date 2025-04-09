#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42917a _public_42917a
#define public_4291af _public_4291af

PROC_DECLARE(0x429140, internal_429140, public_429140);
extern "C" NAKED register_t __cdecl internal_429140()
{
    __asm
    {
        push esi
        mov esi, ecx
        push esi
        mov dword ptr ds : [esi], offset public_5c9fac
        call dword ptr ds : [public_5c9fc0]
        test al, al
        je public_4291af
        test byte ptr ds : [esi+0xC], 4
        je public_42917a
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        test byte ptr ds : [esi+0xC], 4
        je public_42917a
        mov ecx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x94]
        public_42917a : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov edx, dword ptr ds : [public_667c74]
        add esp, 4
        dec edx
        mov dword ptr ds : [public_667c74], edx
        mov eax, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [esi+0x2C], 0
        call dword ptr ds : [eax+8]
        public_4291af : nop
        dec dword ptr ds : [public_667cbc]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x429140)
    }
}

#undef public_42917a
#undef public_4291af
