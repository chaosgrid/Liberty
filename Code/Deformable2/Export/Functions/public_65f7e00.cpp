#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7e00);

#define public_65f7e1b _public_65f7e1b
#define public_65f7e35 _public_65f7e35
#define public_65f7e45 _public_65f7e45
#define public_65f7e51 _public_65f7e51
#define public_65f7e57 _public_65f7e57
#define public_65f7e5c _public_65f7e5c
#define public_65f7e63 _public_65f7e63
#define public_65f7e6f _public_65f7e6f

PROC_DECLARE(0x65f7e00, internal_65f7e00, public_65f7e00);
extern "C" NAKED register_t __cdecl internal_65f7e00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov si, word ptr ds : [ecx+edx*2-2]
        xor eax, eax
        mov ax, word ptr ds : [ecx]
        cmp ax, si
        push edi
        jb public_65f7e1b
        mov eax, esi
        public_65f7e1b : nop
        mov edi, dword ptr ss : [esp+0x14]
        movzx eax, ax
        mov dword ptr ds : [edi], eax
        mov ax, word ptr ds : [ecx]
        xor esi, esi
        mov si, word ptr ds : [ecx+edx*2-2]
        cmp ax, si
        jae public_65f7e35
        mov eax, esi
        public_65f7e35 : nop
        movzx eax, ax
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        xor esi, esi
        test edx, edx
        mov dword ptr ds : [ebx], eax
        jbe public_65f7e5c
        public_65f7e45 : nop
        movzx eax, word ptr ds : [ecx+esi*2]
        cmp eax, dword ptr ds : [edi]
        jae public_65f7e51
        mov dword ptr ds : [edi], eax
        jmp public_65f7e57
        public_65f7e51 : nop
        cmp eax, dword ptr ds : [ebx]
        jbe public_65f7e57
        mov dword ptr ds : [ebx], eax
        public_65f7e57 : nop
        inc esi
        cmp esi, edx
        jb public_65f7e45
        public_65f7e5c : nop
        xor eax, eax
        test edx, edx
        pop ebx
        jbe public_65f7e6f
        public_65f7e63 : nop
        mov si, word ptr ds : [edi]
        sub word ptr ds : [ecx+eax*2], si
        inc eax
        cmp eax, edx
        jb public_65f7e63
        public_65f7e6f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f7e00)
    }
}

#undef public_65f7e1b
#undef public_65f7e35
#undef public_65f7e45
#undef public_65f7e51
#undef public_65f7e57
#undef public_65f7e5c
#undef public_65f7e63
#undef public_65f7e6f
