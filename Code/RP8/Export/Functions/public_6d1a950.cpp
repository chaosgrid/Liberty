#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1a950);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d1a970 _public_6d1a970
#define public_6d1a982 _public_6d1a982
#define public_6d1a9a2 _public_6d1a9a2
#define public_6d1a9b9 _public_6d1a9b9
#define public_6d1a9c2 _public_6d1a9c2
#define public_6d1aa08 _public_6d1aa08
#define public_6d1aa0a _public_6d1aa0a

PROC_DECLARE(0x6d1a950, internal_6d1a950, public_6d1a950);
extern "C" NAKED register_t __cdecl internal_6d1a950()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov dword ptr ss : [ebp-0x20], ecx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d1a982
        public_6d1a970 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0xC
        mov dword ptr ss : [ebp-0xC], edx
        public_6d1a982 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ss : [ebp-8]
        je public_6d1a9a2
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d1a970
        public_6d1a9a2 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x1C], edx
        jmp public_6d1a9c2
        public_6d1a9b9 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 0xC
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d1a9c2 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        cmp ecx, dword ptr ss : [ebp-0x14]
        je public_6d1aa0a
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_6d2f249
        add esp, 4
        mov edx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax+4], 0
        xor ecx, ecx
        and ecx, 1
        test ecx, ecx
        je public_6d1aa08
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d1aa08 : nop
        jmp public_6d1a9b9
        public_6d1aa0a : nop
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1a950)
    }
}

#undef public_6d1a970
#undef public_6d1a982
#undef public_6d1a9a2
#undef public_6d1a9b9
#undef public_6d1a9c2
#undef public_6d1aa08
#undef public_6d1aa0a
