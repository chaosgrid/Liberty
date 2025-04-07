#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348be0);
CLANG_FORWARD_PROC_SYMBOL(public_6348c80);
CLANG_FORWARD_PROC_SYMBOL(public_6349210);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6349242 _public_6349242
#define public_634924e _public_634924e
#define public_634925f _public_634925f
#define public_6349274 _public_6349274
#define public_634928f _public_634928f
#define public_634929c _public_634929c
#define public_63492b2 _public_63492b2
#define public_63492b6 _public_63492b6

PROC_DECLARE(0x6349210, internal_6349210, public_6349210);
extern "C" NAKED register_t __cdecl internal_6349210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        push eax
        call public_6348c80
        mov ecx, dword ptr ds : [edi+0x20]
        mov ebx, eax
        mov esi, dword ptr ds : [ecx+ebx*4]
        xor edx, edx
        mov dx, word ptr ds : [esi+6]
        mov eax, edx
        and eax, 0xFFFF
        dec eax
        js public_634924e
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ecx+eax*4]
        public_6349242 : nop
        cmp dword ptr ds : [ecx], ebp
        je public_634924e
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_6349242
        public_634924e : nop
        lea ecx, ds:[edx-1]
        mov word ptr ds : [esi+6], cx
        and ecx, 0xFFFF
        cmp eax, ecx
        jge public_6349274
        public_634925f : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+6]
        inc eax
        cmp eax, ecx
        jl public_634925f
        public_6349274 : nop
        cmp word ptr ds : [esi+6], 0
        ja public_63492b6
        test esi, esi
        je public_634928f
        mov ecx, esi
        call public_6348be0
        push esi
        call public_6391d5a
        add esp, 4
        public_634928f : nop
        xor edx, edx
        mov dx, word ptr ds : [edi+0x1E]
        mov eax, ebx
        dec edx
        cmp ebx, edx
        jge public_63492b2
        public_634929c : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [ecx+eax*4], edx
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0x1E]
        inc eax
        dec ecx
        cmp eax, ecx
        jl public_634929c
        public_63492b2 : nop
        dec word ptr ds : [edi+0x1E]
        public_63492b6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6349210)
    }
}

#undef public_6349242
#undef public_634924e
#undef public_634925f
#undef public_6349274
#undef public_634928f
#undef public_634929c
#undef public_63492b2
#undef public_63492b6
