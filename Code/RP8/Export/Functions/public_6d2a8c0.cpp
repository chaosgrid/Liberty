#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2a8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2a8f4 _public_6d2a8f4
#define public_6d2a8f6 _public_6d2a8f6
#define public_6d2a916 _public_6d2a916
#define public_6d2a93c _public_6d2a93c
#define public_6d2a955 _public_6d2a955
#define public_6d2a99c _public_6d2a99c
#define public_6d2a9bc _public_6d2a9bc
#define public_6d2a9ec _public_6d2a9ec
#define public_6d2aa0f _public_6d2aa0f
#define public_6d2aa83 _public_6d2aa83
#define public_6d2aaa1 _public_6d2aaa1
#define public_6d2aac4 _public_6d2aac4
#define public_6d2ab38 _public_6d2ab38
#define public_6d2ab3d _public_6d2ab3d
#define public_6d2ab6f _public_6d2ab6f
#define public_6d2ab78 _public_6d2ab78
#define public_6d2abaf _public_6d2abaf
#define public_6d2abb8 _public_6d2abb8
#define public_6d2ac00 _public_6d2ac00
#define public_6d2ac2b _public_6d2ac2b
#define public_6d2ac34 _public_6d2ac34
#define public_6d2ac78 _public_6d2ac78
#define public_6d2ac8c _public_6d2ac8c
#define public_6d2ac93 _public_6d2ac93

PROC_DECLARE(0x6d2a8c0, internal_6d2a8c0, public_6d2a8c0);
extern "C" NAKED register_t __cdecl internal_6d2a8c0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x80
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d2ac8c
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dl, byte ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-4]
        mov byte ptr ds : [eax], dl
        xor ecx, ecx
        test ecx, ecx
        je public_6d2a8f4
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2a8f6
        public_6d2a8f4 : nop
        jmp public_6d2a955
        public_6d2a8f6 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d2a916
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d2a93c
        public_6d2a916 : nop
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
        jmp public_6d2a955
        public_6d2a93c : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x70], eax
        mov ecx, dword ptr ss : [ebp-0x70]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x70]
        mov byte ptr ds : [eax], dl
        public_6d2a955 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ds : [public_6d5e094]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x6C], edx
        mov dword ptr ss : [ebp-0x68], 0
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        cmp edx, dword ptr ss : [ebp-0x68]
        jae public_6d2a99c
        call dword ptr ds : [public_6d5e07c]
        public_6d2a99c : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        sub edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        cmp eax, dword ptr ss : [ebp-0x10]
        jae public_6d2a9bc
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d2a9bc : nop
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ss : [ebp+0xC]
        jne public_6d2ab3d
        mov eax, dword ptr ds : [public_6d5e094]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x68]
        add edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ss : [ebp-0x2C]
        jae public_6d2a9ec
        call dword ptr ds : [public_6d5e07c]
        public_6d2a9ec : nop
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e080]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+8]
        sub eax, dword ptr ss : [ebp-0x2C]
        cmp eax, dword ptr ss : [ebp-0x30]
        jae public_6d2aa0f
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        sub edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x30], edx
        public_6d2aa0f : nop
        cmp dword ptr ss : [ebp-0x30], 0
        jbe public_6d2aa83
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, dword ptr ss : [ebp-0x2C]
        sub ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0x2C]
        add eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        add edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x28]
        push eax
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call dword ptr ds : [public_6d5e12c]
        add esp, 0xC
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x1C], ecx
        push 0
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d2aa83
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e098]
        public_6d2aa83 : nop
        mov edx, dword ptr ss : [ebp-0x68]
        mov dword ptr ss : [ebp-0x48], edx
        mov dword ptr ss : [ebp-0x44], 0
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ss : [ebp-0x44]
        jae public_6d2aaa1
        call dword ptr ds : [public_6d5e07c]
        public_6d2aaa1 : nop
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e080]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+8]
        sub eax, dword ptr ss : [ebp-0x44]
        cmp eax, dword ptr ss : [ebp-0x48]
        jae public_6d2aac4
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        sub edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x48], edx
        public_6d2aac4 : nop
        cmp dword ptr ss : [ebp-0x48], 0
        jbe public_6d2ab38
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, dword ptr ss : [ebp-0x44]
        sub ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x40], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0x44]
        add eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        add edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x38], edx
        mov eax, dword ptr ss : [ebp-0x40]
        push eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        push ecx
        mov edx, dword ptr ss : [ebp-0x38]
        push edx
        call dword ptr ds : [public_6d5e12c]
        add esp, 0xC
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x34], ecx
        push 0
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d2ab38
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e098]
        public_6d2ab38 : nop
        jmp public_6d2ac78
        public_6d2ab3d : nop
        cmp dword ptr ss : [ebp-0x10], 0
        jbe public_6d2ac00
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x4C], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ss : [ebp-0x4C]
        jne public_6d2ac00
        mov edx, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2ab6f
        mov eax, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x50], eax
        jmp public_6d2ab78
        public_6d2ab6f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x50], edx
        public_6d2ab78 : nop
        mov eax, dword ptr ss : [ebp-0x50]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFE
        jge public_6d2ac00
        mov edx, 1
        test edx, edx
        je public_6d2ac00
        push 1
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e0a4]
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2abaf
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x74], ecx
        jmp public_6d2abb8
        public_6d2abaf : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x74], eax
        public_6d2abb8 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x54], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp-0x58], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x58]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x78], eax
        mov ecx, dword ptr ss : [ebp-0x78]
        mov dl, byte ptr ds : [ecx]
        add dl, 1
        mov eax, dword ptr ss : [ebp-0x78]
        mov byte ptr ds : [eax], dl
        jmp public_6d2ac78
        public_6d2ac00 : nop
        push 1
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp-4]
        call dword ptr ds : [public_6d5e0a8]
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d2ac78
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2ac2b
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x7C], ecx
        jmp public_6d2ac34
        public_6d2ac2b : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x7C], eax
        public_6d2ac34 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x5C], edx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ss : [ebp-0x7C]
        add esi, dword ptr ss : [ebp-0x68]
        mov edi, dword ptr ss : [ebp-0x5C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0x5D], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x64], ecx
        mov edx, dword ptr ss : [ebp-0x64]
        mov al, byte ptr ss : [ebp-0x5D]
        mov byte ptr ds : [edx], al
        public_6d2ac78 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [ecx+0x10], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x80], ecx
        jmp public_6d2ac93
        public_6d2ac8c : nop
        mov dword ptr ss : [ebp-0x80], 0
        public_6d2ac93 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2a8c0)
    }
}

#undef public_6d2a8f4
#undef public_6d2a8f6
#undef public_6d2a916
#undef public_6d2a93c
#undef public_6d2a955
#undef public_6d2a99c
#undef public_6d2a9bc
#undef public_6d2a9ec
#undef public_6d2aa0f
#undef public_6d2aa83
#undef public_6d2aaa1
#undef public_6d2aac4
#undef public_6d2ab38
#undef public_6d2ab3d
#undef public_6d2ab6f
#undef public_6d2ab78
#undef public_6d2abaf
#undef public_6d2abb8
#undef public_6d2ac00
#undef public_6d2ac2b
#undef public_6d2ac34
#undef public_6d2ac78
#undef public_6d2ac8c
#undef public_6d2ac93
