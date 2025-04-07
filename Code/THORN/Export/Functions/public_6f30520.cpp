#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30480);
CLANG_FORWARD_PROC_SYMBOL(public_6f30520);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f30530 _public_6f30530
#define public_6f30538 _public_6f30538
#define public_6f30547 _public_6f30547
#define public_6f3057a _public_6f3057a
#define public_6f30593 _public_6f30593
#define public_6f305c8 _public_6f305c8
#define public_6f305dd _public_6f305dd
#define public_6f305e2 _public_6f305e2
#define public_6f305e6 _public_6f305e6
#define public_6f305fb _public_6f305fb
#define public_6f30600 _public_6f30600

PROC_DECLARE(0x6f30520, internal_6f30520, public_6f30520);
extern "C" NAKED register_t __cdecl internal_6f30520()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        push edi
        jne public_6f30530
        xor eax, eax
        jmp public_6f30538
        public_6f30530 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 4
        public_6f30538 : nop
        cmp eax, 1
        jne public_6f30547
        fld dword ptr ds : [esi]
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_6f30547 : nop
        fld dword ptr ss : [esp+0x18]
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        shl eax, 4
        add eax, esi
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+8], eax
        fcomp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], ecx
        fnstsw ax
        test ah, 5
        jp public_6f3057a
        fld dword ptr ds : [esi]
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_6f3057a : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_6f30593
        fld dword ptr ds : [edi]
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_6f30593 : nop
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+8]
        fdivp 
        fimul dword ptr ss : [esp+0x10]
        call public_6f57f16
        mov ecx, eax
        shl ecx, 4
        fld dword ptr ds : [ecx+esi+4]
        add ecx, esi
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6f305e2
        cmp ecx, esi
        jbe public_6f305dd
        public_6f305c8 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jnp public_6f305dd
        sub ecx, 0x10
        cmp ecx, esi
        ja public_6f305c8
        public_6f305dd : nop
        lea eax, ds:[ecx+0x10]
        jmp public_6f30600
        public_6f305e2 : nop
        cmp ecx, edi
        ja public_6f305fb
        public_6f305e6 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        je public_6f305fb
        add ecx, 0x10
        cmp ecx, edi
        jbe public_6f305e6
        public_6f305fb : nop
        mov eax, ecx
        add ecx, 0xFFFFFFF0
        public_6f30600 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        push ecx
        call public_6f30480
        add esp, 0xC
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f30520)
    }
}

#undef public_6f30530
#undef public_6f30538
#undef public_6f30547
#undef public_6f3057a
#undef public_6f30593
#undef public_6f305c8
#undef public_6f305dd
#undef public_6f305e2
#undef public_6f305e6
#undef public_6f305fb
#undef public_6f30600
