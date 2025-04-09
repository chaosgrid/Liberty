#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_45317b _public_45317b
#define public_4531d2 _public_4531d2

PROC_DECLARE(0x453150, internal_453150, public_453150);
extern "C" NAKED register_t __cdecl internal_453150()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        mov ebx, dword ptr ss : [esp+0x44]
        push esi
        mov esi, dword ptr ss : [esp+0x4C]
        push edi
        lea edi, ds:[ebx+0x68]
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ds : [public_66d27c]
        test eax, eax
        jne public_45317b
        call public_5b73e0
        mov dword ptr ds : [public_66d27c], eax
        public_45317b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[ebx+0x8C]
        push edx
        lea edx, ds:[ebx+0x68]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x28], edx
        call dword ptr ds : [public_5c6280]
        mov edx, dword ptr ds : [ebx+0x60]
        mov ecx, dword ptr ds : [edx]
        add esp, 8
        test ecx, ecx
        pop edi
        pop esi
        pop ebx
        je public_4531d2
        lea eax, ss:[esp+0x18]
        push eax
        call public_410f60
        public_4531d2 : nop
        xor eax, eax
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x453150)
    }
}

#undef public_45317b
#undef public_4531d2
