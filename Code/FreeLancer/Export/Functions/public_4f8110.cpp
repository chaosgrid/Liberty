#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8110);

#define public_4f8132 _public_4f8132
#define public_4f8157 _public_4f8157

PROC_DECLARE(0x4f8110, internal_4f8110, public_4f8110);
extern "C" NAKED register_t __cdecl internal_4f8110()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x6C]
        test eax, eax
        je public_4f8132
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [esi+0x6C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x6C], 0
        public_4f8132 : nop
        mov ecx, dword ptr ds : [esi+0x70]
        test ecx, ecx
        je public_4f8157
        mov eax, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ds : [esi+0x70]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x70], 0
        public_4f8157 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4f8110)
    }
}

#undef public_4f8132
#undef public_4f8157
