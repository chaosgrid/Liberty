#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c13d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2ea60);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f200);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2c1e0 _public_6d2c1e0
#define public_6d2c224 _public_6d2c224
#define public_6d2c22f _public_6d2c22f
#define public_6d2c243 _public_6d2c243
#define public_6d2c249 _public_6d2c249
#define public_6d2c288 _public_6d2c288
#define public_6d2c2d0 _public_6d2c2d0

PROC_DECLARE(0x6d2c13d, internal_6d2c13d, public_6d2c13d);
extern "C" NAKED register_t __cdecl internal_6d2c13d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x4C], ecx
        mov edx, dword ptr ds : [public_6d728dc]
        mov dword ptr ss : [ebp-0x2C], edx
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_6d2c1e0
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        sub ecx, dword ptr ss : [ebp-0x1C]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d2c1e0
        mov ecx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x50]
        sub eax, dword ptr ss : [ebp-0x20]
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d2c22f
        public_6d2c1e0 : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        sub eax, dword ptr ss : [ebp-0x50]
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d2c224
        mov eax, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0x3C], eax
        lea ecx, ss:[ebp-0x4C]
        call public_6d2f0d0
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        push edx
        lea eax, ss:[ebp-0x28]
        push eax
        mov ecx, offset public_6d728cc
        call public_6d2dfb0
        jmp public_6d2c1e0
        public_6d2c224 : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d2c2d0
        public_6d2c22f : nop
        mov edx, dword ptr ds : [public_6d728d0]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x40], ecx
        jmp public_6d2c249
        public_6d2c243 : nop
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-0x44], edx
        public_6d2c249 : nop
        mov eax, dword ptr ss : [ebp-0x40]
        cmp eax, dword ptr ds : [public_6d728d4]
        je public_6d2c288
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov ecx, offset public_6d728cc
        call public_6d2ea60
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x40], ecx
        push 0
        mov ecx, dword ptr ss : [ebp-0x44]
        add ecx, 0xC
        call public_6d2f200
        mov edx, dword ptr ss : [ebp-0x44]
        push edx
        call public_6d2f249
        add esp, 4
        jmp public_6d2c243
        public_6d2c288 : nop
        mov eax, dword ptr ds : [public_6d728d0]
        mov ecx, dword ptr ds : [public_6d728d4]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [public_6d728dc], 0
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [public_6d728d0]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6d728d0]
        mov eax, dword ptr ds : [public_6d728d0]
        mov dword ptr ds : [edx+8], eax
        lea ecx, ss:[ebp-0xC]
        push ecx
        mov ecx, offset public_6d728cc
        call public_6d16e50
        public_6d2c2d0 : nop
        mov edx, dword ptr ds : [public_6d728d0]
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x54]
        push eax
        call public_6d2f249
        add esp, 4
        mov dword ptr ds : [public_6d728d0], 0
        mov dword ptr ds : [public_6d728dc], 0
        mov ecx, dword ptr ds : [public_6d728d4]
        mov dword ptr ss : [ebp-0x58], ecx
        mov edx, dword ptr ss : [ebp-0x58]
        push edx
        call public_6d2f249
        add esp, 4
        mov dword ptr ds : [public_6d728d4], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2c13d)
    }
}

#undef public_6d2c1e0
#undef public_6d2c224
#undef public_6d2c22f
#undef public_6d2c243
#undef public_6d2c249
#undef public_6d2c288
#undef public_6d2c2d0
