#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428680);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);

#define public_545d03 _public_545d03
#define public_545d3a _public_545d3a
#define public_545d5d _public_545d5d
#define public_545d69 _public_545d69
#define public_545d77 _public_545d77

PROC_DECLARE(0x545cc0, internal_545cc0, public_545cc0);
extern "C" NAKED register_t __cdecl internal_545cc0()
{
    __asm
    {
        push edi
        mov edi, ecx
        fld dword ptr ds : [edi+0x150]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_545d77
        mov eax, dword ptr ds : [edi+0x148]
        test eax, eax
        jne public_545d03
        mov eax, dword ptr ds : [public_5c6afc]
        push eax
        call public_42ae40
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0x148], eax
        je public_545d03
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_545d03 : nop
        mov ecx, dword ptr ds : [edi+0x148]
        test ecx, ecx
        push esi
        je public_545d69
        mov eax, dword ptr ds : [edi+0x14C]
        test eax, eax
        lea esi, ds:[edi+0x14C]
        jne public_545d3a
        push eax
        push esi
        push eax
        push ecx
        call public_428680
        mov eax, dword ptr ds : [public_5c6af8]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        pop esi
        mov dword ptr ds : [edi+0x150], ecx
        pop edi
        ret 
        public_545d3a : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x14]
        test al, al
        mov ecx, dword ptr ds : [esi]
        push 0
        je public_545d5d
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x64]
        mov eax, dword ptr ds : [public_5c6af8]
        mov ecx, dword ptr ds : [eax]
        pop esi
        mov dword ptr ds : [edi+0x150], ecx
        pop edi
        ret 
        public_545d5d : nop
        mov edx, dword ptr ds : [edi+0x148]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x58]
        public_545d69 : nop
        mov eax, dword ptr ds : [public_5c6af8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi+0x150], ecx
        pop esi
        public_545d77 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x545cc0)
    }
}

#undef public_545d03
#undef public_545d3a
#undef public_545d5d
#undef public_545d69
#undef public_545d77
