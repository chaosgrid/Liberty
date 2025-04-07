#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16e80);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c910);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d16ef6 _public_6d16ef6
#define public_6d16f38 _public_6d16f38
#define public_6d16f48 _public_6d16f48
#define public_6d16f5c _public_6d16f5c
#define public_6d16f62 _public_6d16f62
#define public_6d16f92 _public_6d16f92
#define public_6d16fea _public_6d16fea

PROC_DECLARE(0x6d16e80, internal_6d16e80, public_6d16e80);
extern "C" NAKED register_t __cdecl internal_6d16e80()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x3C
        mov dword ptr ss : [ebp-0x3C], ecx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp-0x14], ecx
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d16ef6
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, dword ptr ss : [ebp-4]
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
        jne public_6d16ef6
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        sub ecx, dword ptr ss : [ebp-8]
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
        je public_6d16f48
        public_6d16ef6 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, dword ptr ss : [ebp+0x10]
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
        je public_6d16f38
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x24], ecx
        lea ecx, ss:[ebp+0xC]
        call public_6d1c910
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        lea ecx, ss:[ebp-0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x3C]
        call public_6d1bcc0
        jmp public_6d16ef6
        public_6d16f38 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d16fea
        public_6d16f48 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x28], ecx
        jmp public_6d16f62
        public_6d16f5c : nop
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x2C], edx
        public_6d16f62 : nop
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ss : [ebp-0x28]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d16f92
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x3C]
        call public_6d1c7c0
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x28], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d16f5c
        public_6d16f92 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x30], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x3C]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        public_6d16fea : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d16e80)
    }
}

#undef public_6d16ef6
#undef public_6d16f38
#undef public_6d16f48
#undef public_6d16f5c
#undef public_6d16f62
#undef public_6d16f92
#undef public_6d16fea
