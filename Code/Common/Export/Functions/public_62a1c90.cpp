#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282f90);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c90);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a1cc0 _public_62a1cc0
#define public_62a1cdf _public_62a1cdf
#define public_62a1d0b _public_62a1d0b
#define public_62a1d10 _public_62a1d10
#define public_62a1d30 _public_62a1d30

PROC_DECLARE(0x62a1c90, internal_62a1c90, public_62a1c90);
extern "C" NAKED register_t __cdecl internal_62a1c90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_62a1d0b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_62a1d0b
        cmp ebx, eax
        jne public_62a1d0b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62a1cdf
        lea esp, ss:[esp]
        public_62a1cc0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6282f90
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62a1cc0
        public_62a1cdf : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_62a1d0b : nop
        cmp ecx, ebx
        je public_62a1d30
        nop 
        public_62a1d10 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_63429f0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62be400
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_62a1d10
        public_62a1d30 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62a1c90)
    }
}

#undef public_62a1cc0
#undef public_62a1cdf
#undef public_62a1d0b
#undef public_62a1d10
#undef public_62a1d30
