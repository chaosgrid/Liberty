#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1dc30);

#define public_6d1dc3d _public_6d1dc3d
#define public_6d1dc52 _public_6d1dc52
#define public_6d1dc79 _public_6d1dc79
#define public_6d1dc80 _public_6d1dc80
#define public_6d1dc82 _public_6d1dc82

PROC_DECLARE(0x6d1dc30, internal_6d1dc30, public_6d1dc30);
extern "C" NAKED register_t __cdecl internal_6d1dc30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push esi
        push edi
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d1dc52
        public_6d1dc3d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, 1
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x520
        mov dword ptr ss : [ebp+8], ecx
        public_6d1dc52 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jbe public_6d1dc82
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], edx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1dc79
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, 0x148
        mov edi, dword ptr ss : [ebp-4]
        rep movsd
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], eax
        jmp public_6d1dc80
        public_6d1dc79 : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d1dc80 : nop
        jmp public_6d1dc3d
        public_6d1dc82 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1dc30)
    }
}

#undef public_6d1dc3d
#undef public_6d1dc52
#undef public_6d1dc79
#undef public_6d1dc80
#undef public_6d1dc82
