#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d22d02 _public_6d22d02
#define public_6d22d69 _public_6d22d69
#define public_6d22d7e _public_6d22d7e
#define public_6d22dd1 _public_6d22dd1
#define public_6d22dd3 _public_6d22dd3
#define public_6d22ded _public_6d22ded
#define public_6d22e0d _public_6d22e0d
#define public_6d22e23 _public_6d22e23
#define public_6d22e40 _public_6d22e40
#define public_6d22e5e _public_6d22e5e
#define public_6d22e60 _public_6d22e60
#define public_6d22e7a _public_6d22e7a
#define public_6d22e9a _public_6d22e9a
#define public_6d22eb0 _public_6d22eb0
#define public_6d22ec8 _public_6d22ec8

PROC_DECLARE(0x6d22c93, internal_6d22c93, public_6d22c93);
extern "C" NAKED register_t __cdecl internal_6d22c93()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x7C
        push esi
        push edi
        mov dword ptr ss : [ebp-0x70], ecx
        mov al, byte ptr ss : [ebp-0x19]
        mov byte ptr ss : [ebp-0x14], al
        push 0
        lea ecx, ss:[ebp-0x14]
        call dword ptr ds : [public_6d5e0a4]
        mov edi, dword ptr ss : [ebp+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x34], ecx
        push 1
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        lea ecx, ss:[ebp-0x14]
        call dword ptr ds : [public_6d5e0a8]
        xor edx, edx
        mov dl, al
        test edx, edx
        je public_6d22d02
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp-0x30]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        lea ecx, ss:[ebp-0x14]
        call dword ptr ds : [public_6d5e098]
        public_6d22d02 : nop
        mov ecx, dword ptr ss : [ebp-0x70]
        add ecx, 0x55C
        mov dword ptr ss : [ebp-0x58], ecx
        lea edx, ss:[ebp-0x14]
        push edx
        lea eax, ss:[ebp-0x38]
        push eax
        mov ecx, dword ptr ss : [ebp-0x58]
        call public_6d29b10
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x48], edx
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        sub ecx, dword ptr ss : [ebp-0x40]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        jne public_6d22d69
        mov eax, dword ptr ss : [ebp-0x38]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        push ecx
        lea edx, ss:[ebp-0x14]
        push edx
        call dword ptr ds : [public_6d5e0ac]
        add esp, 8
        movzx eax, al
        test eax, eax
        jne public_6d22d69
        lea ecx, ss:[ebp-0x38]
        mov dword ptr ss : [ebp-0x74], ecx
        jmp public_6d22d7e
        public_6d22d69 : nop
        mov edx, dword ptr ss : [ebp-0x58]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0x44], ecx
        lea edx, ss:[ebp-0x44]
        mov dword ptr ss : [ebp-0x74], edx
        public_6d22d7e : nop
        mov eax, dword ptr ss : [ebp-0x74]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x70]
        mov edx, dword ptr ds : [ecx+0x560]
        mov dword ptr ss : [ebp-0x5C], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        sub ecx, dword ptr ss : [ebp-0x24]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d22e40
        mov dword ptr ss : [ebp-0x28], 0
        mov eax, 1
        test eax, eax
        je public_6d22dd1
        cmp dword ptr ss : [ebp-0x10], 0
        jne public_6d22dd3
        public_6d22dd1 : nop
        jmp public_6d22e23
        public_6d22dd3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d22ded
        mov eax, dword ptr ss : [ebp-0x10]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d22e0d
        public_6d22ded : nop
        mov edx, dword ptr ss : [ebp-8]
        add edx, 2
        mov dword ptr ss : [ebp-0x64], edx
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 1
        mov dword ptr ss : [ebp-0x60], eax
        mov ecx, dword ptr ss : [ebp-0x60]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d22e23
        public_6d22e0d : nop
        mov edx, dword ptr ss : [ebp-0x10]
        sub edx, 1
        mov dword ptr ss : [ebp-0x78], edx
        mov eax, dword ptr ss : [ebp-0x78]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x78]
        mov byte ptr ds : [edx], cl
        public_6d22e23 : nop
        mov dword ptr ss : [ebp-0x10], 0
        mov dword ptr ss : [ebp-0xC], 0
        mov dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp-0x28]
        jmp public_6d22ec8
        public_6d22e40 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, 1
        test eax, eax
        je public_6d22e5e
        cmp dword ptr ss : [ebp-0x10], 0
        jne public_6d22e60
        public_6d22e5e : nop
        jmp public_6d22eb0
        public_6d22e60 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d22e7a
        mov eax, dword ptr ss : [ebp-0x10]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d22e9a
        public_6d22e7a : nop
        mov edx, dword ptr ss : [ebp-8]
        add edx, 2
        mov dword ptr ss : [ebp-0x6C], edx
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 1
        mov dword ptr ss : [ebp-0x68], eax
        mov ecx, dword ptr ss : [ebp-0x68]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d22eb0
        public_6d22e9a : nop
        mov edx, dword ptr ss : [ebp-0x10]
        sub edx, 1
        mov dword ptr ss : [ebp-0x7C], edx
        mov eax, dword ptr ss : [ebp-0x7C]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x7C]
        mov byte ptr ds : [edx], cl
        public_6d22eb0 : nop
        mov dword ptr ss : [ebp-0x10], 0
        mov dword ptr ss : [ebp-0xC], 0
        mov dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp-0x2C]
        public_6d22ec8 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d22c93)
    }
}

#undef public_6d22d02
#undef public_6d22d69
#undef public_6d22d7e
#undef public_6d22dd1
#undef public_6d22dd3
#undef public_6d22ded
#undef public_6d22e0d
#undef public_6d22e23
#undef public_6d22e40
#undef public_6d22e5e
#undef public_6d22e60
#undef public_6d22e7a
#undef public_6d22e9a
#undef public_6d22eb0
#undef public_6d22ec8
