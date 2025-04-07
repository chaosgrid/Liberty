#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d167d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d16802 _public_6d16802
#define public_6d16814 _public_6d16814
#define public_6d16834 _public_6d16834
#define public_6d1684b _public_6d1684b
#define public_6d16854 _public_6d16854
#define public_6d1689a _public_6d1689a
#define public_6d1689c _public_6d1689c

PROC_DECLARE(0x6d167d0, internal_6d167d0, public_6d167d0);
extern "C" NAKED register_t __cdecl internal_6d167d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov dword ptr ss : [ebp-0x28], ecx
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d16814
        public_6d16802 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x14], eax
        public_6d16814 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp ecx, dword ptr ss : [ebp-0x10]
        je public_6d16834
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        jmp public_6d16802
        public_6d16834 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x24], eax
        jmp public_6d16854
        public_6d1684b : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d16854 : nop
        mov edx, dword ptr ss : [ebp-0x24]
        cmp edx, dword ptr ss : [ebp-0x1C]
        je public_6d1689c
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        push edx
        call public_6d2f249
        add esp, 4
        mov eax, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [ecx+4], 0
        xor edx, edx
        and edx, 1
        test edx, edx
        je public_6d1689a
        mov eax, dword ptr ss : [ebp-0x24]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d1689a : nop
        jmp public_6d1684b
        public_6d1689c : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+8], edx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d167d0)
    }
}

#undef public_6d16802
#undef public_6d16814
#undef public_6d16834
#undef public_6d1684b
#undef public_6d16854
#undef public_6d1689a
#undef public_6d1689c
