#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d460);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2d3e2 _public_6c2d3e2
#define public_6c2d3eb _public_6c2d3eb
#define public_6c2d3ee _public_6c2d3ee
#define public_6c2d40c _public_6c2d40c
#define public_6c2d412 _public_6c2d412
#define public_6c2d421 _public_6c2d421
#define public_6c2d427 _public_6c2d427
#define public_6c2d448 _public_6c2d448
#define public_6c2d44c _public_6c2d44c
#define public_6c2d44e _public_6c2d44e

PROC_DECLARE(0x6c2d3b0, internal_6c2d3b0, public_6c2d3b0);
extern "C" NAKED register_t __cdecl internal_6c2d3b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edx+0x28]
        or eax, 0xFFFFFFFF
        cmp ecx, edi
        jne public_6c2d44e
        mov ecx, dword ptr ds : [edx+0x34]
        push ebx
        mov ebx, dword ptr ds : [edi]
        push esi
        movzx esi, word ptr ds : [ecx+0xE]
        sub ebx, esi
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi], ebx
        movzx ecx, word ptr ds : [ecx+0xA]
        sub esi, ecx
        mov dword ptr ds : [edi+4], esi
        xor esi, esi
        public_6c2d3e2 : nop
        test esi, esi
        jne public_6c2d3eb
        mov esi, dword ptr ds : [edi+0x1C]
        jmp public_6c2d3ee
        public_6c2d3eb : nop
        mov esi, dword ptr ds : [esi+0x20]
        public_6c2d3ee : nop
        test esi, esi
        je public_6c2d44c
        cmp esi, edx
        jne public_6c2d3e2
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        mov dword ptr ds : [esi+0x28], 0
        jne public_6c2d40c
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x1C], eax
        jmp public_6c2d412
        public_6c2d40c : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0x20], ecx
        public_6c2d412 : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6c2d421
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [edi+0x20], eax
        jmp public_6c2d427
        public_6c2d421 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+0x24], ecx
        public_6c2d427 : nop
        mov ecx, dword ptr ds : [edi+0x24]
        dec ecx
        mov ebx, ecx
        test ebx, ebx
        mov dword ptr ds : [edi+0x24], ecx
        jne public_6c2d448
        mov ecx, edi
        call public_6c2d460
        push edi
        call public_6c34ea0
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        public_6c2d448 : nop
        mov eax, ebx
        jmp public_6c2d3e2
        public_6c2d44c : nop
        pop esi
        pop ebx
        public_6c2d44e : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6c2d3b0)
    }
}

#undef public_6c2d3e2
#undef public_6c2d3eb
#undef public_6c2d3ee
#undef public_6c2d40c
#undef public_6c2d412
#undef public_6c2d421
#undef public_6c2d427
#undef public_6c2d448
#undef public_6c2d44c
#undef public_6c2d44e
