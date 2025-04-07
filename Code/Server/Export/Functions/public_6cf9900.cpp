#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9993 _public_6cf9993
#define public_6cf999a _public_6cf999a

PROC_DECLARE(0x6cf9900, internal_6cf9900, public_6cf9900);
extern "C" NAKED register_t __cdecl internal_6cf9900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, 0xFFFFFFFE
        je public_6cf999a
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf999a
        add eax, 0xC
        test eax, eax
        je public_6cf999a
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf999a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cf999a
        mov edx, dword ptr ds : [eax+0x88]
        mov eax, dword ptr ds : [edx+0x88]
        test eax, eax
        je public_6cf9993
        mov ecx, dword ptr ds : [edx+0x8C]
        sub ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        sar ecx, 4
        cmp eax, ecx
        jae public_6cf9993
        mov ecx, dword ptr ds : [edx+0x88]
        shl eax, 4
        add eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov edx, dword ptr ds : [esi+4]
        push edx
        push 0x20
        push edi
        call dword ptr ds : [public_6d644d0]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0xC
        mov dword ptr ds : [edi+0x20], eax
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6cf9993 : nop
        mov eax, 0xFFFFFFFD
        pop esi
        ret 
        public_6cf999a : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf9900)
    }
}

#undef public_6cf9993
#undef public_6cf999a
