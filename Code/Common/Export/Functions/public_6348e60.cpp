#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_6348c80);
CLANG_FORWARD_PROC_SYMBOL(public_6348e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6348e8b _public_6348e8b
#define public_6348e98 _public_6348e98
#define public_6348eae _public_6348eae

PROC_DECLARE(0x6348e60, internal_6348e60, public_6348e60);
extern "C" NAKED register_t __cdecl internal_6348e60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        call public_6348c80
        mov ecx, dword ptr ds : [esi+0x20]
        mov edi, eax
        mov ebx, dword ptr ds : [ecx+edi*4]
        test ebx, ebx
        je public_6348e8b
        mov ecx, ebx
        call public_6348be0
        push ebx
        call public_6391d5a
        add esp, 4
        public_6348e8b : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+0x1E]
        mov eax, edi
        dec edx
        cmp edi, edx
        jge public_6348eae
        public_6348e98 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x1E]
        inc eax
        dec ecx
        cmp eax, ecx
        jl public_6348e98
        public_6348eae : nop
        dec word ptr ds : [esi+0x1E]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6348e60)
    }
}

#undef public_6348e8b
#undef public_6348e98
#undef public_6348eae
