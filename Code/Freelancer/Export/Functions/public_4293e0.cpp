#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4293e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_429412 _public_429412
#define public_429447 _public_429447

PROC_DECLARE(0x4293e0, internal_4293e0, public_4293e0);
extern "C" NAKED register_t __cdecl internal_4293e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x14]
        test al, al
        je public_429447
        test byte ptr ds : [esi+0xC], 4
        je public_429412
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        test byte ptr ds : [esi+0xC], 4
        je public_429412
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x94]
        public_429412 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_667c74]
        add esp, 4
        dec ecx
        mov dword ptr ds : [public_667c74], ecx
        mov edx, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [esi+0x2C], 0
        call dword ptr ds : [edx+8]
        public_429447 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4293e0)
    }
}

#undef public_429412
#undef public_429447
