#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5620);
CLANG_FORWARD_PROC_SYMBOL(public_4f5c20);
CLANG_FORWARD_PROC_SYMBOL(public_4f6190);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f61a1 _public_4f61a1
#define public_4f61a9 _public_4f61a9
#define public_4f61b0 _public_4f61b0
#define public_4f61ca _public_4f61ca
#define public_4f61cf _public_4f61cf
#define public_4f61e0 _public_4f61e0
#define public_4f61ee _public_4f61ee

PROC_DECLARE(0x4f6190, internal_4f6190, public_4f6190);
extern "C" NAKED register_t __cdecl internal_4f6190()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_4f61a1
        xor ebp, ebp
        jmp public_4f61a9
        public_4f61a1 : nop
        mov ebp, dword ptr ds : [edi+0x10]
        sub ebp, eax
        sar ebp, 2
        public_4f61a9 : nop
        xor ebx, ebx
        test ebp, ebp
        jle public_4f61cf
        nop 
        public_4f61b0 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax+ebx*4]
        test esi, esi
        je public_4f61ca
        mov ecx, esi
        call public_4e5620
        push esi
        call public_5b7e1d
        add esp, 4
        public_4f61ca : nop
        inc ebx
        cmp ebx, ebp
        jl public_4f61b0
        public_4f61cf : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, edx
        cmp eax, edx
        je public_4f61ee
        nop 
        lea esp, ss:[esp]
        public_4f61e0 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_4f61e0
        public_4f61ee : nop
        mov dword ptr ds : [edi+0x10], ecx
        mov ecx, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        jmp public_4f5c20
        UNREACHABLE_TRAP(0x4f6190)
    }
}

#undef public_4f61a1
#undef public_4f61a9
#undef public_4f61b0
#undef public_4f61ca
#undef public_4f61cf
#undef public_4f61e0
#undef public_4f61ee
