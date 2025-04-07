#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fd40);

#define public_6f4fd52 _public_6f4fd52
#define public_6f4fd64 _public_6f4fd64
#define public_6f4fd78 _public_6f4fd78
#define public_6f4fd7f _public_6f4fd7f
#define public_6f4fd8a _public_6f4fd8a

PROC_DECLARE(0x6f4fd40, internal_6f4fd40, public_6f4fd40);
extern "C" NAKED register_t __cdecl internal_6f4fd40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x1C]
        push esi
        xor esi, esi
        xor eax, eax
        test edx, edx
        jne public_6f4fd52
        pop esi
        ret 
        public_6f4fd52 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp ecx, 0xFFFFFFFF
        push ebx
        push edi
        je public_6f4fd8a
        mov ebx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x14]
        public_6f4fd64 : nop
        cmp ecx, ebx
        jge public_6f4fd8a
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_6f4fd78
        inc esi
        cmp esi, edi
        jne public_6f4fd7f
        lea eax, ds:[ecx+0x28]
        jmp public_6f4fd7f
        public_6f4fd78 : nop
        dec esi
        cmp esi, edi
        jge public_6f4fd7f
        xor eax, eax
        public_6f4fd7f : nop
        mov ecx, dword ptr ds : [edx+0xC]
        add edx, 8
        cmp ecx, 0xFFFFFFFF
        jne public_6f4fd64
        public_6f4fd8a : nop
        pop edi
        pop ebx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4fd40)
    }
}

#undef public_6f4fd52
#undef public_6f4fd64
#undef public_6f4fd78
#undef public_6f4fd7f
#undef public_6f4fd8a
