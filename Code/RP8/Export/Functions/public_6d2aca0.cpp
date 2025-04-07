#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2aca0);

#define public_6d2acd9 _public_6d2acd9
#define public_6d2acf9 _public_6d2acf9
#define public_6d2ad30 _public_6d2ad30
#define public_6d2ad5c _public_6d2ad5c
#define public_6d2ade7 _public_6d2ade7
#define public_6d2adfe _public_6d2adfe
#define public_6d2ae30 _public_6d2ae30
#define public_6d2ae39 _public_6d2ae39
#define public_6d2ae7e _public_6d2ae7e
#define public_6d2ae8a _public_6d2ae8a
#define public_6d2aeea _public_6d2aeea
#define public_6d2af1b _public_6d2af1b
#define public_6d2af27 _public_6d2af27
#define public_6d2af60 _public_6d2af60
#define public_6d2afa7 _public_6d2afa7
#define public_6d2afca _public_6d2afca
#define public_6d2b003 _public_6d2b003
#define public_6d2b02f _public_6d2b02f
#define public_6d2b0b9 _public_6d2b0b9
#define public_6d2b0d0 _public_6d2b0d0
#define public_6d2b109 _public_6d2b109
#define public_6d2b115 _public_6d2b115
#define public_6d2b15d _public_6d2b15d
#define public_6d2b16c _public_6d2b16c
#define public_6d2b1d1 _public_6d2b1d1
#define public_6d2b204 _public_6d2b204
#define public_6d2b213 _public_6d2b213
#define public_6d2b24c _public_6d2b24c

