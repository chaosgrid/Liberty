#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aed0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f44893 _public_6f44893
#define public_6f4489b _public_6f4489b
#define public_6f448c7 _public_6f448c7
#define public_6f448cf _public_6f448cf
#define public_6f448f5 _public_6f448f5
#define public_6f448fe _public_6f448fe

PROC_DECLARE(0x6f44860, internal_6f44860, public_6f44860);
extern "C" NAKED register_t __cdecl internal_6f44860()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ebx, ecx
        lea edi, ds:[ebx+0x14]
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6f4aed0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6f44893
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f44893
        lea ecx, ss:[esp+0x18]
        jmp public_6f4489b
        public_6f44893 : nop
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x10]
        public_6f4489b : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        je public_6f448fe
        mov ebp, dword ptr ds : [ecx+0x10]
        lea edi, ds:[ebx+0x18]
        push edi
        mov ecx, esi
        call public_6f4af00
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6f448c7
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6f448c7
        lea eax, ss:[esp+0x18]
        jmp public_6f448cf
        public_6f448c7 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6f448cf : nop
        cmp dword ptr ds : [eax], esi
        je public_6f448fe
        mov eax, dword ptr ss : [ebp+0xD0]
        test eax, eax
        je public_6f448fe
        test ebx, ebx
        je public_6f448f5
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6f448f5 : nop
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f448fe : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f44860)
    }
}

#undef public_6f44893
#undef public_6f4489b
#undef public_6f448c7
#undef public_6f448cf
#undef public_6f448f5
#undef public_6f448fe
