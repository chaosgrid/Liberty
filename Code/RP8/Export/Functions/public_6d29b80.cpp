#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d29b91 _public_6d29b91
#define public_6d29b97 _public_6d29b97
#define public_6d29bd8 _public_6d29bd8
#define public_6d29bda _public_6d29bda
#define public_6d29bfa _public_6d29bfa
#define public_6d29c20 _public_6d29c20
#define public_6d29c39 _public_6d29c39
#define public_6d29c6c _public_6d29c6c
#define public_6d29c7d _public_6d29c7d

PROC_DECLARE(0x6d29b80, internal_6d29b80, public_6d29b80);
extern "C" NAKED register_t __cdecl internal_6d29b80()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov dword ptr ss : [ebp-0x14], ecx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d29b97
        public_6d29b91 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+8], ecx
        public_6d29b97 : nop
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ds : [edx+8]
        je public_6d29c7d
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov ecx, dword ptr ss : [ebp-0x14]
        call public_6d29b80
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0xC
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, 1
        test eax, eax
        je public_6d29bd8
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [ecx+4], 0
        jne public_6d29bda
        public_6d29bd8 : nop
        jmp public_6d29c39
        public_6d29bda : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d29bfa
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        jne public_6d29c20
        public_6d29bfa : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 2
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-8]
        push eax
        call public_6d2f249
        add esp, 4
        jmp public_6d29c39
        public_6d29c20 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+4]
        sub edx, 1
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x18]
        mov cl, byte ptr ds : [eax]
        sub cl, 1
        mov edx, dword ptr ss : [ebp-0x18]
        mov byte ptr ds : [edx], cl
        public_6d29c39 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0xC], 0
        xor eax, eax
        and eax, 1
        test eax, eax
        je public_6d29c6c
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6d2f249
        add esp, 4
        public_6d29c6c : nop
        mov edx, dword ptr ss : [ebp+8]
        push edx
        call public_6d2f249
        add esp, 4
        jmp public_6d29b91
        public_6d29c7d : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d29b80)
    }
}

#undef public_6d29b91
#undef public_6d29b97
#undef public_6d29bd8
#undef public_6d29bda
#undef public_6d29bfa
#undef public_6d29c20
#undef public_6d29c39
#undef public_6d29c6c
#undef public_6d29c7d
