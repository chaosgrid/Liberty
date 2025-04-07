#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04693);
CLANG_FORWARD_PROC_SYMBOL(public_6d046e6);
CLANG_FORWARD_PROC_SYMBOL(public_6d1d610);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d0470c _public_6d0470c
#define public_6d047a8 _public_6d047a8
#define public_6d047bf _public_6d047bf
#define public_6d047d9 _public_6d047d9

PROC_DECLARE(0x6d046e6, internal_6d046e6, public_6d046e6);
extern "C" NAKED register_t __cdecl internal_6d046e6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x38
        mov dword ptr ss : [ebp-0x34], ecx
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x34]
        call public_6d04693
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d0470c
        mov eax, dword ptr ss : [ebp-4]
        jmp public_6d047d9
        public_6d0470c : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0xC], 0
        mov dword ptr ss : [ebp-8], 0
        mov edx, dword ptr ss : [ebp-0x34]
        add edx, 0x188
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ss : [ebp-0x14]
        sub eax, dword ptr ss : [ebp-0x1C]
        cdq 
        mov ecx, 0xC
        idiv ecx
        mov dword ptr ss : [ebp-0x18], eax
        lea edx, ss:[ebp-0x10]
        push edx
        push 1
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        mov ecx, dword ptr ss : [ebp-0x24]
        call public_6d1d610
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        push ecx
        call public_6d2f249
        add esp, 4
        mov dword ptr ss : [ebp-8], 0
        mov dword ptr ss : [ebp-0xC], 0
        mov edx, dword ptr ss : [ebp-0x34]
        add edx, 0x188
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d047a8
        mov dword ptr ss : [ebp-0x38], 0
        jmp public_6d047bf
        public_6d047a8 : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [ecx+8]
        sub eax, dword ptr ds : [edx+4]
        cdq 
        mov ecx, 0xC
        idiv ecx
        mov dword ptr ss : [ebp-0x38], eax
        public_6d047bf : nop
        mov edx, dword ptr ss : [ebp-0x34]
        mov eax, dword ptr ds : [edx+0x18C]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x38]
        sub ecx, 1
        imul ecx, 0xC
        mov eax, dword ptr ss : [ebp-0x30]
        add eax, ecx
        public_6d047d9 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d046e6)
    }
}

#undef public_6d0470c
#undef public_6d047a8
#undef public_6d047bf
#undef public_6d047d9
