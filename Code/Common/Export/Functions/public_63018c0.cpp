#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba290);
CLANG_FORWARD_PROC_SYMBOL(public_62ba6f0);
CLANG_FORWARD_PROC_SYMBOL(public_62bae60);
CLANG_FORWARD_PROC_SYMBOL(public_62bb590);
CLANG_FORWARD_PROC_SYMBOL(public_63018c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63018f0 _public_63018f0
#define public_6301917 _public_6301917
#define public_6301943 _public_6301943
#define public_6301947 _public_6301947
#define public_6301967 _public_6301967

PROC_DECLARE(0x63018c0, internal_63018c0, public_63018c0);
extern "C" NAKED register_t __cdecl internal_63018c0()
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
        je public_6301943
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6301943
        cmp ebx, eax
        jne public_6301943
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6301917
        lea esp, ss:[esp]
        public_63018f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62ba6f0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_62bb590
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_63018f0
        public_6301917 : nop
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
        public_6301943 : nop
        cmp ecx, ebx
        je public_6301967
        public_6301947 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_62bae60
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62ba290
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6301947
        public_6301967 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x63018c0)
    }
}

#undef public_63018f0
#undef public_6301917
#undef public_6301943
#undef public_6301947
#undef public_6301967
