#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47406);

#define public_6d47445 _public_6d47445
#define public_6d47468 _public_6d47468
#define public_6d47478 _public_6d47478
#define public_6d47487 _public_6d47487
#define public_6d474b0 _public_6d474b0
#define public_6d474d0 _public_6d474d0
#define public_6d474f1 _public_6d474f1
#define public_6d4752f _public_6d4752f

PROC_DECLARE(0x6d47406, internal_6d47406, public_6d47406);
extern "C" NAKED register_t __cdecl internal_6d47406()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi+0x17C]
        xor ebx, ebx
        cmp byte ptr ds : [edi+8], bl
        je public_6d47445
        mov byte ptr ds : [edi+8], bl
        mov eax, dword ptr ds : [esi+0x1A4]
        push ebx
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x188]
        push 2
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x180]
        push 2
        push esi
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_6d474f1
        public_6d47445 : nop
        cmp byte ptr ds : [esi+0x4A], bl
        je public_6d47487
        cmp dword ptr ds : [esi+0x74], ebx
        jne public_6d47487
        cmp byte ptr ds : [esi+0x50], bl
        je public_6d47468
        cmp byte ptr ds : [esi+0x5A], bl
        je public_6d47468
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x1A4], eax
        mov byte ptr ds : [edi+8], 1
        jmp public_6d47487
        public_6d47468 : nop
        cmp byte ptr ds : [esi+0x58], bl
        je public_6d47478
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x1A4], eax
        jmp public_6d47487
        public_6d47478 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x2D
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d47487 : nop
        mov eax, dword ptr ds : [esi+0x198]
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x184]
        push esi
        call dword ptr ds : [eax+8]
        cmp byte ptr ds : [esi+0x41], bl
        pop ecx
        pop ecx
        jne public_6d474f1
        cmp byte ptr ds : [edi+0x10], bl
        jne public_6d474b0
        mov eax, dword ptr ds : [esi+0x1A0]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d474b0 : nop
        mov eax, dword ptr ds : [esi+0x19C]
        push esi
        call dword ptr ds : [eax]
        cmp byte ptr ds : [esi+0x4A], bl
        pop ecx
        je public_6d474d0
        mov eax, dword ptr ds : [esi+0x1A4]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+8]
        push ecx
        push esi
        call dword ptr ds : [eax]
        pop ecx
        pop ecx
        public_6d474d0 : nop
        mov cl, byte ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0x188]
        neg cl
        sbb ecx, ecx
        and ecx, 3
        push ecx
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x180]
        push ebx
        push esi
        call dword ptr ds : [eax]
        add esp, 0x10
        public_6d474f1 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_6d4752f
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [esi+8]
        xor eax, eax
        cmp byte ptr ds : [edi+8], bl
        setne al
        inc eax
        add eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx+0x10], eax
        cmp byte ptr ds : [esi+0x40], bl
        je public_6d4752f
        mov eax, dword ptr ds : [esi+0x18C]
        cmp byte ptr ds : [eax+0x11], bl
        jne public_6d4752f
        mov eax, dword ptr ds : [esi+8]
        xor ecx, ecx
        cmp byte ptr ds : [esi+0x5A], bl
        setne cl
        inc ecx
        add dword ptr ds : [eax+0x10], ecx
        public_6d4752f : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d47406)
    }
}

#undef public_6d47445
#undef public_6d47468
#undef public_6d47478
#undef public_6d47487
#undef public_6d474b0
#undef public_6d474d0
#undef public_6d474f1
#undef public_6d4752f
