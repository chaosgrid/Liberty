#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_5946f0);
CLANG_FORWARD_PROC_SYMBOL(public_594900);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_594720 _public_594720
#define public_59473f _public_59473f
#define public_59476b _public_59476b
#define public_594770 _public_594770
#define public_594790 _public_594790

PROC_DECLARE(0x5946f0, internal_5946f0, public_5946f0);
extern "C" NAKED register_t __cdecl internal_5946f0()
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
        je public_59476b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_59476b
        cmp ebx, eax
        jne public_59476b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_59473f
        lea esp, ss:[esp]
        public_594720 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_594900
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_594720
        public_59473f : nop
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
        public_59476b : nop
        cmp ecx, ebx
        je public_594790
        nop 
        public_594770 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_595150
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46dfb0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_594770
        public_594790 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5946f0)
    }
}

#undef public_594720
#undef public_59473f
#undef public_59476b
#undef public_594770
#undef public_594790
