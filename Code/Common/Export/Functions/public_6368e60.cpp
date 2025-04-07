#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368e20);
CLANG_FORWARD_PROC_SYMBOL(public_6368e60);

#define public_6368e6c _public_6368e6c
#define public_6368e7c _public_6368e7c
#define public_6368e96 _public_6368e96
#define public_6368e98 _public_6368e98
#define public_6368e9c _public_6368e9c

PROC_DECLARE(0x6368e60, internal_6368e60, public_6368e60);
extern "C" NAKED register_t __cdecl internal_6368e60()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+0x20]
        test edi, edi
        je public_6368e9c
        public_6368e6c : nop
        mov esi, dword ptr ds : [edi]
        test esi, esi
        je public_6368e9c
        mov eax, dword ptr ds : [edi+0x64]
        cmp eax, dword ptr ds : [esi+0x64]
        jle public_6368e98
        push esi
        push edi
        public_6368e7c : nop
        mov ecx, ebx
        call public_6368e20
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6368e96
        mov ecx, dword ptr ds : [eax+0x64]
        cmp ecx, dword ptr ds : [esi+0x64]
        jle public_6368e96
        push esi
        push eax
        jmp public_6368e7c
        public_6368e96 : nop
        mov esi, edi
        public_6368e98 : nop
        mov edi, esi
        jmp public_6368e6c
        public_6368e9c : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6368e60)
    }
}

#undef public_6368e6c
#undef public_6368e7c
#undef public_6368e96
#undef public_6368e98
#undef public_6368e9c
