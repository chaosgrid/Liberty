#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3feff);
CLANG_FORWARD_PROC_SYMBOL(public_6d46f15);

#define public_6d3ff15 _public_6d3ff15
#define public_6d3ff32 _public_6d3ff32
#define public_6d3ff45 _public_6d3ff45
#define public_6d3ff55 _public_6d3ff55
#define public_6d3ff72 _public_6d3ff72
#define public_6d3ff75 _public_6d3ff75
#define public_6d3ff83 _public_6d3ff83
#define public_6d3ffa2 _public_6d3ffa2

PROC_DECLARE(0x6d3feff, internal_6d3feff, public_6d3feff);
extern "C" NAKED register_t __cdecl internal_6d3feff()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 0xCD
        je public_6d3ff15
        cmp eax, 0xCE
        jne public_6d3ff45
        public_6d3ff15 : nop
        cmp byte ptr ds : [esi+0x40], 0
        jne public_6d3ff45
        mov eax, dword ptr ds : [esi+0x78]
        cmp eax, dword ptr ds : [esi+0x60]
        jae public_6d3ff32
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x42
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d3ff32 : nop
        mov eax, dword ptr ds : [esi+0x17C]
        push esi
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x10], 0xD2
        jmp public_6d3ff72
        public_6d3ff45 : nop
        cmp eax, 0xCF
        jne public_6d3ff55
        mov dword ptr ds : [esi+0x10], 0xD2
        jmp public_6d3ff83
        public_6d3ff55 : nop
        cmp eax, 0xD2
        je public_6d3ff83
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x12
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        public_6d3ff72 : nop
        pop ecx
        jmp public_6d3ff83
        public_6d3ff75 : nop
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax]
        test eax, eax
        pop ecx
        je public_6d3ffa2
        public_6d3ff83 : nop
        mov eax, dword ptr ds : [esi+0x18C]
        cmp byte ptr ds : [eax+0x11], 0
        je public_6d3ff75
        mov eax, dword ptr ds : [esi+0x14]
        push esi
        call dword ptr ds : [eax+0x18]
        push esi
        call public_6d46f15
        pop ecx
        pop ecx
        mov al, 1
        pop esi
        ret 
        public_6d3ffa2 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d3feff)
    }
}

#undef public_6d3ff15
#undef public_6d3ff32
#undef public_6d3ff45
#undef public_6d3ff55
#undef public_6d3ff72
#undef public_6d3ff75
#undef public_6d3ff83
#undef public_6d3ffa2
