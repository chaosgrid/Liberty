#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401a20);

#define public_401a32 _public_401a32
#define public_401a4e _public_401a4e
#define public_401a58 _public_401a58

PROC_DECLARE(0x401a20, internal_401a20, public_401a20);
extern "C" NAKED register_t __cdecl internal_401a20()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp byte ptr ds : [esi], 0
        mov edx, ecx
        jne public_401a32
        xor al, al
        pop esi
        ret 4
        public_401a32 : nop
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        cmp ecx, 0x104
        pop edi
        jbe public_401a4e
        xor al, al
        pop esi
        ret 4
        public_401a4e : nop
        add edx, 0x798
        mov eax, esi
        sub edx, esi
        public_401a58 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_401a58
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x401a20)
    }
}

#undef public_401a32
#undef public_401a4e
#undef public_401a58
