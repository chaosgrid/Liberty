#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6970);

#define public_6ef6984 _public_6ef6984
#define public_6ef698e _public_6ef698e

PROC_DECLARE(0x6ef6970, internal_6ef6970, public_6ef6970);
extern "C" NAKED register_t __cdecl internal_6ef6970()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        cmp esi, edi
        mov edx, ebp
        je public_6ef698e
        public_6ef6984 : nop
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edx], al
        inc edx
        inc esi
        cmp esi, edi
        jne public_6ef6984
        public_6ef698e : nop
        pop edi
        pop esi
        mov eax, ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ef6970)
    }
}

#undef public_6ef6984
#undef public_6ef698e
