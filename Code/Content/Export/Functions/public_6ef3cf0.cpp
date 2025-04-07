#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3cf0);

#define public_6ef3d42 _public_6ef3d42
#define public_6ef3d54 _public_6ef3d54
#define public_6ef3d62 _public_6ef3d62
#define public_6ef3d82 _public_6ef3d82
#define public_6ef3dbc _public_6ef3dbc
#define public_6ef3dd7 _public_6ef3dd7
#define public_6ef3df2 _public_6ef3df2
#define public_6ef3e0b _public_6ef3e0b
#define public_6ef3e1f _public_6ef3e1f

PROC_DECLARE(0x6ef3cf0, internal_6ef3cf0, public_6ef3cf0);
extern "C" NAKED register_t __cdecl internal_6ef3cf0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ds : [public_6fb3014]
        push edi
        mov ebx, ecx
/*FIXUP push offset public_6fb78ac @0x6ef3d00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb78ac
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x10], 0xFFFFFFFF
        call esi
        test al, al
        mov ecx, ebp
        je public_6ef3d82
        push 0
        call dword ptr ds : [public_6fb3048]
        test eax, eax
        je public_6ef3d54
        mov edi, offset public_6fb78a4
        mov esi, eax
        mov ecx, 6
        xor edx, edx
        repe cmpsb
        jne public_6ef3d42
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+4], 1
        pop ebx
        ret 4
        public_6ef3d42 : nop
        mov edi, offset public_6fb789c
        mov esi, eax
        mov ecx, 6
        xor edx, edx
        repe cmpsb
        jne public_6ef3d62
        public_6ef3d54 : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+4], 2
        pop ebx
        ret 4
        public_6ef3d62 : nop
        mov esi, eax
        mov edi, offset public_6fb7894
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        jne public_6ef3e1f
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        ret 4
/*FIXUP public_6ef3d82 : nop
        push offset public_6fb787c @0x6ef3d82*/
  FIXUP public_6ef3d82 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb787c
        call esi
        test al, al
        je public_6ef3e1f
        push 0
        mov ecx, ebp
        mov dword ptr ds : [ebx], 1
        call dword ptr ds : [public_6fb3048]
        mov edi, offset public_6fb7870
        mov esi, eax
        mov ecx, 9
        xor edx, edx
        repe cmpsb
        jne public_6ef3dbc
        mov dword ptr ds : [ebx+8], 1
        jmp public_6ef3e0b
        public_6ef3dbc : nop
        mov edi, offset public_6fb7868
        mov esi, eax
        mov ecx, 8
        xor edx, edx
        repe cmpsb
        jne public_6ef3dd7
        mov dword ptr ds : [ebx+8], 4
        jmp public_6ef3e0b
        public_6ef3dd7 : nop
        mov edi, offset public_6fb7860
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        jne public_6ef3df2
        mov dword ptr ds : [ebx+8], 8
        jmp public_6ef3e0b
        public_6ef3df2 : nop
        mov esi, eax
        mov edi, offset public_6fb36ec
        mov ecx, 4
        xor eax, eax
        repe cmpsb
        jne public_6ef3e0b
        mov dword ptr ds : [ebx+8], 7
        public_6ef3e0b : nop
        push 1
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], 2
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x10], eax
        public_6ef3e1f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef3cf0)
    }
}

#undef public_6ef3d42
#undef public_6ef3d54
#undef public_6ef3d62
#undef public_6ef3d82
#undef public_6ef3dbc
#undef public_6ef3dd7
#undef public_6ef3df2
#undef public_6ef3e0b
#undef public_6ef3e1f
