#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d6670);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d6687 _public_62d6687
#define public_62d6689 _public_62d6689
#define public_62d6695 _public_62d6695
#define public_62d66dc _public_62d66dc
#define public_62d66de _public_62d66de

PROC_DECLARE(0x62d6670, internal_62d6670, public_62d6670);
extern "C" NAKED register_t __cdecl internal_62d6670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        test eax, eax
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x14]
        je public_62d6687
        add eax, 8
        jmp public_62d6689
        public_62d6687 : nop
        xor eax, eax
        public_62d6689 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62d6695
        push eax
        mov ecx, edi
        call public_6341610
        public_62d6695 : nop
        lea eax, ds:[esi+0x1C]
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x28], edx
        mov esi, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62d66dc
        lea ecx, ds:[eax-8]
        jmp public_62d66de
        public_62d66dc : nop
        xor ecx, ecx
        public_62d66de : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esi, 0x200
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62d6670)
    }
}

#undef public_62d6687
#undef public_62d6689
#undef public_62d6695
#undef public_62d66dc
#undef public_62d66de
