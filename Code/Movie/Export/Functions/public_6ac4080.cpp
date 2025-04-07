#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4080);
CLANG_FORWARD_PROC_SYMBOL(public_6ac45a0);

#define public_6ac40a5 _public_6ac40a5
#define public_6ac40ab _public_6ac40ab
#define public_6ac40b9 _public_6ac40b9
#define public_6ac40bd _public_6ac40bd

PROC_DECLARE(0x6ac4080, internal_6ac4080, public_6ac4080);
extern "C" NAKED register_t __cdecl internal_6ac4080()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [eax+0x110]
        mov ecx, dword ptr ds : [eax+0x100]
        test edx, edx
        mov dword ptr ss : [ebp+0x10], ecx
        jne public_6ac40bd
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        rep movsd
        pop edi
        pop esi
        public_6ac40a5 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        public_6ac40ab : nop
        test eax, eax
        je public_6ac40b9
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac40ab
        inc eax
        public_6ac40b9 : nop
        pop ebp
        ret 0xC
        public_6ac40bd : nop
        push 0
        push eax
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        push 1
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6ac45a0
        test eax, eax
        jne public_6ac40a5
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ac4080)
    }
}

#undef public_6ac40a5
#undef public_6ac40ab
#undef public_6ac40b9
#undef public_6ac40bd
