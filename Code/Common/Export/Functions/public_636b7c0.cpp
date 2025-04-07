#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636b7c0);

#define public_636b7da _public_636b7da
#define public_636b7ed _public_636b7ed
#define public_636b7fb _public_636b7fb
#define public_636b803 _public_636b803
#define public_636b80a _public_636b80a
#define public_636b81b _public_636b81b

PROC_DECLARE(0x636b7c0, internal_636b7c0, public_636b7c0);
extern "C" NAKED register_t __cdecl internal_636b7c0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor eax, eax
        test edi, edi
        jle public_636b803
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x1C]
        public_636b7da : nop
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        cmp esi, ecx
        jne public_636b7ed
        xor ebp, ebp
        mov bp, word ptr ds : [edx+2]
        cmp ebx, ebp
        je public_636b80a
        public_636b7ed : nop
        xor ebp, ebp
        mov bp, word ptr ds : [edx+2]
        cmp esi, ebp
        jne public_636b7fb
        cmp ebx, ecx
        je public_636b81b
        public_636b7fb : nop
        inc eax
        add edx, 4
        cmp eax, edi
        jl public_636b7da
        public_636b803 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_636b80a : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ecx], 0
        and eax, 0xFFFF
        pop ebx
        ret 
        public_636b81b : nop
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [edx], 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636b7c0)
    }
}

#undef public_636b7da
#undef public_636b7ed
#undef public_636b7fb
#undef public_636b803
#undef public_636b80a
#undef public_636b81b
