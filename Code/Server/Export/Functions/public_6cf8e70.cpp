#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf8ec2 _public_6cf8ec2
#define public_6cf8ec4 _public_6cf8ec4

PROC_DECLARE(0x6cf8e70, internal_6cf8e70, public_6cf8e70);
extern "C" NAKED register_t __cdecl internal_6cf8e70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf8ec4
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf8ec2
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x1C]
        push eax
        call dword ptr ds : [public_6d642f0]
        add esp, 0x10
        neg al
        pop esi
        sbb eax, eax
        and eax, 3
        add eax, 0xFFFFFFFD
        ret 
        public_6cf8ec2 : nop
        mov eax, esi
        public_6cf8ec4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf8e70)
    }
}

#undef public_6cf8ec2
#undef public_6cf8ec4
