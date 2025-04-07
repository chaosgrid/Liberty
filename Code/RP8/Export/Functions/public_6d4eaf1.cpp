#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4eaf1);

#define public_6d4eb16 _public_6d4eb16
#define public_6d4eb23 _public_6d4eb23
#define public_6d4eb32 _public_6d4eb32
#define public_6d4eb3a _public_6d4eb3a
#define public_6d4eb61 _public_6d4eb61
#define public_6d4eb63 _public_6d4eb63
#define public_6d4eb9b _public_6d4eb9b
#define public_6d4ebb4 _public_6d4ebb4

PROC_DECLARE(0x6d4eaf1, internal_6d4eaf1, public_6d4eaf1);
extern "C" NAKED register_t __cdecl internal_6d4eaf1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov edx, dword ptr ds : [edi+0x1A4]
        and dword ptr ss : [ebp-4], 0
        cmp dword ptr ds : [edi+0x64], 0
        mov dword ptr ss : [ebp-0x14], edx
        jle public_6d4ebb4
        lea ecx, ds:[edx+0x34]
        push ebx
        mov dword ptr ss : [ebp-0xC], ecx
        push esi
        public_6d4eb16 : nop
        mov esi, dword ptr ds : [ecx-0x14]
        xor eax, eax
        cmp dword ptr ss : [ebp-4], eax
        jle public_6d4eb3a
        lea ebx, ds:[edx+0x20]
        public_6d4eb23 : nop
        cmp esi, dword ptr ds : [ebx]
        je public_6d4eb32
        inc eax
        add ebx, 4
        cmp eax, dword ptr ss : [ebp-4]
        jl public_6d4eb23
        jmp public_6d4eb3a
        public_6d4eb32 : nop
        mov eax, dword ptr ds : [edx+eax*4+0x34]
        test eax, eax
        jne public_6d4eb9b
        public_6d4eb3a : nop
        mov eax, dword ptr ds : [edi+4]
        push 0x400
        push 1
        push edi
        call dword ptr ds : [eax]
        shl esi, 9
        add esp, 0xC
        sub esi, 0x200
        mov dword ptr ss : [ebp-0x10], eax
        mov ebx, esi
        mov dword ptr ss : [ebp-8], offset public_6d620a8
        mov ecx, eax
        public_6d4eb61 : nop
        xor esi, esi
        public_6d4eb63 : nop
        mov eax, dword ptr ss : [ebp-8]
        movzx edx, byte ptr ds : [eax+esi]
        imul edx, 0x1FE
        mov eax, 0xFE01
        sub eax, edx
        cdq 
        idiv ebx
        inc esi
        mov dword ptr ds : [ecx], eax
        add ecx, 4
        cmp esi, 0x10
        jl public_6d4eb63
        add dword ptr ss : [ebp-8], 0x10
        cmp dword ptr ss : [ebp-8], offset public_6d621a8
        jl public_6d4eb61
        mov eax, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0xC]
        public_6d4eb9b : nop
        inc dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp-4]
        add ecx, 4
        cmp eax, dword ptr ds : [edi+0x64]
        mov dword ptr ss : [ebp-0xC], ecx
        jl public_6d4eb16
        pop esi
        pop ebx
        public_6d4ebb4 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4eaf1)
    }
}

#undef public_6d4eb16
#undef public_6d4eb23
#undef public_6d4eb32
#undef public_6d4eb3a
#undef public_6d4eb61
#undef public_6d4eb63
#undef public_6d4eb9b
#undef public_6d4ebb4
