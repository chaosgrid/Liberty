#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d4b0);

#define public_58d500 _public_58d500
#define public_58d502 _public_58d502
#define public_58d52a _public_58d52a
#define public_58d531 _public_58d531

PROC_DECLARE(0x58d4b0, internal_58d4b0, public_58d4b0);
extern "C" NAKED register_t __cdecl internal_58d4b0()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ds : [eax+0x4A4]
        test edx, edx
        push ebx
        push esi
        je public_58d531
        mov ecx, dword ptr ds : [eax+0x4A8]
        sub ecx, edx
        mov edx, dword ptr ss : [esp+0xC]
        sar ecx, 2
        cmp edx, ecx
        jae public_58d531
        mov esi, dword ptr ds : [eax+0x4C4]
        lea ecx, ds:[edx+edx*2]
        mov bl, byte ptr ds : [esi+ecx*4+1]
        test bl, bl
        lea ecx, ds:[esi+ecx*4]
        je public_58d531
        cmp byte ptr ds : [ecx], 0
        je public_58d531
        mov cl, byte ptr ds : [eax+0x4D8]
        test cl, cl
        je public_58d500
        cmp dword ptr ds : [eax+0x4DC], edx
        jne public_58d500
        xor cl, cl
        jmp public_58d502
        public_58d500 : nop
        mov cl, 1
        public_58d502 : nop
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        mov dword ptr ds : [eax+0x4DC], edx
        mov byte ptr ds : [eax+0x4D8], 1
        je public_58d52a
        test cl, cl
        je public_58d52a
        push edi
        mov edi, dword ptr ds : [esi]
        push edx
        push eax
        push 0x300D
        mov ecx, esi
        call dword ptr ds : [edi+0x5C]
        pop edi
        public_58d52a : nop
        pop esi
        mov al, 1
        pop ebx
        ret 4
        public_58d531 : nop
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x58d4b0)
    }
}

#undef public_58d500
#undef public_58d502
#undef public_58d52a
#undef public_58d531
