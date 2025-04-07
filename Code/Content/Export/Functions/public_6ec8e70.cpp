#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);

#define public_6ec8e9d _public_6ec8e9d
#define public_6ec8ec5 _public_6ec8ec5
#define public_6ec8ed4 _public_6ec8ed4
#define public_6ec8ee1 _public_6ec8ee1
#define public_6ec8efa _public_6ec8efa
#define public_6ec8f12 _public_6ec8f12

PROC_DECLARE(0x6ec8e70, internal_6ec8e70, public_6ec8e70);
extern "C" NAKED register_t __cdecl internal_6ec8e70()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15710
        test eax, eax
        je public_6ec8e9d
        fld dword ptr ds : [esi+0x40]
        pop edi
        fstp dword ptr ds : [eax+0x1BC]
        fld dword ptr ds : [esi+0x40]
        pop esi
        fstp dword ptr ds : [eax+0x1C8]
        mov al, 1
        pop ecx
        ret 
        public_6ec8e9d : nop
        lea ecx, ds:[esi+0x10]
        push ecx
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+0xA8]
        mov edi, eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], eax
        mov edx, dword ptr ds : [ecx+0xA8]
        add esp, 4
        cmp eax, edx
        je public_6ec8f12
        public_6ec8ec5 : nop
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [edx+0x180]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6ec8efa
        public_6ec8ed4 : nop
        cmp dword ptr ds : [eax+8], edi
        je public_6ec8ee1
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6ec8ed4
        jmp public_6ec8efa
        public_6ec8ee1 : nop
        fld dword ptr ds : [esi+0x40]
        fstp dword ptr ds : [edx+0x1BC]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [ecx+0x1C8]
        public_6ec8efa : nop
        lea ecx, ss:[esp+8]
        call public_6f1fa00
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [edx+0xA8]
        jne public_6ec8ec5
        public_6ec8f12 : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ec8e70)
    }
}

#undef public_6ec8e9d
#undef public_6ec8ec5
#undef public_6ec8ed4
#undef public_6ec8ee1
#undef public_6ec8efa
#undef public_6ec8f12
