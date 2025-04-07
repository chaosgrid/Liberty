#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2a500);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2a531 _public_6d2a531
#define public_6d2a533 _public_6d2a533
#define public_6d2a553 _public_6d2a553
#define public_6d2a579 _public_6d2a579
#define public_6d2a592 _public_6d2a592
#define public_6d2a5f3 _public_6d2a5f3
#define public_6d2a5f5 _public_6d2a5f5
#define public_6d2a615 _public_6d2a615
#define public_6d2a63b _public_6d2a63b
#define public_6d2a654 _public_6d2a654
#define public_6d2a69a _public_6d2a69a
#define public_6d2a6ba _public_6d2a6ba
#define public_6d2a6ef _public_6d2a6ef
#define public_6d2a722 _public_6d2a722
#define public_6d2a72b _public_6d2a72b
#define public_6d2a75d _public_6d2a75d
#define public_6d2a75f _public_6d2a75f
#define public_6d2a77f _public_6d2a77f
#define public_6d2a7a5 _public_6d2a7a5
#define public_6d2a7be _public_6d2a7be
#define public_6d2a7f0 _public_6d2a7f0
#define public_6d2a7f9 _public_6d2a7f9
#define public_6d2a840 _public_6d2a840
#define public_6d2a86a _public_6d2a86a
#define public_6d2a873 _public_6d2a873
#define public_6d2a8a3 _public_6d2a8a3
#define public_6d2a8ab _public_6d2a8ab
#define public_6d2a8b2 _public_6d2a8b2

PROC_DECLARE(0x6d2a500, internal_6d2a500, public_6d2a500);
extern "C" NAKED register_t __cdecl internal_6d2a500()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x68
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d2a8ab
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dl, byte ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax], dl
        xor ecx, ecx
        test ecx, ecx
        je public_6d2a531
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2a533
        public_6d2a531 : nop
        jmp public_6d2a592
        public_6d2a533 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d2a553
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d2a579
        public_6d2a553 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d2a592
        public_6d2a579 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x50]
        mov byte ptr ds : [eax], dl
        public_6d2a592 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ds : [public_6d5e094]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e090]
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x4C], ecx
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov cl, byte ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x48]
        mov byte ptr ds : [edx], cl
        xor eax, eax
        test eax, eax
        je public_6d2a5f3
        mov ecx, dword ptr ss : [ebp-0x48]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2a5f5
        public_6d2a5f3 : nop
        jmp public_6d2a654
        public_6d2a5f5 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d2a615
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d2a63b
        public_6d2a615 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 2
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d2a654
        public_6d2a63b : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x54]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [edx], cl
        public_6d2a654 : nop
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ds : [public_6d5e094]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x44], ecx
        mov dword ptr ss : [ebp-0x40], 0
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, dword ptr ss : [ebp-0x40]
        jae public_6d2a69a
        call dword ptr ds : [public_6d5e07c]
        public_6d2a69a : nop
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        sub ecx, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x44]
        cmp edx, dword ptr ss : [ebp-0x18]
        jae public_6d2a6ba
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x18], eax
        public_6d2a6ba : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        cmp ecx, dword ptr ss : [ebp-0x4C]
        jne public_6d2a6ef
        mov edx, dword ptr ds : [public_6d5e094]
        mov eax, dword ptr ds : [edx]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x48]
        call dword ptr ds : [public_6d5e070]
        mov edx, dword ptr ss : [ebp-0x40]
        push edx
        push 0
        mov ecx, dword ptr ss : [ebp-0x48]
        call dword ptr ds : [public_6d5e070]
        jmp public_6d2a8a3
        public_6d2a6ef : nop
        cmp dword ptr ss : [ebp-0x18], 0
        jbe public_6d2a840
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ss : [ebp-0x24]
        jne public_6d2a840
        mov eax, dword ptr ss : [ebp-0x4C]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2a722
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x28], ecx
        jmp public_6d2a72b
        public_6d2a722 : nop
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x28], eax
        public_6d2a72b : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFE
        jge public_6d2a840
        mov eax, 1
        test eax, eax
        je public_6d2a840
        mov ecx, 1
        test ecx, ecx
        je public_6d2a75d
        mov edx, dword ptr ss : [ebp-0x48]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2a75f
        public_6d2a75d : nop
        jmp public_6d2a7be
        public_6d2a75f : nop
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d2a77f
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d2a7a5
        public_6d2a77f : nop
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d2a7be
        public_6d2a7a5 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x58]
        mov byte ptr ds : [eax], dl
        public_6d2a7be : nop
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x4C]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2a7f0
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x5C], edx
        jmp public_6d2a7f9
        public_6d2a7f0 : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x5C], ecx
        public_6d2a7f9 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, 1
        mov dword ptr ss : [ebp-0x60], ecx
        mov edx, dword ptr ss : [ebp-0x60]
        mov al, byte ptr ds : [edx]
        add al, 1
        mov ecx, dword ptr ss : [ebp-0x60]
        mov byte ptr ds : [ecx], al
        jmp public_6d2a8a3
        public_6d2a840 : nop
        push 1
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov ecx, dword ptr ss : [ebp-0x48]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d2a8a3
        mov ecx, dword ptr ss : [ebp-0x4C]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2a86a
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x64], edx
        jmp public_6d2a873
        public_6d2a86a : nop
        mov eax, dword ptr ss : [ebp-0x4C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x64], ecx
        public_6d2a873 : nop
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x64]
        add esi, dword ptr ss : [ebp-0x40]
        mov edi, dword ptr ss : [ebp-0x3C]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x48]
        call dword ptr ds : [public_6d5e098]
        public_6d2a8a3 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x68], ecx
        jmp public_6d2a8b2
        public_6d2a8ab : nop
        mov dword ptr ss : [ebp-0x68], 0
        public_6d2a8b2 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2a500)
    }
}

#undef public_6d2a531
#undef public_6d2a533
#undef public_6d2a553
#undef public_6d2a579
#undef public_6d2a592
#undef public_6d2a5f3
#undef public_6d2a5f5
#undef public_6d2a615
#undef public_6d2a63b
#undef public_6d2a654
#undef public_6d2a69a
#undef public_6d2a6ba
#undef public_6d2a6ef
#undef public_6d2a722
#undef public_6d2a72b
#undef public_6d2a75d
#undef public_6d2a75f
#undef public_6d2a77f
#undef public_6d2a7a5
#undef public_6d2a7be
#undef public_6d2a7f0
#undef public_6d2a7f9
#undef public_6d2a840
#undef public_6d2a86a
#undef public_6d2a873
#undef public_6d2a8a3
#undef public_6d2a8ab
#undef public_6d2a8b2
