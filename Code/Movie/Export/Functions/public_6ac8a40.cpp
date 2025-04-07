#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a40);

#define public_6ac8a6b _public_6ac8a6b
#define public_6ac8a80 _public_6ac8a80
#define public_6ac8a88 _public_6ac8a88

PROC_DECLARE(0x6ac8a40, internal_6ac8a40, public_6ac8a40);
extern "C" NAKED register_t __cdecl internal_6ac8a40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        cmp esi, edi
        push ebx
        jae public_6ac8a6b
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        push edi
        push ecx
        call public_6ac8500
        mov ecx, eax
        mov eax, edi
        jmp public_6ac8a80
        public_6ac8a6b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        push edx
        push esi
        push eax
        call public_6ac8500
        mov ecx, eax
        mov eax, esi
        public_6ac8a80 : nop
        test ecx, ecx
        je public_6ac8a88
        mov dword ptr ds : [ebx+eax*4], ecx
        inc eax
        public_6ac8a88 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x14
        UNREACHABLE_TRAP(0x6ac8a40)
    }
}

#undef public_6ac8a6b
#undef public_6ac8a80
#undef public_6ac8a88
