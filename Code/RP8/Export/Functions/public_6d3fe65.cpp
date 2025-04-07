#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3fcf2);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fe65);

#define public_6d3fe97 _public_6d3fe97
#define public_6d3fea5 _public_6d3fea5
#define public_6d3febe _public_6d3febe
#define public_6d3fec3 _public_6d3fec3
#define public_6d3fedd _public_6d3fedd
#define public_6d3fefa _public_6d3fefa

PROC_DECLARE(0x6d3fe65, internal_6d3fe65, public_6d3fe65);
extern "C" NAKED register_t __cdecl internal_6d3fe65()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        push edi
        xor edi, edi
        cmp eax, 0xC8
        je public_6d3fec3
        cmp eax, 0xC9
        je public_6d3fedd
        mov ecx, 0xCA
        cmp eax, ecx
        je public_6d3febe
        jle public_6d3fea5
        cmp eax, 0xD0
        jle public_6d3fe97
        cmp eax, 0xD2
        jne public_6d3fea5
        public_6d3fe97 : nop
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        mov edi, eax
        jmp public_6d3fefa
        public_6d3fea5 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x12
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        jmp public_6d3fefa
        public_6d3febe : nop
        xor edi, edi
        inc edi
        jmp public_6d3fefa
        public_6d3fec3 : nop
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x14]
        push esi
        call dword ptr ds : [eax+8]
        pop ecx
        pop ecx
        mov dword ptr ds : [esi+0x10], 0xC9
        public_6d3fedd : nop
        mov eax, dword ptr ds : [esi+0x18C]
        push esi
        call dword ptr ds : [eax]
        mov edi, eax
        cmp edi, 1
        pop ecx
        jne public_6d3fefa
        call public_6d3fcf2
        mov dword ptr ds : [esi+0x10], 0xCA
        public_6d3fefa : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d3fe65)
    }
}

#undef public_6d3fe97
#undef public_6d3fea5
#undef public_6d3febe
#undef public_6d3fec3
#undef public_6d3fedd
#undef public_6d3fefa
