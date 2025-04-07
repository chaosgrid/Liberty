#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e800);

#define public_636e811 _public_636e811
#define public_636e813 _public_636e813
#define public_636e826 _public_636e826
#define public_636e834 _public_636e834
#define public_636e837 _public_636e837

PROC_DECLARE(0x636e800, internal_636e800, public_636e800);
extern "C" NAKED register_t __cdecl internal_636e800()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+eax*4+4]
        test ecx, ecx
        je public_636e811
        dec ecx
        jmp public_636e813
        public_636e811 : nop
        mov ecx, eax
        public_636e813 : nop
        cmp ecx, eax
        push esi
        push edi
        jg public_636e834
        add edx, 4
        xor eax, eax
        test ecx, ecx
        jle public_636e834
        mov esi, dword ptr ss : [esp+0x10]
        public_636e826 : nop
        mov edi, dword ptr ds : [edx]
        add edx, 4
        cmp edi, esi
        je public_636e837
        inc eax
        cmp eax, ecx
        jl public_636e826
        public_636e834 : nop
        or eax, 0xFFFFFFFF
        public_636e837 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636e800)
    }
}

#undef public_636e811
#undef public_636e813
#undef public_636e826
#undef public_636e834
#undef public_636e837
