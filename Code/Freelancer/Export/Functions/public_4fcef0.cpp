#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);

#define public_4fcf06 _public_4fcf06
#define public_4fcf1b _public_4fcf1b
#define public_4fcf21 _public_4fcf21
#define public_4fcf2c _public_4fcf2c
#define public_4fcf3d _public_4fcf3d
#define public_4fcf4d _public_4fcf4d
#define public_4fcf5c _public_4fcf5c
#define public_4fcf6b _public_4fcf6b
#define public_4fcfe9 _public_4fcfe9
#define public_4fcffd _public_4fcffd
#define public_4fd00c _public_4fd00c
#define public_4fd01c _public_4fd01c
#define public_4fd02b _public_4fd02b

PROC_DECLARE(0x4fcef0, internal_4fcef0, public_4fcef0);
extern "C" NAKED register_t __cdecl internal_4fcef0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        sub esp, 0x30
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        push edi
        je public_4fcf21
        mov edi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi+8]
        public_4fcf06 : nop
        cmp dword ptr ds : [esi+0x10], eax
        jne public_4fcf1b
        mov edx, dword ptr ds : [esi+0xC]
        cmp edx, dword ptr ds : [edi+4]
        jne public_4fcf1b
        mov edx, dword ptr ds : [esi+0x14]
        cmp edx, dword ptr ds : [edi+0xC]
        je public_4fcf2c
        public_4fcf1b : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_4fcf06
        public_4fcf21 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x30
        ret 4
        public_4fcf2c : nop
        mov ecx, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp ecx, ebx
        je public_4fcf3d
        call public_4f7a90
        mov dword ptr ds : [esi+0x10], ebx
        public_4fcf3d : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_4fcf4d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xC], ebx
        public_4fcf4d : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, ebx
        je public_4fcf5c
        call public_537ad0
        mov dword ptr ds : [esi+0x14], ebx
        public_4fcf5c : nop
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_4fcf6b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_4fcf6b : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        je public_4fcfe9
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_4fcfe9 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, ebx
        je public_4fcffd
        call public_5379b0
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        public_4fcffd : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, ebx
        je public_4fd00c
        call public_4f7a90
        mov dword ptr ds : [edi+8], ebx
        public_4fd00c : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_4fd01c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], ebx
        public_4fd01c : nop
        mov ecx, dword ptr ds : [edi+0xC]
        cmp ecx, ebx
        je public_4fd02b
        call public_537ad0
        mov dword ptr ds : [edi+0xC], ebx
        public_4fd02b : nop
        mov dword ptr ds : [edi], ebx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x4fcef0)
    }
}

#undef public_4fcf06
#undef public_4fcf1b
#undef public_4fcf21
#undef public_4fcf2c
#undef public_4fcf3d
#undef public_4fcf4d
#undef public_4fcf5c
#undef public_4fcf6b
#undef public_4fcfe9
#undef public_4fcffd
#undef public_4fd00c
#undef public_4fd01c
#undef public_4fd02b
