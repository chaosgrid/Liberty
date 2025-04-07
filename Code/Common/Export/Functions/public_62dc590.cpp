#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_62dc590);
CLANG_FORWARD_PROC_SYMBOL(public_62dc840);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62dc5b7 _public_62dc5b7
#define public_62dc5b9 _public_62dc5b9
#define public_62dc5f3 _public_62dc5f3
#define public_62dc6c6 _public_62dc6c6
#define public_62dc790 _public_62dc790
#define public_62dc7b3 _public_62dc7b3
#define public_62dc7d0 _public_62dc7d0
#define public_62dc7fd _public_62dc7fd

PROC_DECLARE(0x62dc590, internal_62dc590, public_62dc590);
extern "C" NAKED register_t __cdecl internal_62dc590()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push esi
        push edi
        mov esi, ecx
        call public_62dc840
        mov edi, eax
        mov eax, dword ptr ds : [esi+0x1C0]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        xor ebx, ebx
        cmp eax, ebx
        je public_62dc5b7
        lea ecx, ds:[eax-8]
        jmp public_62dc5b9
        public_62dc5b7 : nop
        xor ecx, ecx
        public_62dc5b9 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp edi, ebx
        mov ecx, eax
        jne public_62dc5f3
        lea ecx, ds:[esi+0x174]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x1A4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        pop edi
        mov dword ptr ds : [esi+0x1A0], 0x40800000
        mov dword ptr ds : [edx+4], eax
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0x50
        ret 4
        public_62dc5f3 : nop
        cmp edi, 1
        je public_62dc7fd
        fld dword ptr ds : [esi+0x1A0]
        fsub dword ptr ss : [esp+0x60]
        fst dword ptr ss : [esp+0xC]
        fst dword ptr ds : [esi+0x1A0]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62dc7fd
        cmp byte ptr ds : [esi+0x1B0], bl
        je public_62dc7fd
        fld dword ptr ds : [esi+0x1B4]
        lea edi, ds:[esi+0x1A4]
        fsub dword ptr ds : [ecx+0x24]
        fld dword ptr ds : [esi+0x1B8]
        fsub dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [esi+0x1BC]
        fsub dword ptr ds : [ecx+0x2C]
        fst dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x60]
        fxch 
        fmul dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi+8]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edi+4]
        faddp 
        fst dword ptr ss : [esp+0x60]
        fcomp qword ptr ds : [public_639fd40]
        fnstsw ax
        test ah, 0x41
        jne public_62dc6c6
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        jmp public_62dc7d0
        public_62dc6c6 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edi+8]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edi+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi]
        fsubp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [edi]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [edi+4]
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x60]
        call public_6391fc2
        fld dword ptr ds : [public_63a05c0]
        fsub dword ptr ss : [esp+0xC]
        push ecx
        lea edx, ss:[esp+0x20]
        fmul dword ptr ds : [public_63a05bc]
        lea eax, ss:[esp+0x14]
        fmulp 
        fmul dword ptr ds : [public_639c13c]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x2C]
        fsin 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6288830
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_63fc994]
        add esp, 0xC
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        jne public_62dc790
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dc790 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_63fc994]
        cmp eax, ebx
        jne public_62dc7b3
        call public_6391cf0
        mov dword ptr ds : [public_63fc994], eax
        public_62dc7b3 : nop
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ss:[esp+0x3C]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        public_62dc7d0 : nop
        mov dword ptr ds : [esi+0x170], ebx
        mov byte ptr ds : [esi+0x180], bl
        mov dword ptr ds : [esi+0x16C], 2
        add esi, 0x174
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        add esp, 0x50
        ret 4
        public_62dc7fd : nop
        mov dword ptr ds : [esi+0x1A0], ebx
        mov dword ptr ds : [esi+0x170], ebx
        mov dword ptr ds : [esi+0x16C], 3
        mov dword ptr ds : [esi+0x174], ebx
        mov dword ptr ds : [esi+0x178], ebx
        mov dword ptr ds : [esi+0x17C], ebx
        mov byte ptr ds : [esi+0x180], bl
        pop edi
        mov byte ptr ds : [esi+0x181], bl
        pop esi
        pop ebx
        add esp, 0x50
        ret 4
        UNREACHABLE_TRAP(0x62dc590)
    }
}

#undef public_62dc5b7
#undef public_62dc5b9
#undef public_62dc5f3
#undef public_62dc6c6
#undef public_62dc790
#undef public_62dc7b3
#undef public_62dc7d0
#undef public_62dc7fd
