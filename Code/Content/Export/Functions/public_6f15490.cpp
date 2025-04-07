#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15490);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);

#define public_6f154a7 _public_6f154a7
#define public_6f154b4 _public_6f154b4
#define public_6f154e0 _public_6f154e0
#define public_6f154f0 _public_6f154f0
#define public_6f15512 _public_6f15512
#define public_6f1552c _public_6f1552c
#define public_6f15533 _public_6f15533
#define public_6f1553e _public_6f1553e
#define public_6f1554d _public_6f1554d
#define public_6f1554f _public_6f1554f

PROC_DECLARE(0x6f15490, internal_6f15490, public_6f15490);
extern "C" NAKED register_t __cdecl internal_6f15490()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x9C]
        push ebp
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        push esi
        push edi
        je public_6f1554d
        public_6f154a7 : nop
        mov eax, dword ptr ss : [ebp+0x3C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f1553e
        public_6f154b4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 4
        push eax
        lea ecx, ds:[edi+8]
        call dword ptr ds : [public_6fb3074]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f15533
        mov eax, dword ptr ds : [edi+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f15533
        lea esp, ss:[esp]
        public_6f154e0 : nop
        mov ecx, dword ptr ds : [ebx+0xA8]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        lea esp, ss:[esp]
        public_6f154f0 : nop
        cmp eax, dword ptr ds : [ebx+0xA8]
        je public_6f1552c
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, dword ptr ds : [esi+8]
        je public_6f15512
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6f154f0
        public_6f15512 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6f1552c
        mov ecx, dword ptr ds : [eax+0x14C]
        test ecx, ecx
        je public_6f1554f
        cmp dword ptr ds : [eax+0x154], 0xFFFFFFFF
        je public_6f1554f
        public_6f1552c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x18]
        jne public_6f154e0
        public_6f15533 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0x3C]
        jne public_6f154b4
        public_6f1553e : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ebx+0x9C]
        jne public_6f154a7
        public_6f1554d : nop
        xor eax, eax
        public_6f1554f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f15490)
    }
}

#undef public_6f154a7
#undef public_6f154b4
#undef public_6f154e0
#undef public_6f154f0
#undef public_6f15512
#undef public_6f1552c
#undef public_6f15533
#undef public_6f1553e
#undef public_6f1554d
#undef public_6f1554f
