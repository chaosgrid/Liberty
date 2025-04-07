#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100079c0);
CLANG_FORWARD_PROC_SYMBOL(public_10007bd0);

#define public_10007be1 _public_10007be1
#define public_10007c01 _public_10007c01
#define public_10007c23 _public_10007c23
#define public_10007c28 _public_10007c28

PROC_DECLARE(0x10007bd0, internal_10007bd0, public_10007bd0);
extern "C" NAKED register_t __cdecl internal_10007bd0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        lea esi, ss:[esp+6]
        xor ecx, ecx
        mov eax, 1
        sub edx, esi
        public_10007be1 : nop
        lea esi, ds:[edx+eax*2]
        movzx esi, word ptr ss : [esp+esi+4]
        add si, cx
        shl esi, 1
        mov ecx, esi
        mov word ptr ss : [esp+eax*2+4], cx
        inc eax
        cmp eax, 0xF
        jle public_10007be1
        xor esi, esi
        test ebx, ebx
        jl public_10007c28
        public_10007c01 : nop
        movzx edx, word ptr ds : [edi+esi*4+2]
        test edx, edx
        je public_10007c23
        xor eax, eax
        mov ax, word ptr ss : [esp+edx*2+4]
        movzx ecx, ax
        inc eax
        mov word ptr ss : [esp+edx*2+4], ax
        call public_100079c0
        mov word ptr ds : [edi+esi*4], ax
        public_10007c23 : nop
        inc esi
        cmp esi, ebx
        jle public_10007c01
        public_10007c28 : nop
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x10007bd0)
    }
}

#undef public_10007be1
#undef public_10007c01
#undef public_10007c23
#undef public_10007c28
