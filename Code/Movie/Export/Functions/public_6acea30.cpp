#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acea30);

#define public_6acea54 _public_6acea54
#define public_6acea7f _public_6acea7f

PROC_DECLARE(0x6acea30, internal_6acea30, public_6acea30);
extern "C" NAKED register_t __cdecl internal_6acea30()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push ebp
        xor ecx, ecx
        xor edx, edx
        mov esi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [esi+0x100]
        mov dl, byte ptr ds : [esi+0x101]
        test ebp, ebp
        je public_6acea7f
        public_6acea54 : nop
        inc ecx
        mov ebx, 0xFF
        and ecx, ebx
        xor eax, eax
        mov al, byte ptr ds : [esi+ecx]
        add edx, eax
        and edx, ebx
        xor ebx, ebx
        mov bl, byte ptr ds : [esi+edx]
        mov byte ptr ds : [esi+ecx], bl
        mov byte ptr ds : [esi+edx], al
        add al, bl
        mov bl, byte ptr ds : [edi]
        mov al, byte ptr ds : [esi+eax]
        xor bl, al
        mov byte ptr ds : [edi], bl
        inc edi
        dec ebp
        jne public_6acea54
        public_6acea7f : nop
        pop ebp
        pop edi
        lea eax, ds:[esi+0x100]
        pop esi
        mov byte ptr ds : [eax], cl
        pop ebx
        mov byte ptr ds : [eax+1], dl
        ret 0xC
        UNREACHABLE_TRAP(0x6acea30)
    }
}

#undef public_6acea54
#undef public_6acea7f
