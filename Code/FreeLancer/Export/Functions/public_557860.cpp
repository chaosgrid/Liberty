#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557860);

#define public_5578e4 _public_5578e4
#define public_5578e6 _public_5578e6
#define public_5578fd _public_5578fd
#define public_55791b _public_55791b
#define public_5579a5 _public_5579a5

PROC_DECLARE(0x557860, internal_557860, public_557860);
extern "C" NAKED register_t __cdecl internal_557860()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x30]
        push edi
        fcomp qword ptr ds : [public_5c8ba8]
        lea edi, ds:[esi+0x18]
        mov eax, esi
        mov edx, dword ptr ds : [eax]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        lea ebx, ds:[esi+0x24]
        mov ecx, esi
        mov eax, dword ptr ds : [ecx]
        mov edx, ebx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], eax
        fnstsw ax
        mov dword ptr ds : [edx+8], ecx
        test ah, 0x44
        jnp public_5579a5
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+0x30]
        fadd dword ptr ds : [esi+0x34]
        fcom qword ptr ds : [public_5c89b8]
        fst dword ptr ds : [esi+0x34]
        fnstsw ax
        test ah, 1
        jne public_5578e4
        fstp qword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [public_5c71c4]
        fsubr qword ptr ss : [esp+0x14]
        add esp, 8
        fstp dword ptr ds : [esi+0x34]
        jmp public_5578e6
        public_5578e4 : nop
        fstp st(0)
        public_5578e6 : nop
        fld dword ptr ds : [esi+0x34]
        fcom dword ptr ds : [esi+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_5578fd
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        jmp public_55791b
        public_5578fd : nop
        fld dword ptr ds : [public_5d55b4]
        fdiv dword ptr ds : [esi+0x40]
        fmulp 
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_55791b
        fsubr dword ptr ds : [public_5d55b4]
        public_55791b : nop
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fld st(0)
        mov dword ptr ds : [ebx], ecx
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fld st(0)
        mov dword ptr ds : [ebx+4], edx
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi]
        mov dword ptr ds : [ebx+8], eax
        fsub dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+8], eax
        public_5579a5 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x557860)
    }
}

#undef public_5578e4
#undef public_5578e6
#undef public_5578fd
#undef public_55791b
#undef public_5579a5
