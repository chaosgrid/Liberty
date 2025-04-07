#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f72980);

#define public_6f729a0 _public_6f729a0
#define public_6f729b6 _public_6f729b6
#define public_6f729c4 _public_6f729c4
#define public_6f729df _public_6f729df
#define public_6f729f0 _public_6f729f0
#define public_6f72a02 _public_6f72a02
#define public_6f72a0f _public_6f72a0f

PROC_DECLARE(0x6f72980, internal_6f72980, public_6f72980);
extern "C" NAKED register_t __cdecl internal_6f72980()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xE0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f729b6
        lea ebx, ds:[ebx]
        public_6f729a0 : nop
        mov ecx, dword ptr ds : [esi+8]
        push 1
        push ebx
        push ebp
        call public_6eb6e00
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xE0]
        jne public_6f729a0
        public_6f729b6 : nop
        mov esi, dword ptr ds : [edi+0x8C]
        cmp esi, dword ptr ds : [edi+0x90]
        je public_6f729df
        public_6f729c4 : nop
        push 1
        push ebx
        push ebp
        mov ecx, esi
        call public_6eb6e00
        mov eax, dword ptr ds : [edi+0x90]
        add esi, 0x548
        cmp esi, eax
        jne public_6f729c4
        public_6f729df : nop
        mov esi, dword ptr ds : [edi+0xBC]
        cmp esi, dword ptr ds : [edi+0xC0]
        je public_6f72a0f
        lea ecx, ds:[ecx]
        public_6f729f0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f72a02
        push 1
        push ebx
        push ebp
        call public_6eb6e00
        public_6f72a02 : nop
        mov eax, dword ptr ds : [edi+0xC0]
        add esi, 4
        cmp esi, eax
        jne public_6f729f0
        public_6f72a0f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f72980)
    }
}

#undef public_6f729a0
#undef public_6f729b6
#undef public_6f729c4
#undef public_6f729df
#undef public_6f729f0
#undef public_6f72a02
#undef public_6f72a0f
