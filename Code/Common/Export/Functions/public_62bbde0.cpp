#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628e250);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62bbe14 _public_62bbe14
#define public_62bbe16 _public_62bbe16
#define public_62bbe51 _public_62bbe51

PROC_DECLARE(0x62bbde0, internal_62bbde0, public_62bbde0);
extern "C" NAKED register_t __cdecl internal_62bbde0()
{
    __asm
    {
        push ecx
        push esi
        push 0x14
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_62bbe14
        mov ecx, 0xBF800000
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0x4B189680
        mov byte ptr ds : [eax+8], 0
        mov byte ptr ds : [eax+9], 0
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        jmp public_62bbe16
        public_62bbe14 : nop
        xor eax, eax
        public_62bbe16 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+4], eax
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ds:[esi+4]
        push 1
        push edx
        call public_628e250
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        mov eax, dword ptr ds : [eax-4]
        mov dword ptr ds : [eax], ecx
        je public_62bbe51
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [edi]
        fstp st(0)
        pop edi
        public_62bbe51 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62bbde0)
    }
}

#undef public_62bbe14
#undef public_62bbe16
#undef public_62bbe51
