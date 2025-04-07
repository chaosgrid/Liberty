#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f0d0);

#define public_6d2f0f4 _public_6d2f0f4
#define public_6d2f10b _public_6d2f10b
#define public_6d2f115 _public_6d2f115
#define public_6d2f137 _public_6d2f137
#define public_6d2f14c _public_6d2f14c

PROC_DECLARE(0x6d2f0d0, internal_6d2f0d0, public_6d2f0d0);
extern "C" NAKED register_t __cdecl internal_6d2f0d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        movsx eax, byte ptr ds : [edx+0x21]
        test eax, eax
        jne public_6d2f115
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-8], eax
        public_6d2f0f4 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        movsx eax, byte ptr ds : [edx+0x21]
        test eax, eax
        jne public_6d2f10b
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], edx
        jmp public_6d2f0f4
        public_6d2f10b : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax], ecx
        jmp public_6d2f14c
        public_6d2f115 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax+8]
        jne public_6d2f137
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], eax
        jmp public_6d2f115
        public_6d2f137 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp-4]
        je public_6d2f14c
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], edx
        public_6d2f14c : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2f0d0)
    }
}

#undef public_6d2f0f4
#undef public_6d2f10b
#undef public_6d2f115
#undef public_6d2f137
#undef public_6d2f14c
