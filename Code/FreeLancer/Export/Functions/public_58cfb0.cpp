#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_58cfb0);

#define public_58cffe _public_58cffe
#define public_58d009 _public_58d009
#define public_58d018 _public_58d018
#define public_58d01b _public_58d01b
#define public_58d030 _public_58d030
#define public_58d049 _public_58d049
#define public_58d099 _public_58d099
#define public_58d0a1 _public_58d0a1

PROC_DECLARE(0x58cfb0, internal_58cfb0, public_58cfb0);
extern "C" NAKED register_t __cdecl internal_58cfb0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        jbe public_58d0a1
        mov esi, dword ptr ds : [ecx+0x4A4]
        test esi, esi
        je public_58d0a1
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, esi
        sar eax, 2
        cmp edx, eax
        jae public_58d0a1
        fld dword ptr ds : [ecx+0x4FC]
        push ebx
        fadd st(0), st
        lea ebx, ds:[edx-1]
        fld dword ptr ds : [esi+ebx*4]
        push edi
        mov edi, esi
        test edi, edi
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x10]
        jne public_58cffe
        xor eax, eax
        jmp public_58d009
        public_58cffe : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edi
        sar eax, 2
        public_58d009 : nop
        lea edi, ds:[edx+1]
        cmp edi, eax
        jne public_58d018
        fld dword ptr ds : [ecx+0x48C]
        jmp public_58d01b
        public_58d018 : nop
        fld dword ptr ds : [esi+edi*4]
        public_58d01b : nop
        faddp 
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_58d030
        fstp dword ptr ss : [esp+0x14]
        jmp public_58d049
        public_58d030 : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_58d049
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        public_58d049 : nop
        fld dword ptr ds : [esi+edx*4]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x44
        jnp public_58d099
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+edx*4]
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        je public_58d099
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        jae public_58d099
        mov edx, dword ptr ds : [ecx+0x4B4]
        test edx, edx
        je public_58d099
        mov eax, dword ptr ds : [ecx+0x4B8]
        sub eax, edx
        sar eax, 2
        test eax, eax
        jbe public_58d099
        push 1
        push 1
        call public_57a620
        public_58d099 : nop
        pop edi
        pop ebx
        mov al, 1
        pop esi
        ret 8
        public_58d0a1 : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x58cfb0)
    }
}

#undef public_58cffe
#undef public_58d009
#undef public_58d018
#undef public_58d01b
#undef public_58d030
#undef public_58d049
#undef public_58d099
#undef public_58d0a1
