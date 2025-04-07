#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b130);

#define public_6d1b13d _public_6d1b13d
#define public_6d1b154 _public_6d1b154
#define public_6d1b17d _public_6d1b17d
#define public_6d1b184 _public_6d1b184
#define public_6d1b186 _public_6d1b186

PROC_DECLARE(0x6d1b130, internal_6d1b130, public_6d1b130);
extern "C" NAKED register_t __cdecl internal_6d1b130()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push esi
        push edi
        mov dword ptr ss : [ebp-8], ecx
        jmp public_6d1b154
        public_6d1b13d : nop
        mov eax, dword ptr ss : [ebp+0x10]
        add eax, 0x520
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x520
        mov dword ptr ss : [ebp+8], ecx
        public_6d1b154 : nop
        mov edx, dword ptr ss : [ebp+8]
        cmp edx, dword ptr ss : [ebp+0xC]
        je public_6d1b186
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1b17d
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, 0x148
        mov edi, dword ptr ss : [ebp-4]
        rep movsd
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d1b184
        public_6d1b17d : nop
        mov dword ptr ss : [ebp-0xC], 0
        public_6d1b184 : nop
        jmp public_6d1b13d
        public_6d1b186 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d1b130)
    }
}

#undef public_6d1b13d
#undef public_6d1b154
#undef public_6d1b17d
#undef public_6d1b184
#undef public_6d1b186
