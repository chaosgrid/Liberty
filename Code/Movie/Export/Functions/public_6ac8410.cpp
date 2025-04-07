#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8360);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8410);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);

#define public_6ac8440 _public_6ac8440
#define public_6ac844e _public_6ac844e
#define public_6ac845c _public_6ac845c
#define public_6ac8469 _public_6ac8469

PROC_DECLARE(0x6ac8410, internal_6ac8410, public_6ac8410);
extern "C" NAKED register_t __cdecl internal_6ac8410()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-4]
        push 1
        push eax
        push esi
        push edi
        mov dword ptr ss : [ebp-4], 1
        call public_6ac8a90
        test eax, eax
        jle public_6ac8469
        mov eax, dword ptr ds : [edi+esi*4-4]
        test eax, eax
        je public_6ac8469
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6ac8440 : nop
        push esi
        push ebx
        push edi
        call public_6ac8360
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        public_6ac844e : nop
        test eax, eax
        je public_6ac845c
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac844e
        inc eax
        public_6ac845c : nop
        test eax, eax
        je public_6ac8440
        pop ebx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        public_6ac8469 : nop
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, esi
        xor eax, eax
        mov dword ptr ds : [public_6ae097c], 0x30
        rep stosd
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6ac8410)
    }
}

#undef public_6ac8440
#undef public_6ac844e
#undef public_6ac845c
#undef public_6ac8469
