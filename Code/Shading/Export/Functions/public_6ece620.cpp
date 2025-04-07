#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4010);
CLANG_FORWARD_PROC_SYMBOL(public_6ecc850);
CLANG_FORWARD_PROC_SYMBOL(public_6ece620);
CLANG_FORWARD_PROC_SYMBOL(public_6ecebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ececb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ece650 _public_6ece650
#define public_6ece677 _public_6ece677
#define public_6ece6a3 _public_6ece6a3
#define public_6ece6a7 _public_6ece6a7
#define public_6ece6c7 _public_6ece6c7

PROC_DECLARE(0x6ece620, internal_6ece620, public_6ece620);
extern "C" NAKED register_t __cdecl internal_6ece620()
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
        je public_6ece6a3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ece6a3
        cmp ebx, eax
        jne public_6ece6a3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ece677
        lea esp, ss:[esp]
        public_6ece650 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ecebd0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0x10]
        call public_6ecc850
        push ebx
        call public_6ed0c50
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ece650
        public_6ece677 : nop
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
        public_6ece6a3 : nop
        cmp ecx, ebx
        je public_6ece6c7
        public_6ece6a7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ececb0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ec4010
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ece6a7
        public_6ece6c7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ece620)
    }
}

#undef public_6ece650
#undef public_6ece677
#undef public_6ece6a3
#undef public_6ece6a7
#undef public_6ece6c7
