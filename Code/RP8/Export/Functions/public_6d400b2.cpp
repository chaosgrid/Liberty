#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d400b2);

#define public_6d400d9 _public_6d400d9
#define public_6d400f8 _public_6d400f8
#define public_6d40112 _public_6d40112
#define public_6d40133 _public_6d40133

PROC_DECLARE(0x6d400b2, internal_6d400b2, public_6d400b2);
extern "C" NAKED register_t __cdecl internal_6d400b2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [esi+0x10], 0xCD
        je public_6d400d9
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x12
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d400d9 : nop
        mov ecx, dword ptr ds : [esi+0x78]
        cmp ecx, dword ptr ds : [esi+0x60]
        jb public_6d400f8
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x77
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push esi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        xor eax, eax
        jmp public_6d40133
        public_6d400f8 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6d40112
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x60]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+8]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d40112 : nop
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [esi+0x180]
        and dword ptr ss : [ebp+8], 0
        lea ecx, ss:[ebp+8]
        push ecx
        push dword ptr ss : [ebp+0xC]
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x10
        add dword ptr ds : [esi+0x78], eax
        public_6d40133 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d400b2)
    }
}

#undef public_6d400d9
#undef public_6d400f8
#undef public_6d40112
#undef public_6d40133
