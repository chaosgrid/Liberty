#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1550);
CLANG_FORWARD_PROC_SYMBOL(public_6ad970e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9b3b);

#define public_6ad9b4d _public_6ad9b4d
#define public_6ad9b6b _public_6ad9b6b
#define public_6ad9b72 _public_6ad9b72
#define public_6ad9b76 _public_6ad9b76
#define public_6ad9b84 _public_6ad9b84
#define public_6ad9b8f _public_6ad9b8f
#define public_6ad9ba1 _public_6ad9ba1
#define public_6ad9bac _public_6ad9bac
#define public_6ad9bb1 _public_6ad9bb1
#define public_6ad9bb9 _public_6ad9bb9
#define public_6ad9bbb _public_6ad9bbb

PROC_DECLARE(0x6ad9b3b, internal_6ad9b3b, public_6ad9b3b);
extern "C" NAKED register_t __cdecl internal_6ad9b3b()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        cmp edi, 0xFFFFFFFD
        jbe public_6ad9b4d
        call public_6ad970e
        public_6ad9b4d : nop
        mov ecx, dword ptr ds : [esi+4]
        xor edx, edx
        cmp ecx, edx
        je public_6ad9b76
        mov al, byte ptr ds : [ecx-1]
        cmp al, dl
        je public_6ad9b76
        cmp al, 0xFF
        je public_6ad9b76
        cmp edi, edx
        jne public_6ad9bb1
        dec al
        push edx
        mov byte ptr ds : [ecx-1], al
        public_6ad9b6b : nop
        mov ecx, esi
        call public_6ac1500
        public_6ad9b72 : nop
        xor al, al
        jmp public_6ad9bbb
        public_6ad9b76 : nop
        cmp edi, edx
        jne public_6ad9b8f
        cmp byte ptr ss : [esp+0x10], dl
        je public_6ad9b84
        push 1
        jmp public_6ad9b6b
        public_6ad9b84 : nop
        cmp ecx, edx
        je public_6ad9b72
        mov dword ptr ds : [esi+8], edx
        mov byte ptr ds : [ecx], dl
        jmp public_6ad9b72
        public_6ad9b8f : nop
        cmp byte ptr ss : [esp+0x10], dl
        je public_6ad9bac
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_6ad9ba1
        cmp eax, edi
        jae public_6ad9bb9
        public_6ad9ba1 : nop
        push 1
        mov ecx, esi
        call public_6ac1500
        jmp public_6ad9bb1
        public_6ad9bac : nop
        cmp dword ptr ds : [esi+0xC], edi
        jae public_6ad9bb9
        public_6ad9bb1 : nop
        push edi
        mov ecx, esi
        call public_6ac1550
        public_6ad9bb9 : nop
        mov al, 1
        public_6ad9bbb : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ad9b3b)
    }
}

#undef public_6ad9b4d
#undef public_6ad9b6b
#undef public_6ad9b72
#undef public_6ad9b76
#undef public_6ad9b84
#undef public_6ad9b8f
#undef public_6ad9ba1
#undef public_6ad9bac
#undef public_6ad9bb1
#undef public_6ad9bb9
#undef public_6ad9bbb
