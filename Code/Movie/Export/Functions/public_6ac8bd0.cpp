#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);

#define public_6ac8bf5 _public_6ac8bf5
#define public_6ac8c04 _public_6ac8c04
#define public_6ac8c2d _public_6ac8c2d
#define public_6ac8c3a _public_6ac8c3a
#define public_6ac8c49 _public_6ac8c49
#define public_6ac8c62 _public_6ac8c62
#define public_6ac8c91 _public_6ac8c91
#define public_6ac8cb3 _public_6ac8cb3
#define public_6ac8cc0 _public_6ac8cc0
#define public_6ac8cd1 _public_6ac8cd1
#define public_6ac8cf3 _public_6ac8cf3
#define public_6ac8d1a _public_6ac8d1a
#define public_6ac8d28 _public_6ac8d28

PROC_DECLARE(0x6ac8bd0, internal_6ac8bd0, public_6ac8bd0);
extern "C" NAKED register_t __cdecl internal_6ac8bd0()
{
    __asm
    {
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 0x20
        jle public_6ac8bf5
        pop edi
        mov dword ptr ds : [public_6ae097c], 0x28
        xor eax, eax
        pop ebx
        ret 0x10
        public_6ac8bf5 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        jne public_6ac8c04
        pop edi
        xor eax, eax
        pop ebx
        ret 0x10
        public_6ac8c04 : nop
        push ebp
        push esi
        test edi, edi
        jle public_6ac8c91
        cmp edi, 0x20
        jne public_6ac8c49
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        lea eax, ds:[ecx-1]
        mov ebx, dword ptr ds : [esi+ecx*4-4]
        test eax, eax
        je public_6ac8c3a
        lea edx, ds:[edi+eax*4]
        lea ecx, ds:[esi+eax*4-4]
        public_6ac8c2d : nop
        mov esi, dword ptr ds : [ecx]
        sub ecx, 4
        mov dword ptr ds : [edx], esi
        sub edx, 4
        dec eax
        jne public_6ac8c2d
        public_6ac8c3a : nop
        pop esi
        mov dword ptr ds : [edi], 0
        pop ebp
        mov eax, ebx
        pop edi
        pop ebx
        ret 0x10
        public_6ac8c49 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebp, 0x20
        mov dword ptr ss : [esp+0x1C], ecx
        sub ebp, edi
        sub eax, esi
        mov dword ptr ss : [esp+0x14], eax
        public_6ac8c62 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, edi
        mov edx, eax
        add esi, 4
        shl edx, cl
        mov ecx, ebp
        shr eax, cl
        or edx, ebx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+esi-4], edx
        mov eax, dword ptr ss : [esp+0x1C]
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6ac8c62
        pop esi
        pop ebp
        mov eax, ebx
        pop edi
        pop ebx
        ret 0x10
        public_6ac8c91 : nop
        jge public_6ac8d28
        cmp edi, 0xFFFFFFE0
        jne public_6ac8cd1
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        cmp ecx, 1
        mov ebx, dword ptr ds : [eax]
        je public_6ac8cc0
        add eax, 4
        mov edx, edi
        lea esi, ds:[ecx-1]
        public_6ac8cb3 : nop
        mov ebp, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edx], ebp
        add edx, 4
        dec esi
        jne public_6ac8cb3
        public_6ac8cc0 : nop
        pop esi
        mov dword ptr ds : [edi+ecx*4-4], 0
        pop ebp
        mov eax, ebx
        pop edi
        pop ebx
        ret 0x10
        public_6ac8cd1 : nop
        lea eax, ds:[ecx-1]
        cmp eax, 0xFFFFFFFF
        je public_6ac8d1a
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub edx, ecx
        neg ebp
        lea esi, ds:[ecx+eax*4]
        inc eax
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x1C], eax
        public_6ac8cf3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, ebp
        mov edx, eax
        sub esi, 4
        shr edx, cl
        lea ecx, ds:[edi+0x20]
        shl eax, cl
        mov ecx, dword ptr ss : [esp+0x14]
        or edx, ebx
        mov dword ptr ds : [esi+ecx+4], edx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6ac8cf3
        public_6ac8d1a : nop
        lea ecx, ds:[edi+0x20]
        pop esi
        shr ebx, cl
        pop ebp
        pop edi
        mov eax, ebx
        pop ebx
        ret 0x10
        public_6ac8d28 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x1C]
        rep movsd
        pop esi
        pop ebp
        mov eax, ebx
        pop edi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ac8bd0)
    }
}

#undef public_6ac8bf5
#undef public_6ac8c04
#undef public_6ac8c2d
#undef public_6ac8c3a
#undef public_6ac8c49
#undef public_6ac8c62
#undef public_6ac8c91
#undef public_6ac8cb3
#undef public_6ac8cc0
#undef public_6ac8cd1
#undef public_6ac8cf3
#undef public_6ac8d1a
#undef public_6ac8d28
