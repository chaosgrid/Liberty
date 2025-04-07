#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2b3e4 _public_6d2b3e4
#define public_6d2b3e6 _public_6d2b3e6
#define public_6d2b406 _public_6d2b406
#define public_6d2b42c _public_6d2b42c
#define public_6d2b445 _public_6d2b445
#define public_6d2b48b _public_6d2b48b
#define public_6d2b4ab _public_6d2b4ab
#define public_6d2b4e0 _public_6d2b4e0
#define public_6d2b513 _public_6d2b513
#define public_6d2b51c _public_6d2b51c
#define public_6d2b553 _public_6d2b553
#define public_6d2b55c _public_6d2b55c
#define public_6d2b5a3 _public_6d2b5a3
#define public_6d2b5cd _public_6d2b5cd
#define public_6d2b5d6 _public_6d2b5d6
#define public_6d2b606 _public_6d2b606
#define public_6d2b631 _public_6d2b631
#define public_6d2b633 _public_6d2b633
#define public_6d2b653 _public_6d2b653
#define public_6d2b679 _public_6d2b679
#define public_6d2b692 _public_6d2b692

PROC_DECLARE(0x6d2b3c0, internal_6d2b3c0, public_6d2b3c0);
extern "C" NAKED register_t __cdecl internal_6d2b3c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        push esi
        push edi
        mov dword ptr ss : [ebp-0x44], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x44]
        mov byte ptr ds : [edx], cl
        xor eax, eax
        test eax, eax
        je public_6d2b3e4
        mov ecx, dword ptr ss : [ebp-0x44]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2b3e6
        public_6d2b3e4 : nop
        jmp public_6d2b445
        public_6d2b3e6 : nop
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d2b406
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d2b42c
        public_6d2b406 : nop
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 2
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d2b445
        public_6d2b42c : nop
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x48]
        mov byte ptr ds : [edx], cl
        public_6d2b445 : nop
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ds : [public_6d5e094]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x30], ecx
        mov dword ptr ss : [ebp-0x2C], 0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ss : [ebp-0x2C]
        jae public_6d2b48b
        call dword ptr ds : [public_6d5e07c]
        public_6d2b48b : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        sub ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        cmp edx, dword ptr ss : [ebp-0xC]
        jae public_6d2b4ab
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0xC], eax
        public_6d2b4ab : nop
        mov ecx, dword ptr ss : [ebp-0x44]
        cmp ecx, dword ptr ss : [ebp+8]
        jne public_6d2b4e0
        mov edx, dword ptr ds : [public_6d5e094]
        mov eax, dword ptr ds : [edx]
        push eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e070]
        mov edx, dword ptr ss : [ebp-0x2C]
        push edx
        push 0
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e070]
        jmp public_6d2b606
        public_6d2b4e0 : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jbe public_6d2b5a3
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        cmp edx, dword ptr ss : [ebp-0x18]
        jne public_6d2b5a3
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2b513
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x1C], ecx
        jmp public_6d2b51c
        public_6d2b513 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d2b51c : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFE
        jge public_6d2b5a3
        mov eax, 1
        test eax, eax
        je public_6d2b5a3
        push 1
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e0a4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2b553
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x4C], edx
        jmp public_6d2b55c
        public_6d2b553 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x4C], ecx
        public_6d2b55c : nop
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x44]
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-0x44]
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x50], ecx
        mov edx, dword ptr ss : [ebp-0x50]
        mov al, byte ptr ds : [edx]
        add al, 1
        mov ecx, dword ptr ss : [ebp-0x50]
        mov byte ptr ds : [ecx], al
        jmp public_6d2b606
        public_6d2b5a3 : nop
        push 1
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d2b606
        mov ecx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2b5cd
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x54], edx
        jmp public_6d2b5d6
        public_6d2b5cd : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x54], ecx
        public_6d2b5d6 : nop
        mov edx, dword ptr ss : [ebp-0x44]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov esi, dword ptr ss : [ebp-0x54]
        add esi, dword ptr ss : [ebp-0x2C]
        mov edi, dword ptr ss : [ebp-0x28]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x44]
        call dword ptr ds : [public_6d5e098]
        public_6d2b606 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-0x44]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x3C], edx
        mov eax, dword ptr ss : [ebp-0x40]
        mov cl, byte ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x3C]
        mov byte ptr ds : [edx], cl
        xor eax, eax
        test eax, eax
        je public_6d2b631
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2b633
        public_6d2b631 : nop
        jmp public_6d2b692
        public_6d2b633 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d2b653
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d2b679
        public_6d2b653 : nop
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 2
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d2b692
        public_6d2b679 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x58], edx
        mov eax, dword ptr ss : [ebp-0x58]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x58]
        mov byte ptr ds : [edx], cl
        public_6d2b692 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ds : [public_6d5e094]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        mov edx, dword ptr ss : [ebp-0x40]
        push edx
        mov ecx, dword ptr ss : [ebp-0x3C]
        call dword ptr ds : [public_6d5e090]
        mov eax, dword ptr ss : [ebp-0x44]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2b3c0)
    }
}

#undef public_6d2b3e4
#undef public_6d2b3e6
#undef public_6d2b406
#undef public_6d2b42c
#undef public_6d2b445
#undef public_6d2b48b
#undef public_6d2b4ab
#undef public_6d2b4e0
#undef public_6d2b513
#undef public_6d2b51c
#undef public_6d2b553
#undef public_6d2b55c
#undef public_6d2b5a3
#undef public_6d2b5cd
#undef public_6d2b5d6
#undef public_6d2b606
#undef public_6d2b631
#undef public_6d2b633
#undef public_6d2b653
#undef public_6d2b679
#undef public_6d2b692
