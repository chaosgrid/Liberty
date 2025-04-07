#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006aa0);

#define public_10006b24 _public_10006b24
#define public_10006b44 _public_10006b44
#define public_10006b6c _public_10006b6c
#define public_10006b97 _public_10006b97
#define public_10006b9b _public_10006b9b
#define public_10006bd0 _public_10006bd0
#define public_10006be4 _public_10006be4
#define public_10006bee _public_10006bee
#define public_10006c21 _public_10006c21
#define public_10006c37 _public_10006c37
#define public_10006c7d _public_10006c7d
#define public_10006c88 _public_10006c88
#define public_10006c8c _public_10006c8c
#define public_10006c9c _public_10006c9c

PROC_DECLARE(0x10006aa0, internal_10006aa0, public_10006aa0);
extern "C" NAKED register_t __cdecl internal_10006aa0()
{
    __asm
    {
        sub esp, 0x20
        mov ecx, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax+8]
        push ebp
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        push esi
        mov esi, dword ptr ds : [eax+0x10]
        xor eax, eax
        push edi
        lea edi, ds:[edx+0xB34]
        mov ecx, 8
        rep stosd
        mov eax, dword ptr ds : [edx+0x144C]
        mov ecx, dword ptr ds : [edx+eax*4+0xB54]
        mov word ptr ds : [ebx+ecx*4+2], 0
        mov ecx, dword ptr ds : [edx+0x144C]
        inc ecx
        cmp ecx, 0x23D
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x10], 0
        jge public_10006c9c
        lea eax, ds:[edx+ecx*4+0xB54]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, 0x23D
        sub eax, ecx
        add ecx, eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], ecx
        public_10006b24 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        movzx eax, word ptr ds : [ebx+ecx*4+2]
        movzx eax, word ptr ds : [ebx+eax*4+2]
        inc eax
        cmp eax, esi
        jle public_10006b44
        mov edi, dword ptr ss : [esp+0x10]
        inc edi
        mov eax, esi
        mov dword ptr ss : [esp+0x10], edi
        public_10006b44 : nop
        cmp ecx, dword ptr ss : [esp+0x24]
        mov word ptr ds : [ebx+ecx*4+2], ax
        jg public_10006b9b
        mov edi, dword ptr ss : [esp+0x28]
        inc word ptr ds : [edx+eax*2+0xB34]
        xor esi, esi
        cmp ecx, edi
        jl public_10006b6c
        mov esi, ecx
        sub esi, edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [edi+esi*4]
        public_10006b6c : nop
        movzx edi, word ptr ds : [ebx+ecx*4]
        add eax, esi
        imul eax, edi
        add dword ptr ds : [edx+0x16A0], eax
        test ebp, ebp
        je public_10006b97
        movzx ecx, word ptr ss : [ebp+ecx*4+2]
        mov eax, dword ptr ds : [edx+0x16A4]
        add ecx, esi
        imul ecx, edi
        add eax, ecx
        mov dword ptr ds : [edx+0x16A4], eax
        public_10006b97 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_10006b9b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, 4
        dec eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_10006b24
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_10006c9c
        lea edi, ds:[esi-1]
        lea esi, ds:[edx+esi*2+0xB34]
        jmp public_10006bd0
        lea ecx, ds:[ecx]
        public_10006bd0 : nop
        mov eax, edi
        cmp word ptr ds : [edx+eax*2+0xB34], 0
        lea ecx, ds:[edx+eax*2+0xB34]
        jne public_10006bee
        public_10006be4 : nop
        sub ecx, 2
        dec eax
        cmp word ptr ds : [ecx], 0
        je public_10006be4
        public_10006bee : nop
        dec word ptr ds : [edx+eax*2+0xB34]
        add word ptr ds : [edx+eax*2+0xB36], 2
        mov eax, dword ptr ss : [esp+0x10]
        dec word ptr ds : [esi]
        sub eax, 2
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jg public_10006bd0
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_10006c9c
        mov dword ptr ss : [esp+0x20], esi
        public_10006c21 : nop
        movzx esi, word ptr ds : [esi]
        test esi, esi
        mov dword ptr ss : [esp+0x18], esi
        je public_10006c8c
        mov eax, dword ptr ss : [esp+0x1C]
        lea ebp, ds:[edx+eax*4+0xB54]
        public_10006c37 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp-4]
        dec edi
        sub ebp, 4
        mov dword ptr ss : [esp+0x1C], edi
        cmp eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x2C], ebp
        jg public_10006c88
        movzx edi, word ptr ds : [ebx+eax*4+2]
        cmp edi, ecx
        lea esi, ds:[ebx+eax*4+2]
        je public_10006c7d
        movzx eax, word ptr ds : [ebx+eax*4]
        mov ebp, ecx
        sub ebp, edi
        imul ebp, eax
        mov eax, dword ptr ds : [edx+0x16A0]
        add eax, ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+0x16A0], eax
        mov word ptr ds : [esi], cx
        public_10006c7d : nop
        mov eax, dword ptr ss : [esp+0x18]
        dec eax
        mov dword ptr ss : [esp+0x18], eax
        mov esi, eax
        public_10006c88 : nop
        test esi, esi
        jne public_10006c37
        public_10006c8c : nop
        mov esi, dword ptr ss : [esp+0x20]
        dec ecx
        sub esi, 2
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], esi
        jne public_10006c21
        public_10006c9c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x10006aa0)
    }
}

#undef public_10006b24
#undef public_10006b44
#undef public_10006b6c
#undef public_10006b97
#undef public_10006b9b
#undef public_10006bd0
#undef public_10006be4
#undef public_10006bee
#undef public_10006c21
#undef public_10006c37
#undef public_10006c7d
#undef public_10006c88
#undef public_10006c8c
#undef public_10006c9c
