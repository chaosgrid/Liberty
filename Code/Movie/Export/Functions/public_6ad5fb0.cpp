#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad5fb0);

#define public_6ad5fdf _public_6ad5fdf
#define public_6ad5fe1 _public_6ad5fe1

PROC_DECLARE(0x6ad5fb0, internal_6ad5fb0, public_6ad5fb0);
extern "C" NAKED register_t __cdecl internal_6ad5fb0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push edi
        push esi
        push ebx
        mov ecx, dword ptr ss : [ebp+0x10]
        jecxz public_6ad5fe1
        mov ebx, ecx
        mov edi, dword ptr ss : [ebp+8]
        mov esi, edi
        xor eax, eax
        repne scasb
        neg ecx
        add ecx, ebx
        mov edi, esi
        mov esi, dword ptr ss : [ebp+0xC]
        repe cmpsb
        mov al, byte ptr ds : [esi-1]
        xor ecx, ecx
        cmp al, byte ptr ds : [edi-1]
        ja public_6ad5fdf
        je public_6ad5fe1
        dec ecx
        dec ecx
        public_6ad5fdf : nop
        not ecx
        public_6ad5fe1 : nop
        mov eax, ecx
        pop ebx
        pop esi
        pop edi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad5fb0)
    }
}

#undef public_6ad5fdf
#undef public_6ad5fe1
