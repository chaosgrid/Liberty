#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c910);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d17098 _public_6d17098
#define public_6d170da _public_6d170da
#define public_6d170e5 _public_6d170e5
#define public_6d170f9 _public_6d170f9
#define public_6d170ff _public_6d170ff
#define public_6d1712f _public_6d1712f
#define public_6d17182 _public_6d17182

PROC_DECLARE(0x6d16ff0, internal_6d16ff0, public_6d16ff0);
extern "C" NAKED register_t __cdecl internal_6d16ff0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x5C
        mov dword ptr ss : [ebp-0x5C], ecx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x58], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [ebp-0x2C], edx
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_6d17098
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov edx, dword ptr ss : [ebp-0x54]
        sub edx, dword ptr ss : [ebp-0x1C]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        jne public_6d17098
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x58]
        sub edx, dword ptr ss : [ebp-0x20]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d170e5
        public_6d17098 : nop
        mov edx, dword ptr ss : [ebp-0x54]
        sub edx, dword ptr ss : [ebp-0x58]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d170da
        mov edx, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0x3C], edx
        lea ecx, ss:[ebp-0x54]
        call public_6d1c910
        mov eax, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        push ecx
        lea edx, ss:[ebp-0x28]
        push edx
        mov ecx, dword ptr ss : [ebp-0x5C]
        call public_6d1bcc0
        jmp public_6d17098
        public_6d170da : nop
        mov eax, dword ptr ss : [ebp-0x54]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d17182
        public_6d170e5 : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x40], ecx
        jmp public_6d170ff
        public_6d170f9 : nop
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-0x44], edx
        public_6d170ff : nop
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ss : [ebp-0x40]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1712f
        mov edx, dword ptr ss : [ebp-0x40]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x5C]
        call public_6d1c7c0
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x40], edx
        mov eax, dword ptr ss : [ebp-0x44]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d170f9
        public_6d1712f : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x48], ecx
        mov edx, dword ptr ss : [ebp-0x48]
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x5C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x5C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x5C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x4C], ecx
        mov edx, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp-0xC], ecx
        public_6d17182 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d16ff0)
    }
}

#undef public_6d17098
#undef public_6d170da
#undef public_6d170e5
#undef public_6d170f9
#undef public_6d170ff
#undef public_6d1712f
#undef public_6d17182
