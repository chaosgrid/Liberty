#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414600);
CLANG_FORWARD_PROC_SYMBOL(public_414650);
CLANG_FORWARD_PROC_SYMBOL(public_414aa0);
CLANG_FORWARD_PROC_SYMBOL(public_414e80);
CLANG_FORWARD_PROC_SYMBOL(public_4153b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_414680 _public_414680
#define public_4146a7 _public_4146a7
#define public_4146d3 _public_4146d3
#define public_4146d7 _public_4146d7
#define public_4146f7 _public_4146f7

PROC_DECLARE(0x414650, internal_414650, public_414650);
extern "C" NAKED register_t __cdecl internal_414650()
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
        je public_4146d3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_4146d3
        cmp ebx, eax
        jne public_4146d3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4146a7
        lea esp, ss:[esp]
        public_414680 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_414e80
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_414600
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_414680
        public_4146a7 : nop
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
        public_4146d3 : nop
        cmp ecx, ebx
        je public_4146f7
        public_4146d7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_4153b0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_414aa0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_4146d7
        public_4146f7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x414650)
    }
}

#undef public_414680
#undef public_4146a7
#undef public_4146d3
#undef public_4146d7
#undef public_4146f7
