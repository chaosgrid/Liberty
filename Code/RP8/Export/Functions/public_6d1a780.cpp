#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1a780);
CLANG_FORWARD_PROC_SYMBOL(public_6d1bc60);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c990);
CLANG_FORWARD_PROC_SYMBOL(public_6d1d3c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1d590);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1a7f6 _public_6d1a7f6
#define public_6d1a838 _public_6d1a838
#define public_6d1a848 _public_6d1a848
#define public_6d1a85c _public_6d1a85c
#define public_6d1a862 _public_6d1a862
#define public_6d1a8ad _public_6d1a8ad
#define public_6d1a8bb _public_6d1a8bb
#define public_6d1a913 _public_6d1a913

PROC_DECLARE(0x6d1a780, internal_6d1a780, public_6d1a780);
extern "C" NAKED register_t __cdecl internal_6d1a780()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov dword ptr ss : [ebp-0x40], ecx
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp-0x14], ecx
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6d1a7f6
        mov edx, dword ptr ss : [ebp-0x40]
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
        jne public_6d1a7f6
        mov ecx, dword ptr ss : [ebp-0x40]
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
        je public_6d1a848
        public_6d1a7f6 : nop
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
        je public_6d1a838
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x24], ecx
        lea ecx, ss:[ebp+0xC]
        call public_6d1d590
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        lea ecx, ss:[ebp-0x10]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x40]
        call public_6d1c990
        jmp public_6d1a7f6
        public_6d1a838 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6d1a913
        public_6d1a848 : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x30]
        mov dword ptr ss : [ebp-0x28], ecx
        jmp public_6d1a862
        public_6d1a85c : nop
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0x30], edx
        public_6d1a862 : nop
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ss : [ebp-0x28]
        cmp ecx, dword ptr ds : [eax+8]
        je public_6d1a8bb
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x40]
        call public_6d1d3c0
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x28], edx
        mov eax, dword ptr ss : [ebp-0x30]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 4
        call public_6d1bc60
        xor ecx, ecx
        and ecx, 1
        test ecx, ecx
        je public_6d1a8ad
        mov edx, dword ptr ss : [ebp-0x2C]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d1a8ad : nop
        mov eax, dword ptr ss : [ebp-0x30]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d1a85c
        public_6d1a8bb : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x40]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x38], ecx
        mov edx, dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ss : [ebp+8]
        public_6d1a913 : nop
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1a780)
    }
}

#undef public_6d1a7f6
#undef public_6d1a838
#undef public_6d1a848
#undef public_6d1a85c
#undef public_6d1a862
#undef public_6d1a8ad
#undef public_6d1a8bb
#undef public_6d1a913
