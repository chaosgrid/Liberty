#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1e200);
CLANG_FORWARD_PROC_SYMBOL(public_6d1e7c0);

#define public_6d19ac2 _public_6d19ac2
#define public_6d19af7 _public_6d19af7
#define public_6d19b00 _public_6d19b00
#define public_6d19b08 _public_6d19b08
#define public_6d19b45 _public_6d19b45
#define public_6d19b55 _public_6d19b55
#define public_6d19bae _public_6d19bae
#define public_6d19bb6 _public_6d19bb6
#define public_6d19bfc _public_6d19bfc
#define public_6d19c0c _public_6d19c0c

PROC_DECLARE(0x6d19aa0, internal_6d19aa0, public_6d19aa0);
extern "C" NAKED register_t __cdecl internal_6d19aa0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        mov dword ptr ss : [ebp-0x54], ecx
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp-0x54]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x18], ecx
        mov byte ptr ss : [ebp-0xD], 1
        public_6d19ac2 : nop
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ss : [ebp-0x14]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d19b08
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+0xC]
        sbb edx, edx
        neg edx
        mov byte ptr ss : [ebp-0xD], dl
        movzx eax, byte ptr ss : [ebp-0xD]
        test eax, eax
        je public_6d19af7
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x58], edx
        jmp public_6d19b00
        public_6d19af7 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x58], ecx
        public_6d19b00 : nop
        mov edx, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d19ac2
        public_6d19b08 : nop
        mov eax, dword ptr ss : [ebp-0x54]
        movzx ecx, byte ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6d19b45
        mov byte ptr ss : [ebp-0x1A], 1
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        lea edx, ss:[ebp-0x20]
        push edx
        mov ecx, dword ptr ss : [ebp-0x54]
        call public_6d1e200
        mov dword ptr ss : [ebp-0x3C], eax
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-8], ecx
        mov dl, byte ptr ss : [ebp-0x1A]
        mov byte ptr ss : [ebp-4], dl
        jmp public_6d19c0c
        public_6d19b45 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0xC], eax
        movzx ecx, byte ptr ss : [ebp-0xD]
        test ecx, ecx
        jne public_6d19b55
        jmp public_6d19bb6
        public_6d19b55 : nop
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x44], edx
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        sub ecx, dword ptr ss : [ebp-0x24]
        neg ecx
        sbb ecx, ecx
        inc ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d19bae
        mov byte ptr ss : [ebp-0x25], 1
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        lea eax, ss:[ebp-0x2C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x54]
        call public_6d1e200
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        mov al, byte ptr ss : [ebp-0x25]
        mov byte ptr ss : [ebp-4], al
        jmp public_6d19c0c
        public_6d19bae : nop
        lea ecx, ss:[ebp-0xC]
        call public_6d1e7c0
        public_6d19bb6 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, dword ptr ds : [edx]
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d19bfc
        mov byte ptr ss : [ebp-0x2E], 1
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        lea eax, ss:[ebp-0x34]
        push eax
        mov ecx, dword ptr ss : [ebp-0x54]
        call public_6d1e200
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        mov al, byte ptr ss : [ebp-0x2E]
        mov byte ptr ss : [ebp-4], al
        jmp public_6d19c0c
        public_6d19bfc : nop
        mov byte ptr ss : [ebp-0x35], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], ecx
        mov dl, byte ptr ss : [ebp-0x35]
        mov byte ptr ss : [ebp-4], dl
        public_6d19c0c : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+8]
        mov al, byte ptr ss : [ebp-4]
        mov byte ptr ds : [edx+4], al
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d19aa0)
    }
}

#undef public_6d19ac2
#undef public_6d19af7
#undef public_6d19b00
#undef public_6d19b08
#undef public_6d19b45
#undef public_6d19b55
#undef public_6d19bae
#undef public_6d19bb6
#undef public_6d19bfc
#undef public_6d19c0c
