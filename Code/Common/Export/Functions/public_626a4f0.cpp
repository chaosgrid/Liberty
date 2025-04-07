#include "Common-PCH.h"


#define public_626a507 _public_626a507
#define public_626a526 _public_626a526
#define public_626a52a _public_626a52a
#define public_626a52e _public_626a52e
#define public_626a536 _public_626a536

PROC_DECLARE(0x626a4f0, internal_626a4f0, public_626a4f0);
extern "C" NAKED register_t __cdecl internal_626a4f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp eax, edi
        je public_626a52a
        public_626a507 : nop
        cmp edx, ebx
        je public_626a526
        mov cx, word ptr ds : [eax+2]
        mov si, word ptr ds : [edx+2]
        cmp si, cx
        ja public_626a52e
        jb public_626a536
        add eax, 0x20
        add edx, 0x20
        cmp eax, edi
        jne public_626a507
        jmp public_626a52a
        public_626a526 : nop
        cmp eax, edi
        jne public_626a536
        public_626a52a : nop
        cmp edx, ebx
        je public_626a536
        public_626a52e : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_626a536 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626a4f0)
    }
}

#undef public_626a507
#undef public_626a526
#undef public_626a52a
#undef public_626a52e
#undef public_626a536
