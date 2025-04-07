#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16210);

#define public_6d1623c _public_6d1623c
#define public_6d16253 _public_6d16253
#define public_6d1625d _public_6d1625d
#define public_6d1627f _public_6d1627f
#define public_6d16294 _public_6d16294

PROC_DECLARE(0x6d16210, internal_6d16210, public_6d16210);
extern "C" NAKED register_t __cdecl internal_6d16210()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x25]
        test edx, edx
        jne public_6d1625d
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0xC], edx
        public_6d1623c : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        movsx edx, byte ptr ds : [ecx+0x25]
        test edx, edx
        jne public_6d16253
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d1623c
        public_6d16253 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx], eax
        jmp public_6d16294
        public_6d1625d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d1627f
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx], edx
        jmp public_6d1625d
        public_6d1627f : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ss : [ebp-8]
        je public_6d16294
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        public_6d16294 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d16210)
    }
}

#undef public_6d1623c
#undef public_6d16253
#undef public_6d1625d
#undef public_6d1627f
#undef public_6d16294
