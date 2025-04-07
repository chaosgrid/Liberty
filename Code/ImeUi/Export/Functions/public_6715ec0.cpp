#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715ec0);

#define public_6715ecb _public_6715ecb
#define public_6715ee0 _public_6715ee0
#define public_6715eea _public_6715eea
#define public_6715efc _public_6715efc
#define public_6715f0e _public_6715f0e
#define public_6715f1e _public_6715f1e
#define public_6715f2f _public_6715f2f
#define public_6715f33 _public_6715f33
#define public_6715f4e _public_6715f4e

PROC_DECLARE(0x6715ec0, internal_6715ec0, public_6715ec0);
extern "C" NAKED register_t __cdecl internal_6715ec0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jne public_6715ecb
        xor eax, eax
        ret 
        public_6715ecb : nop
        mov cl, byte ptr ds : [edx]
        push esi
        xor esi, esi
        cmp cl, 0x30
        jne public_6715f2f
        mov al, byte ptr ds : [edx+1]
        cmp al, 0x78
        je public_6715ee0
        cmp al, 0x58
        jne public_6715f2f
        public_6715ee0 : nop
        mov cl, byte ptr ds : [edx+2]
        add edx, 2
        test cl, cl
        je public_6715f4e
        public_6715eea : nop
        cmp cl, 0x30
        jl public_6715efc
        cmp cl, 0x39
        jg public_6715efc
        movsx ecx, cl
        sub ecx, 0x30
        jmp public_6715f1e
        public_6715efc : nop
        cmp cl, 0x41
        jl public_6715f0e
        cmp cl, 0x46
        jg public_6715f0e
        movsx ecx, cl
        sub ecx, 0x37
        jmp public_6715f1e
        public_6715f0e : nop
        cmp cl, 0x61
        jl public_6715f4e
        cmp cl, 0x66
        jg public_6715f4e
        movsx ecx, cl
        sub ecx, 0x57
        public_6715f1e : nop
        shl esi, 4
        add esi, ecx
        mov cl, byte ptr ds : [edx+1]
        inc edx
        test cl, cl
        jne public_6715eea
        mov eax, esi
        pop esi
        ret 
        public_6715f2f : nop
        test cl, cl
        je public_6715f4e
        public_6715f33 : nop
        cmp cl, 0x30
        jl public_6715f4e
        cmp cl, 0x39
        jg public_6715f4e
        movsx ecx, cl
        lea eax, ds:[esi+esi*4]
        inc edx
        lea esi, ds:[ecx+eax*2-0x30]
        mov cl, byte ptr ds : [edx]
        test cl, cl
        jne public_6715f33
        public_6715f4e : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6715ec0)
    }
}

#undef public_6715ecb
#undef public_6715ee0
#undef public_6715eea
#undef public_6715efc
#undef public_6715f0e
#undef public_6715f1e
#undef public_6715f2f
#undef public_6715f33
#undef public_6715f4e
