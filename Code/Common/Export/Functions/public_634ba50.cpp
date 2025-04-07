#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349110);
CLANG_FORWARD_PROC_SYMBOL(public_634ba50);

#define public_634ba73 _public_634ba73
#define public_634ba7f _public_634ba7f
#define public_634ba90 _public_634ba90
#define public_634baa5 _public_634baa5
#define public_634bac3 _public_634bac3
#define public_634bad9 _public_634bad9
#define public_634bae5 _public_634bae5
#define public_634baf6 _public_634baf6
#define public_634bb0b _public_634bb0b

PROC_DECLARE(0x634ba50, internal_634ba50, public_634ba50);
extern "C" NAKED register_t __cdecl internal_634ba50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test byte ptr ds : [edi], 0xC
        mov esi, ecx
        jne public_634bac3
        xor edx, edx
        mov dx, word ptr ds : [esi+0x2E]
        mov eax, edx
        and eax, 0xFFFF
        dec eax
        js public_634ba7f
        mov ecx, dword ptr ds : [esi+0x30]
        lea ecx, ds:[ecx+eax*4]
        public_634ba73 : nop
        cmp dword ptr ds : [ecx], edi
        je public_634ba7f
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_634ba73
        public_634ba7f : nop
        lea ecx, ds:[edx-1]
        mov word ptr ds : [esi+0x2E], cx
        and ecx, 0xFFFF
        cmp eax, ecx
        jge public_634baa5
        public_634ba90 : nop
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x2E]
        inc eax
        cmp eax, ecx
        jl public_634ba90
        public_634baa5 : nop
        lea edx, ds:[esi+0x10]
        push edx
        mov ecx, edi
        call public_6349110
        push esi
        mov ecx, edi
        call public_6349110
        lea eax, ds:[esi+8]
        push eax
        mov ecx, edi
        call public_6349110
        public_634bac3 : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+0x26]
        mov eax, edx
        and eax, 0xFFFF
        dec eax
        js public_634bae5
        mov ecx, dword ptr ds : [esi+0x28]
        lea ecx, ds:[ecx+eax*4]
        public_634bad9 : nop
        cmp dword ptr ds : [ecx], edi
        je public_634bae5
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_634bad9
        public_634bae5 : nop
        lea ecx, ds:[edx-1]
        mov word ptr ds : [esi+0x26], cx
        and ecx, 0xFFFF
        cmp eax, ecx
        jge public_634bb0b
        public_634baf6 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x26]
        inc eax
        cmp eax, ecx
        jl public_634baf6
        public_634bb0b : nop
        dec word ptr ds : [esi+0x3C]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634ba50)
    }
}

#undef public_634ba73
#undef public_634ba7f
#undef public_634ba90
#undef public_634baa5
#undef public_634bac3
#undef public_634bad9
#undef public_634bae5
#undef public_634baf6
#undef public_634bb0b
