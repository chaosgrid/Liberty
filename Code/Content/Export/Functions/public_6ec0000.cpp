#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0000);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6ec0042 _public_6ec0042
#define public_6ec0099 _public_6ec0099
#define public_6ec00a5 _public_6ec00a5
#define public_6ec00a7 _public_6ec00a7
#define public_6ec00ca _public_6ec00ca
#define public_6ec00cc _public_6ec00cc
#define public_6ec00d2 _public_6ec00d2
#define public_6ec00f6 _public_6ec00f6

PROC_DECLARE(0x6ec0000, internal_6ec0000, public_6ec0000);
extern "C" NAKED register_t __cdecl internal_6ec0000()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea edi, ds:[esi+0x18]
        add ecx, 0xEC
        push edi
        xor bl, bl
        call public_6fa7200
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xEC
        push edi
        mov dword ptr ss : [esp+0x14], eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_6ec00f6
        mov ebp, dword ptr ds : [public_6fb3664]
        public_6ec0042 : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov eax, dword ptr ds : [ecx+0x10]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6ec00d2
        fld dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [esi+0x20]
        test cl, cl
        fsub dword ptr ds : [esi+0xC]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x14]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        je public_6ec0099
        fcom dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 5
        jnp public_6ec00a5
        test cl, cl
        jne public_6ec00ca
        public_6ec0099 : nop
        fcomp dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_6ec00cc
        jmp public_6ec00a7
        public_6ec00a5 : nop
        fstp st(0)
        public_6ec00a7 : nop
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ss : [esp+0x48]
        fst dword ptr ds : [esi+0x24]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6ec00d2
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x34
        ret 4
        public_6ec00ca : nop
        fstp st(0)
        public_6ec00cc : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0x24], ecx
        public_6ec00d2 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xEC
        push edi
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        jne public_6ec0042
        public_6ec00f6 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6ec0000)
    }
}

#undef public_6ec0042
#undef public_6ec0099
#undef public_6ec00a5
#undef public_6ec00a7
#undef public_6ec00ca
#undef public_6ec00cc
#undef public_6ec00d2
#undef public_6ec00f6
