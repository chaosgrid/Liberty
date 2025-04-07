#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acea91);

#define public_6aceaa5 _public_6aceaa5
#define public_6aceac8 _public_6aceac8
#define public_6aceaeb _public_6aceaeb

PROC_DECLARE(0x6acea91, internal_6acea91, public_6acea91);
extern "C" NAKED register_t __cdecl internal_6acea91()
{
    __asm
    {
        push ebx
        mov eax, 0x3020100
        push esi
        mov ecx, 0x40
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edx, esi
        push ebp
        public_6aceaa5 : nop
        mov dword ptr ds : [edx], eax
        add edx, 4
        add eax, 0x4040404
        dec ecx
        jne public_6aceaa5
        xor ecx, ecx
        xor edi, edi
        mov ebp, dword ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x100], cl
        mov byte ptr ds : [esi+0x101], cl
        xor ebx, ebx
        public_6aceac8 : nop
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr ds : [edi+esi]
        mov al, byte ptr ss : [ebp+ecx]
        add bl, al
        inc ecx
        add bl, dl
        inc edi
        mov al, byte ptr ds : [ebx+esi]
        mov byte ptr ds : [edi+esi-1], al
        cmp dword ptr ss : [esp+0x18], ecx
        mov byte ptr ds : [ebx+esi], dl
        jne public_6aceaeb
        xor ecx, ecx
        public_6aceaeb : nop
        cmp edi, 0x100
        jb public_6aceac8
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6acea91)
    }
}

#undef public_6aceaa5
#undef public_6aceac8
#undef public_6aceaeb
