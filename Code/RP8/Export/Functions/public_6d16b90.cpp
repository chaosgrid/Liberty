#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16b90);
CLANG_FORWARD_PROC_SYMBOL(public_6d1dc90);
CLANG_FORWARD_PROC_SYMBOL(public_6d1e710);

#define public_6d16bb2 _public_6d16bb2
#define public_6d16be7 _public_6d16be7
#define public_6d16bf0 _public_6d16bf0
#define public_6d16bf8 _public_6d16bf8
#define public_6d16c35 _public_6d16c35
#define public_6d16c45 _public_6d16c45
#define public_6d16c9e _public_6d16c9e
#define public_6d16ca6 _public_6d16ca6
#define public_6d16cec _public_6d16cec
#define public_6d16cfc _public_6d16cfc

PROC_DECLARE(0x6d16b90, internal_6d16b90, public_6d16b90);
extern "C" NAKED register_t __cdecl internal_6d16b90()
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
        public_6d16bb2 : nop
        mov edx, dword ptr ss : [ebp-0x54]
        mov eax, dword ptr ss : [ebp-0x14]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d16bf8
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
        je public_6d16be7
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x58], edx
        jmp public_6d16bf0
        public_6d16be7 : nop
        mov eax, dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x58], ecx
        public_6d16bf0 : nop
        mov edx, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d16bb2
        public_6d16bf8 : nop
        mov eax, dword ptr ss : [ebp-0x54]
        movzx ecx, byte ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6d16c35
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
        call public_6d1dc90
        mov dword ptr ss : [ebp-0x3C], eax
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-8], ecx
        mov dl, byte ptr ss : [ebp-0x1A]
        mov byte ptr ss : [ebp-4], dl
        jmp public_6d16cfc
        public_6d16c35 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0xC], eax
        movzx ecx, byte ptr ss : [ebp-0xD]
        test ecx, ecx
        jne public_6d16c45
        jmp public_6d16ca6
        public_6d16c45 : nop
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
        je public_6d16c9e
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
        call public_6d1dc90
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp-0x48]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        mov al, byte ptr ss : [ebp-0x25]
        mov byte ptr ss : [ebp-4], al
        jmp public_6d16cfc
        public_6d16c9e : nop
        lea ecx, ss:[ebp-0xC]
        call public_6d1e710
        public_6d16ca6 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ecx+0xC]
        cmp eax, dword ptr ds : [edx]
        sbb ecx, ecx
        neg ecx
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d16cec
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
        call public_6d1dc90
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        mov al, byte ptr ss : [ebp-0x2E]
        mov byte ptr ss : [ebp-4], al
        jmp public_6d16cfc
        public_6d16cec : nop
        mov byte ptr ss : [ebp-0x35], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], ecx
        mov dl, byte ptr ss : [ebp-0x35]
        mov byte ptr ss : [ebp-4], dl
        public_6d16cfc : nop
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
        UNREACHABLE_TRAP(0x6d16b90)
    }
}

#undef public_6d16bb2
#undef public_6d16be7
#undef public_6d16bf0
#undef public_6d16bf8
#undef public_6d16c35
#undef public_6d16c45
#undef public_6d16c9e
#undef public_6d16ca6
#undef public_6d16cec
#undef public_6d16cfc
