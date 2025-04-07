#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d65f0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d6604 _public_62d6604
#define public_62d6606 _public_62d6606
#define public_62d6612 _public_62d6612
#define public_62d6641 _public_62d6641
#define public_62d6643 _public_62d6643

PROC_DECLARE(0x62d65f0, internal_62d65f0, public_62d65f0);
extern "C" NAKED register_t __cdecl internal_62d65f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x14]
        je public_62d6604
        add eax, 8
        jmp public_62d6606
        public_62d6604 : nop
        xor eax, eax
        public_62d6606 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62d6612
        push eax
        mov ecx, edi
        call public_6341610
        public_62d6612 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [esi+0x28], 0
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov esi, dword ptr ds : [edx+0xC]
        je public_62d6641
        lea ecx, ds:[eax-8]
        jmp public_62d6643
        public_62d6641 : nop
        xor ecx, ecx
        public_62d6643 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esi, 0x200
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62d65f0)
    }
}

#undef public_62d6604
#undef public_62d6606
#undef public_62d6612
#undef public_62d6641
#undef public_62d6643
