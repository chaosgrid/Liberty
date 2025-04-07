#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f47430);

#define public_6f47476 _public_6f47476
#define public_6f47485 _public_6f47485
#define public_6f474a2 _public_6f474a2
#define public_6f474d3 _public_6f474d3
#define public_6f474de _public_6f474de
#define public_6f474e0 _public_6f474e0
#define public_6f47500 _public_6f47500
#define public_6f4750b _public_6f4750b
#define public_6f47541 _public_6f47541
#define public_6f4754c _public_6f4754c
#define public_6f4754e _public_6f4754e
#define public_6f47570 _public_6f47570
#define public_6f4757b _public_6f4757b

PROC_DECLARE(0x6f47430, internal_6f47430, public_6f47430);
extern "C" NAKED register_t __cdecl internal_6f47430()
{
    __asm
    {
        sub esp, 0x10
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x174], eax
        mov edx, dword ptr ds : [edi]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33a0]
        mov esi, dword ptr ds : [esi+4]
        add esp, 8
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_6fd0bbc
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [public_6fd0bc0]
        je public_6f4757b
        public_6f47476 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f47485
        cmp dword ptr ds : [eax+4], esi
        je public_6f474a2
        public_6f47485 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [public_6fd0bc0]
        jne public_6f47476
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        public_6f474a2 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f4757b
        mov ecx, dword ptr ss : [esp+0x10]
        test ch, 8
        je public_6f4757b
        mov ecx, dword ptr ds : [eax+0xC8]
        mov edx, dword ptr ds : [edi]
        lea esi, ds:[eax+0xC0]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], edx
        je public_6f474de
        public_6f474d3 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f474e0
        add eax, 4
        cmp eax, ecx
        jne public_6f474d3
        public_6f474de : nop
        mov eax, ecx
        public_6f474e0 : nop
        cmp eax, ecx
        jne public_6f4750b
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6eb5770
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f4750b
        mov edx, dword ptr ss : [esp+8]
        nop 
        public_6f47500 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f4750b
        add eax, 4
        cmp eax, ecx
        jne public_6f47500
        public_6f4750b : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_6fb344c]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 0xC
        cmp eax, ecx
        mov dword ptr ss : [esp+8], edx
        je public_6f4754c
        public_6f47541 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f4754e
        add eax, 4
        cmp eax, ecx
        jne public_6f47541
        public_6f4754c : nop
        mov eax, ecx
        public_6f4754e : nop
        cmp eax, ecx
        jne public_6f4757b
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6eb5770
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f4757b
        mov ecx, dword ptr ss : [esp+8]
        lea ecx, ds:[ecx]
        public_6f47570 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f4757b
        add eax, 4
        cmp eax, esi
        jne public_6f47570
        public_6f4757b : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f47430)
    }
}

#undef public_6f47476
#undef public_6f47485
#undef public_6f474a2
#undef public_6f474d3
#undef public_6f474de
#undef public_6f474e0
#undef public_6f47500
#undef public_6f4750b
#undef public_6f47541
#undef public_6f4754c
#undef public_6f4754e
#undef public_6f47570
#undef public_6f4757b