PROC_DECLARE(0x6d2aca0, internal_6d2aca0, public_6d2aca0);
extern "C" NAKED register_t __cdecl internal_6d2aca0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xA4
        push esi
        push edi
        mov dword ptr ss : [ebp-0x8C], ecx
        mov eax, dword ptr ds : [public_6d5e094]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x40], ecx
        mov dword ptr ss : [ebp-0x3C], 0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        cmp ecx, dword ptr ss : [ebp-0x3C]
        jae public_6d2acd9
        call dword ptr ds : [public_6d5e07c]
        public_6d2acd9 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        sub ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        cmp edx, dword ptr ss : [ebp-4]
        jae public_6d2acf9
        mov eax, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-4], eax
        public_6d2acf9 : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        cmp ecx, dword ptr ss : [ebp+8]
        jne public_6d2adfe
        mov edx, dword ptr ds : [public_6d5e094]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x8C]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp-0x20]
        jae public_6d2ad30
        call dword ptr ds : [public_6d5e07c]
        public_6d2ad30 : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        call dword ptr ds : [public_6d5e080]
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov edx, dword ptr ds : [ecx+8]
        sub edx, dword ptr ss : [ebp-0x20]
        cmp edx, dword ptr ss : [ebp-0x24]
        jae public_6d2ad5c
        mov eax, dword ptr ss : [ebp-0x8C]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d2ad5c : nop
        cmp dword ptr ss : [ebp-0x24], 0
        jbe public_6d2ade7
        mov edx, dword ptr ss : [ebp-0x8C]
        mov eax, dword ptr ds : [edx+8]
        sub eax, dword ptr ss : [ebp-0x20]
        sub eax, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov edx, dword ptr ds : [ecx+4]
        add edx, dword ptr ss : [ebp-0x20]
        add edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x8C]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call dword ptr ds : [public_6d5e12c]
        add esp, 0xC
        mov edx, dword ptr ss : [ebp-0x8C]
        mov eax, dword ptr ds : [edx+8]
        sub eax, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x10], eax
        push 0
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x8C]
        call dword ptr ds : [public_6d5e0a8]
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d2ade7
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        mov ecx, dword ptr ss : [ebp-0x8C]
        call dword ptr ds : [public_6d5e098]
        public_6d2ade7 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        push ecx
        push 0
        mov ecx, dword ptr ss : [ebp-0x8C]
        call dword ptr ds : [public_6d5e070]
        jmp public_6d2af60
        public_6d2adfe : nop
        cmp dword ptr ss : [ebp-4], 0
        jbe public_6d2aeea
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ss : [ebp-0x28]
        jne public_6d2aeea
        mov edx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d2ae30
        mov eax, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x2C], eax
        jmp public_6d2ae39
        public_6d2ae30 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2C], edx
        public_6d2ae39 : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFE
        jge public_6d2aeea
        mov edx, 1
        test edx, edx
        je public_6d2aeea
        push 1
        mov ecx, dword ptr ss : [ebp-0x8C]
        call dword ptr ds : [public_6d5e0a4]
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2ae7e
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x90], ecx
        jmp public_6d2ae8a
        public_6d2ae7e : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x90], eax
        public_6d2ae8a : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov edx, dword ptr ss : [ebp-0x90]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x8C]
        mov eax, dword ptr ss : [ebp-0x30]
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp-0x34], edx
        mov eax, dword ptr ss : [ebp-0x8C]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-0x8C]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x94], eax
        mov ecx, dword ptr ss : [ebp-0x94]
        mov dl, byte ptr ds : [ecx]
        add dl, 1
        mov eax, dword ptr ss : [ebp-0x94]
        mov byte ptr ds : [eax], dl
        jmp public_6d2af60
        public_6d2aeea : nop
        push 1
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x8C]
        call dword ptr ds : [public_6d5e0a8]
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d2af60
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2af1b
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x98], ecx
        jmp public_6d2af27
        public_6d2af1b : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x98], eax
        public_6d2af27 : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x38], edx
        mov ecx, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp-0x98]
        add esi, dword ptr ss : [ebp-0x3C]
        mov edi, dword ptr ss : [ebp-0x38]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-4]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x8C]
        call dword ptr ds : [public_6d5e098]
        public_6d2af60 : nop
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x88], edx
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x84], eax
        mov ecx, dword ptr ds : [public_6d5e094]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x80], edx
        mov dword ptr ss : [ebp-0x7C], 0
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x48]
        cmp edx, dword ptr ss : [ebp-0x7C]
        jae public_6d2afa7
        call dword ptr ds : [public_6d5e07c]
        public_6d2afa7 : nop
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x4C], ecx
        mov edx, dword ptr ss : [ebp-0x4C]
        sub edx, dword ptr ss : [ebp-0x7C]
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, dword ptr ss : [ebp-0x80]
        cmp eax, dword ptr ss : [ebp-0x44]
        jae public_6d2afca
        mov ecx, dword ptr ss : [ebp-0x80]
        mov dword ptr ss : [ebp-0x44], ecx
        public_6d2afca : nop
        mov edx, dword ptr ss : [ebp-0x84]
        cmp edx, dword ptr ss : [ebp-0x88]
        jne public_6d2b0d0
        mov eax, dword ptr ds : [public_6d5e094]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x64], ecx
        mov edx, dword ptr ss : [ebp-0x7C]
        add edx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x60], edx
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ss : [ebp-0x60]
        jae public_6d2b003
        call dword ptr ds : [public_6d5e07c]
        public_6d2b003 : nop
        mov ecx, dword ptr ss : [ebp-0x84]
        call dword ptr ds : [public_6d5e080]
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ds : [edx+8]
        sub eax, dword ptr ss : [ebp-0x60]
        cmp eax, dword ptr ss : [ebp-0x64]
        jae public_6d2b02f
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ds : [ecx+8]
        sub edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ss : [ebp-0x64], edx
        public_6d2b02f : nop
        cmp dword ptr ss : [ebp-0x64], 0
        jbe public_6d2b0b9
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, dword ptr ss : [ebp-0x60]
        sub ecx, dword ptr ss : [ebp-0x64]
        mov dword ptr ss : [ebp-0x5C], ecx
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0x60]
        add eax, dword ptr ss : [ebp-0x64]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ds : [ecx+4]
        add edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ss : [ebp-0x54], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x58]
        push ecx
        mov edx, dword ptr ss : [ebp-0x54]
        push edx
        call dword ptr ds : [public_6d5e12c]
        add esp, 0xC
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, dword ptr ss : [ebp-0x64]
        mov dword ptr ss : [ebp-0x50], ecx
        push 0
        mov edx, dword ptr ss : [ebp-0x50]
        push edx
        mov ecx, dword ptr ss : [ebp-0x84]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d2b0b9
        mov ecx, dword ptr ss : [ebp-0x50]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x84]
        call dword ptr ds : [public_6d5e098]
        public_6d2b0b9 : nop
        mov edx, dword ptr ss : [ebp-0x7C]
        push edx
        push 0
        mov ecx, dword ptr ss : [ebp-0x84]
        call dword ptr ds : [public_6d5e070]
        jmp public_6d2b24c
        public_6d2b0d0 : nop
        cmp dword ptr ss : [ebp-0x44], 0
        jbe public_6d2b1d1
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x68], ecx
        mov edx, dword ptr ss : [ebp-0x44]
        cmp edx, dword ptr ss : [ebp-0x68]
        jne public_6d2b1d1
        mov eax, dword ptr ss : [ebp-0x88]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d2b109
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x6C], ecx
        jmp public_6d2b115
        public_6d2b109 : nop
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x6C], eax
        public_6d2b115 : nop
        mov ecx, dword ptr ss : [ebp-0x6C]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFE
        jge public_6d2b1d1
        mov eax, 1
        test eax, eax
        je public_6d2b1d1
        push 1
        mov ecx, dword ptr ss : [ebp-0x84]
        call dword ptr ds : [public_6d5e0a4]
        mov ecx, dword ptr ss : [ebp-0x88]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2b15d
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x9C], edx
        jmp public_6d2b16c
        public_6d2b15d : nop
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x9C], ecx
        public_6d2b16c : nop
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ss : [ebp-0x9C]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp-0x88]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x70], edx
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ss : [ebp-0x70]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x88]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [ebp-0x74], eax
        mov ecx, dword ptr ss : [ebp-0x84]
        mov edx, dword ptr ss : [ebp-0x74]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ss : [ebp-0x84]
        mov ecx, dword ptr ds : [eax+4]
        sub ecx, 1
        mov dword ptr ss : [ebp-0xA0], ecx
        mov edx, dword ptr ss : [ebp-0xA0]
        mov al, byte ptr ds : [edx]
        add al, 1
        mov ecx, dword ptr ss : [ebp-0xA0]
        mov byte ptr ds : [ecx], al
        jmp public_6d2b24c
        public_6d2b1d1 : nop
        push 1
        mov edx, dword ptr ss : [ebp-0x44]
        push edx
        mov ecx, dword ptr ss : [ebp-0x84]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d2b24c
        mov ecx, dword ptr ss : [ebp-0x88]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d2b204
        mov edx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0xA4], edx
        jmp public_6d2b213
        public_6d2b204 : nop
        mov eax, dword ptr ss : [ebp-0x88]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0xA4], ecx
        public_6d2b213 : nop
        mov edx, dword ptr ss : [ebp-0x84]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x78], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov esi, dword ptr ss : [ebp-0xA4]
        add esi, dword ptr ss : [ebp-0x7C]
        mov edi, dword ptr ss : [ebp-0x78]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        mov ecx, dword ptr ss : [ebp-0x84]
        call dword ptr ds : [public_6d5e098]
        public_6d2b24c : nop
        mov eax, dword ptr ss : [ebp-0x8C]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d2aca0)
    }
}

#undef public_6d2acd9
#undef public_6d2acf9
#undef public_6d2ad30
#undef public_6d2ad5c
#undef public_6d2ade7
#undef public_6d2adfe
#undef public_6d2ae30
#undef public_6d2ae39
#undef public_6d2ae7e
#undef public_6d2ae8a
#undef public_6d2aeea
#undef public_6d2af1b
#undef public_6d2af27
#undef public_6d2af60
#undef public_6d2afa7
#undef public_6d2afca
#undef public_6d2b003
#undef public_6d2b02f
#undef public_6d2b0b9
#undef public_6d2b0d0
#undef public_6d2b109
#undef public_6d2b115
#undef public_6d2b15d
#undef public_6d2b16c
#undef public_6d2b1d1
#undef public_6d2b204
#undef public_6d2b213
#undef public_6d2b24c
