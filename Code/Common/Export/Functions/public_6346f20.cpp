#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346f20);
CLANG_FORWARD_PROC_SYMBOL(public_6347040);
CLANG_FORWARD_PROC_SYMBOL(public_63477e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6346f3e _public_6346f3e
#define public_6346f4a _public_6346f4a
#define public_6346f5b _public_6346f5b
#define public_6346f70 _public_6346f70
#define public_6346f8c _public_6346f8c
#define public_6346fa0 _public_6346fa0

PROC_DECLARE(0x6346f20, internal_6346f20, public_6346f20);
extern "C" NAKED register_t __cdecl internal_6346f20()
{
    __asm
    {
        push esi
        xor edx, edx
        mov esi, ecx
        mov dx, word ptr ds : [esi+0x52]
        push edi
        mov eax, edx
        and eax, 0xFFFF
        dec eax
        js public_6346f4a
        mov ecx, dword ptr ds : [esi+0x54]
        mov edi, dword ptr ss : [esp+0xC]
        lea ecx, ds:[ecx+eax*4]
        public_6346f3e : nop
        cmp dword ptr ds : [ecx], edi
        je public_6346f4a
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6346f3e
        public_6346f4a : nop
        lea ecx, ds:[edx-1]
        mov word ptr ds : [esi+0x52], cx
        and ecx, 0xFFFF
        cmp eax, ecx
        jge public_6346f70
        public_6346f5b : nop
        mov ecx, dword ptr ds : [esi+0x54]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x52]
        inc eax
        cmp eax, ecx
        jl public_6346f5b
        public_6346f70 : nop
        cmp word ptr ds : [esi+0x52], 0
        jne public_6346fa0
        mov edx, dword ptr ds : [esi+0x60]
        shl edx, 0x18
        cmp edx, 0x8000000
        jge public_6346f8c
        mov ecx, esi
        call public_6347040
        public_6346f8c : nop
        test esi, esi
        je public_6346fa0
        mov ecx, esi
        call public_63477e0
        push esi
        call public_6391d5a
        add esp, 4
        public_6346fa0 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6346f20)
    }
}

#undef public_6346f3e
#undef public_6346f4a
#undef public_6346f5b
#undef public_6346f70
#undef public_6346f8c
#undef public_6346fa0
