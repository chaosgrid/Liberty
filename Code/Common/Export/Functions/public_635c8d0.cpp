#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c8d0);

#define public_635c900 _public_635c900
#define public_635c91a _public_635c91a
#define public_635c934 _public_635c934
#define public_635c94e _public_635c94e
#define public_635c960 _public_635c960

PROC_DECLARE(0x635c8d0, internal_635c8d0, public_635c8d0);
extern "C" NAKED register_t __cdecl internal_635c8d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [edx]
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        shl edi, cl
        mov dword ptr ss : [esp+0x18], esi
        add esi, 2
        cmp esi, edi
        jg public_635c900
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c900 : nop
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [edx+4]
        mov ebx, esi
        shl ebx, cl
        lea ebp, ds:[edi+2]
        cmp ebp, ebx
        jg public_635c91a
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c91a : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edx+8]
        mov ebx, eax
        shl ebx, cl
        lea ebp, ds:[edx+2]
        cmp ebp, ebx
        jg public_635c934
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c934 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x18]
        add ebx, 2
        shl ebx, cl
        cmp ebp, ebx
        jl public_635c94e
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c94e : nop
        add esi, 2
        shl esi, cl
        cmp edi, esi
        jl public_635c960
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_635c960 : nop
        add eax, 2
        shl eax, cl
        xor ecx, ecx
        pop edi
        pop esi
        cmp edx, eax
        setl cl
        pop ebp
        pop ebx
        mov eax, ecx
        ret 0xC
        UNREACHABLE_TRAP(0x635c8d0)
    }
}

#undef public_635c900
#undef public_635c91a
#undef public_635c934
#undef public_635c94e
#undef public_635c960
