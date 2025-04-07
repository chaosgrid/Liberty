#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f14980);

#define public_6f14991 _public_6f14991
#define public_6f149a1 _public_6f149a1
#define public_6f149a4 _public_6f149a4
#define public_6f149c4 _public_6f149c4
#define public_6f149c8 _public_6f149c8
#define public_6f149cd _public_6f149cd
#define public_6f149dc _public_6f149dc
#define public_6f149e5 _public_6f149e5

PROC_DECLARE(0x6f14980, internal_6f14980, public_6f14980);
extern "C" NAKED register_t __cdecl internal_6f14980()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x20]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [edx]
        cmp edi, edx
        je public_6f149dc
        mov ebp, dword ptr ss : [esp+0x14]
        public_6f14991 : nop
        mov esi, dword ptr ds : [edi+8]
        add esi, 0xD8
        jne public_6f149a1
        mov eax, dword ptr ss : [ebp]
        jmp public_6f149cd
        public_6f149a1 : nop
        lea eax, ss:[ebp+4]
        public_6f149a4 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f149c8
        test cl, cl
        je public_6f149c4
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f149c8
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f149a4
        public_6f149c4 : nop
        xor eax, eax
        jmp public_6f149cd
        public_6f149c8 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f149cd : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f149e5
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_6f14991
        public_6f149dc : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_6f149e5 : nop
        lea eax, ds:[edi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f14980)
    }
}

#undef public_6f14991
#undef public_6f149a1
#undef public_6f149a4
#undef public_6f149c4
#undef public_6f149c8
#undef public_6f149cd
#undef public_6f149dc
#undef public_6f149e5
