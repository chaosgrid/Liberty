#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22851);
CLANG_FORWARD_PROC_SYMBOL(public_6d285c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d2287a _public_6d2287a
#define public_6d228a3 _public_6d228a3
#define public_6d228af _public_6d228af
#define public_6d2293a _public_6d2293a
#define public_6d2293f _public_6d2293f
#define public_6d2294d _public_6d2294d
#define public_6d229be _public_6d229be
#define public_6d22a21 _public_6d22a21
#define public_6d22ad6 _public_6d22ad6
#define public_6d22ad8 _public_6d22ad8
#define public_6d22af2 _public_6d22af2
#define public_6d22b1b _public_6d22b1b
#define public_6d22b3a _public_6d22b3a
#define public_6d22b5e _public_6d22b5e
#define public_6d22b60 _public_6d22b60
#define public_6d22b7a _public_6d22b7a
#define public_6d22ba3 _public_6d22ba3
#define public_6d22bc2 _public_6d22bc2
#define public_6d22bd7 _public_6d22bd7

PROC_DECLARE(0x6d22851, internal_6d22851, public_6d22851);
extern "C" NAKED register_t __cdecl internal_6d22851()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xB0
        push esi
        push edi
        mov dword ptr ss : [ebp-0xA4], ecx
        mov eax, dword ptr ss : [ebp-0xA4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-4], eax
        public_6d2287a : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp ecx, dword ptr ss : [ebp-4]
        je public_6d2294d
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d228a3
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0xA8], ecx
        jmp public_6d228af
        public_6d228a3 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0xA8], eax
        public_6d228af : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        mov edx, dword ptr ss : [ebp-0xA8]
        push edx
        call dword ptr ds : [public_6d5e108]
        add esp, 8
        test eax, eax
        jne public_6d2293f
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x68], eax
        mov edi, dword ptr ss : [ebp+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x64], ecx
        push 1
        mov ecx, dword ptr ss : [ebp-0x64]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x68]
        call dword ptr ds : [public_6d5e0a8]
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d2293a
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x58], ecx
        mov ecx, dword ptr ss : [ebp-0x64]
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp-0x58]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0x59], 0
        mov eax, dword ptr ss : [ebp-0x68]
        mov ecx, dword ptr ss : [ebp-0x64]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x68]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0x64]
        mov dword ptr ss : [ebp-0x60], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        mov dl, byte ptr ss : [ebp-0x59]
        mov byte ptr ds : [ecx], dl
        public_6d2293a : nop
        jmp public_6d22bd7
        public_6d2293f : nop
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x20
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d2287a
        public_6d2294d : nop
        mov cl, byte ptr ss : [ebp-0x3D]
        mov byte ptr ss : [ebp-0x3C], cl
        push 0
        lea ecx, ss:[ebp-0x3C]
        call dword ptr ds : [public_6d5e0a4]
        mov edi, dword ptr ss : [ebp+0xC]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x78], ecx
        push 1
        mov edx, dword ptr ss : [ebp-0x78]
        push edx
        lea ecx, ss:[ebp-0x3C]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d229be
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x6C], ecx
        mov ecx, dword ptr ss : [ebp-0x78]
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp-0x6C]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0x6D], 0
        mov eax, dword ptr ss : [ebp-0x78]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        add ecx, dword ptr ss : [ebp-0x78]
        mov dword ptr ss : [ebp-0x74], ecx
        mov edx, dword ptr ss : [ebp-0x74]
        mov al, byte ptr ss : [ebp-0x6D]
        mov byte ptr ds : [edx], al
        public_6d229be : nop
        mov cl, byte ptr ss : [ebp-0x51]
        mov byte ptr ss : [ebp-0x50], cl
        push 0
        lea ecx, ss:[ebp-0x50]
        call dword ptr ds : [public_6d5e0a4]
        mov edi, dword ptr ss : [ebp+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x80], ecx
        push 1
        mov edx, dword ptr ss : [ebp-0x80]
        push edx
        lea ecx, ss:[ebp-0x50]
        call dword ptr ds : [public_6d5e0a8]
        movzx eax, al
        test eax, eax
        je public_6d22a21
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp-0x7C], ecx
        mov ecx, dword ptr ss : [ebp-0x80]
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp-0x7C]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x80]
        push eax
        lea ecx, ss:[ebp-0x50]
        call dword ptr ds : [public_6d5e098]
        public_6d22a21 : nop
        mov cl, byte ptr ss : [ebp-0x50]
        mov byte ptr ss : [ebp-0x2C], cl
        push 0
        lea ecx, ss:[ebp-0x2C]
        call dword ptr ds : [public_6d5e0a4]
        mov edx, dword ptr ds : [public_6d5e094]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ss:[ebp-0x50]
        push ecx
        lea ecx, ss:[ebp-0x2C]
        call dword ptr ds : [public_6d5e090]
        lea edx, ss:[ebp-0x3C]
        push edx
        lea ecx, ss:[ebp-0x1C]
        call dword ptr ds : [public_6d5e08c]
        mov eax, dword ptr ss : [ebp-0xA4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x84], ecx
        mov edx, dword ptr ss : [ebp-0xA4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x8C], eax
        mov ecx, dword ptr ss : [ebp-0x84]
        sub ecx, dword ptr ss : [ebp-0x8C]
        sar ecx, 5
        mov dword ptr ss : [ebp-0x88], ecx
        lea edx, ss:[ebp-0x2C]
        push edx
        push 1
        mov eax, dword ptr ss : [ebp-0x84]
        push eax
        mov ecx, dword ptr ss : [ebp-0xA4]
        call public_6d285c0
        mov ecx, dword ptr ss : [ebp-0xA4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x90], edx
        push 1
        lea ecx, ss:[ebp-0x1C]
        call dword ptr ds : [public_6d5e0a4]
        push 1
        lea ecx, ss:[ebp-0x2C]
        call dword ptr ds : [public_6d5e0a4]
        mov eax, 1
        test eax, eax
        je public_6d22ad6
        cmp dword ptr ss : [ebp-0x4C], 0
        jne public_6d22ad8
        public_6d22ad6 : nop
        jmp public_6d22b3a
        public_6d22ad8 : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d22af2
        mov eax, dword ptr ss : [ebp-0x4C]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d22b1b
        public_6d22af2 : nop
        mov edx, dword ptr ss : [ebp-0x44]
        add edx, 2
        mov dword ptr ss : [ebp-0x98], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        sub eax, 1
        mov dword ptr ss : [ebp-0x94], eax
        mov ecx, dword ptr ss : [ebp-0x94]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d22b3a
        public_6d22b1b : nop
        mov edx, dword ptr ss : [ebp-0x4C]
        sub edx, 1
        mov dword ptr ss : [ebp-0xAC], edx
        mov eax, dword ptr ss : [ebp-0xAC]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0xAC]
        mov byte ptr ds : [edx], cl
        public_6d22b3a : nop
        mov dword ptr ss : [ebp-0x4C], 0
        mov dword ptr ss : [ebp-0x48], 0
        mov dword ptr ss : [ebp-0x44], 0
        mov eax, 1
        test eax, eax
        je public_6d22b5e
        cmp dword ptr ss : [ebp-0x38], 0
        jne public_6d22b60
        public_6d22b5e : nop
        jmp public_6d22bc2
        public_6d22b60 : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d22b7a
        mov eax, dword ptr ss : [ebp-0x38]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d22ba3
        public_6d22b7a : nop
        mov edx, dword ptr ss : [ebp-0x30]
        add edx, 2
        mov dword ptr ss : [ebp-0xA0], edx
        mov eax, dword ptr ss : [ebp-0x38]
        sub eax, 1
        mov dword ptr ss : [ebp-0x9C], eax
        mov ecx, dword ptr ss : [ebp-0x9C]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d22bc2
        public_6d22ba3 : nop
        mov edx, dword ptr ss : [ebp-0x38]
        sub edx, 1
        mov dword ptr ss : [ebp-0xB0], edx
        mov eax, dword ptr ss : [ebp-0xB0]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0xB0]
        mov byte ptr ds : [edx], cl
        public_6d22bc2 : nop
        mov dword ptr ss : [ebp-0x38], 0
        mov dword ptr ss : [ebp-0x34], 0
        mov dword ptr ss : [ebp-0x30], 0
        public_6d22bd7 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d22851)
    }
}

#undef public_6d2287a
#undef public_6d228a3
#undef public_6d228af
#undef public_6d2293a
#undef public_6d2293f
#undef public_6d2294d
#undef public_6d229be
#undef public_6d22a21
#undef public_6d22ad6
#undef public_6d22ad8
#undef public_6d22af2
#undef public_6d22b1b
#undef public_6d22b3a
#undef public_6d22b5e
#undef public_6d22b60
#undef public_6d22b7a
#undef public_6d22ba3
#undef public_6d22bc2
#undef public_6d22bd7
