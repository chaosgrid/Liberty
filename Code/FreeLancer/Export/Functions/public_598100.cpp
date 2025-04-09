#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_598100);
CLANG_FORWARD_PROC_SYMBOL(public_598210);

#define public_598140 _public_598140
#define public_59814b _public_59814b
#define public_598160 _public_598160
#define public_59816b _public_59816b
#define public_59816f _public_59816f
#define public_598191 _public_598191
#define public_59819c _public_59819c
#define public_5981ab _public_5981ab
#define public_5981ae _public_5981ae
#define public_5981c4 _public_5981c4
#define public_5981dd _public_5981dd
#define public_5981fd _public_5981fd
#define public_598205 _public_598205

PROC_DECLARE(0x598100, internal_598100, public_598100);
extern "C" NAKED register_t __cdecl internal_598100()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        jbe public_598205
        mov edx, dword ptr ds : [ecx+0x98]
        test edx, edx
        je public_598205
        mov eax, dword ptr ds : [ecx+0x9C]
        sub eax, edx
        sar eax, 2
        cmp ebx, eax
        jae public_598205
        test edx, edx
        push ebp
        push edi
        lea edi, ds:[ebx-1]
        mov ebp, 2
        jne public_598140
        xor eax, eax
        jmp public_59814b
        public_598140 : nop
        mov eax, dword ptr ds : [ecx+0x9C]
        sub eax, edx
        sar eax, 2
        public_59814b : nop
        lea edx, ds:[edi+2]
        cmp edx, eax
        jbe public_59816f
        mov edx, dword ptr ds : [ecx+0x98]
        test edx, edx
        jne public_598160
        xor eax, eax
        jmp public_59816b
        public_598160 : nop
        mov eax, dword ptr ds : [ecx+0x9C]
        sub eax, edx
        sar eax, 2
        public_59816b : nop
        sub eax, edi
        mov ebp, eax
        public_59816f : nop
        fld dword ptr ds : [ecx+0xEC]
        mov edx, dword ptr ds : [ecx+0x98]
        fadd st(0), st
        push esi
        fld dword ptr ds : [edx+edi*4]
        mov esi, edx
        test esi, esi
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x14]
        jne public_598191
        xor eax, eax
        jmp public_59819c
        public_598191 : nop
        mov eax, dword ptr ds : [ecx+0x9C]
        sub eax, esi
        sar eax, 2
        public_59819c : nop
        lea esi, ds:[ebx+1]
        cmp esi, eax
        jne public_5981ab
        fld dword ptr ds : [ecx+0x80]
        jmp public_5981ae
        public_5981ab : nop
        fld dword ptr ds : [edx+esi*4]
        public_5981ae : nop
        faddp 
        pop esi
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_5981c4
        fstp dword ptr ss : [esp+0x14]
        jmp public_5981dd
        public_5981c4 : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_5981dd
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        public_5981dd : nop
        fld dword ptr ds : [edx+ebx*4]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x44
        jnp public_5981fd
        fld dword ptr ss : [esp+0x14]
        push 0
        push 0
        fstp dword ptr ds : [edx+ebx*4]
        push ebp
        push edi
        call public_598210
        public_5981fd : nop
        pop edi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_598205 : nop
        xor al, al
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x598100)
    }
}

#undef public_598140
#undef public_59814b
#undef public_598160
#undef public_59816b
#undef public_59816f
#undef public_598191
#undef public_59819c
#undef public_5981ab
#undef public_5981ae
#undef public_5981c4
#undef public_5981dd
#undef public_5981fd
#undef public_598205
