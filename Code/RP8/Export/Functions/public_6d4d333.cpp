#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f1d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4d333);

#define public_6d4d373 _public_6d4d373
#define public_6d4d37f _public_6d4d37f
#define public_6d4d38f _public_6d4d38f
#define public_6d4d3a7 _public_6d4d3a7
#define public_6d4d3b1 _public_6d4d3b1
#define public_6d4d3c4 _public_6d4d3c4
#define public_6d4d3d7 _public_6d4d3d7

PROC_DECLARE(0x6d4d333, internal_6d4d333, public_6d4d333);
extern "C" NAKED register_t __cdecl internal_6d4d333()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx+0x19C]
        cmp byte ptr ds : [esi+0x24], 0
        push edi
        je public_6d4d373
        push dword ptr ds : [esi+0x28]
        mov ebx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [ebp+0x18]
        xor edi, edi
        inc edi
        push edi
        push 0
        lea eax, ds:[ecx+eax*4]
        push eax
        lea eax, ds:[esi+0x20]
        push 0
        push eax
        call public_6d45f1d
        add esp, 0x18
        and byte ptr ds : [esi+0x24], 0
        jmp public_6d4d3c4
        public_6d4d373 : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push 2
        pop edi
        cmp eax, edi
        jae public_6d4d37f
        mov edi, eax
        public_6d4d37f : nop
        mov ebx, dword ptr ss : [ebp+0x1C]
        mov eax, dword ptr ds : [ebx]
        sub dword ptr ss : [ebp+0x20], eax
        cmp edi, dword ptr ss : [ebp+0x20]
        jbe public_6d4d38f
        mov edi, dword ptr ss : [ebp+0x20]
        public_6d4d38f : nop
        cmp edi, 1
        mov edx, dword ptr ss : [ebp+0x18]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-8], edx
        jbe public_6d4d3a7
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d4d3b1
        public_6d4d3a7 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [ebp-4], eax
        mov byte ptr ds : [esi+0x24], 1
        public_6d4d3b1 : nop
        lea eax, ss:[ebp-8]
        push eax
        mov eax, dword ptr ss : [ebp+0x10]
        push dword ptr ds : [eax]
        push dword ptr ss : [ebp+0xC]
        push ecx
        call dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_6d4d3c4 : nop
        add dword ptr ds : [ebx], edi
        sub dword ptr ds : [esi+0x2C], edi
        cmp byte ptr ds : [esi+0x24], 0
        pop edi
        pop esi
        pop ebx
        jne public_6d4d3d7
        mov eax, dword ptr ss : [ebp+0x10]
        inc dword ptr ds : [eax]
        public_6d4d3d7 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4d333)
    }
}

#undef public_6d4d373
#undef public_6d4d37f
#undef public_6d4d38f
#undef public_6d4d3a7
#undef public_6d4d3b1
#undef public_6d4d3c4
#undef public_6d4d3d7
