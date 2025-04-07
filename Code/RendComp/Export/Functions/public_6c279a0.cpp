#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c279a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27a20);

#define public_6c279c0 _public_6c279c0
#define public_6c279d7 _public_6c279d7
#define public_6c279e3 _public_6c279e3
#define public_6c279f1 _public_6c279f1
#define public_6c279f9 _public_6c279f9
#define public_6c279fe _public_6c279fe
#define public_6c27a04 _public_6c27a04
#define public_6c27a11 _public_6c27a11

PROC_DECLARE(0x6c279a0, internal_6c279a0, public_6c279a0);
extern "C" NAKED register_t __cdecl internal_6c279a0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_6c27a20
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x1C]
        mov di, word ptr ds : [ecx+edx*2-2]
        xor eax, eax
        mov ax, word ptr ds : [ecx]
        cmp ax, di
        jb public_6c279c0
        mov eax, edi
        public_6c279c0 : nop
        movzx eax, ax
        mov dword ptr ds : [esi+0x10], eax
        mov ax, word ptr ds : [ecx]
        xor edi, edi
        mov di, word ptr ds : [ecx+edx*2-2]
        cmp ax, di
        jae public_6c279d7
        mov eax, edi
        public_6c279d7 : nop
        movzx eax, ax
        xor edi, edi
        test edx, edx
        mov dword ptr ds : [esi+0x14], eax
        jbe public_6c279fe
        public_6c279e3 : nop
        movzx eax, word ptr ds : [ecx+edi*2]
        cmp eax, dword ptr ds : [esi+0x10]
        jae public_6c279f1
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6c279f9
        public_6c279f1 : nop
        cmp eax, dword ptr ds : [esi+0x14]
        jbe public_6c279f9
        mov dword ptr ds : [esi+0x14], eax
        public_6c279f9 : nop
        inc edi
        cmp edi, edx
        jb public_6c279e3
        public_6c279fe : nop
        xor eax, eax
        test edx, edx
        jbe public_6c27a11
        public_6c27a04 : nop
        mov di, word ptr ds : [esi+0x10]
        sub word ptr ds : [ecx+eax*2], di
        inc eax
        cmp eax, edx
        jb public_6c27a04
        public_6c27a11 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c279a0)
    }
}

#undef public_6c279c0
#undef public_6c279d7
#undef public_6c279e3
#undef public_6c279f1
#undef public_6c279f9
#undef public_6c279fe
#undef public_6c27a04
#undef public_6c27a11
