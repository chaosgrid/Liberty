#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_584c80);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);
CLANG_FORWARD_PROC_SYMBOL(public_5a4b50);

#define public_4b9270 _public_4b9270
#define public_4b92a0 _public_4b92a0
#define public_4b92a7 _public_4b92a7
#define public_4b92d0 _public_4b92d0
#define public_4b92d7 _public_4b92d7
#define public_4b92de _public_4b92de
#define public_4b935b _public_4b935b
#define public_4b9362 _public_4b9362

PROC_DECLARE(0x4b9260, internal_4b9260, public_4b9260);
extern "C" NAKED register_t __cdecl internal_4b9260()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        test edi, edi
        je public_4b92de
        mov edi, edi
        public_4b9270 : nop
        mov dword ptr ds : [edi+0x70], 0
        mov eax, dword ptr ds : [esi+0x3D4]
        test eax, eax
        jl public_4b92a7
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x3D4]
        cmp eax, dword ptr ds : [esi+ecx*4+0x334]
        je public_4b92a0
        cmp eax, dword ptr ds : [esi+ecx*4+0x340]
        jne public_4b92a7
        public_4b92a0 : nop
        mov dword ptr ds : [edi+0x70], 1
        public_4b92a7 : nop
        mov eax, dword ptr ds : [esi+0x3D0]
        test eax, eax
        jl public_4b92d7
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x3D0]
        cmp eax, dword ptr ds : [esi+ecx*4+0x334]
        je public_4b92d0
        cmp eax, dword ptr ds : [esi+ecx*4+0x340]
        jne public_4b92d7
        public_4b92d0 : nop
        mov dword ptr ds : [edi+0x70], 2
        public_4b92d7 : nop
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_4b9270
        public_4b92de : nop
        mov eax, dword ptr ds : [esi+0x3CC]
        push eax
        lea ecx, ds:[esi+0x334]
        push ecx
        call public_5a4b50
        mov edx, dword ptr ds : [esi+0x3CC]
        push edx
        lea eax, ds:[esi+0x340]
        push eax
        call public_5a4b50
        add esp, 0x10
        mov ecx, esi
        call public_5a0760
        mov ecx, dword ptr ds : [esi+0x370]
        mov edi, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call public_59da70
        mov ecx, dword ptr ds : [esi+0x370]
        add esp, 4
        push eax
        call dword ptr ds : [edi+0x10]
        test al, al
        je public_4b9362
        test byte ptr ds : [public_616850], 3
        je public_4b935b
        mov ecx, dword ptr ds : [esi+0x370]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x3E4]
        push eax
        call public_584c80
        pop edi
        mov byte ptr ds : [esi+0x3E4], 0
        pop esi
        add esp, 0xC
        ret 
        public_4b935b : nop
        mov byte ptr ds : [esi+0x3E4], 1
        public_4b9362 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4b9260)
    }
}

#undef public_4b9270
#undef public_4b92a0
#undef public_4b92a7
#undef public_4b92d0
#undef public_4b92d7
#undef public_4b92de
#undef public_4b935b
#undef public_4b9362
