#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62e6a80);
CLANG_FORWARD_PROC_SYMBOL(public_62e7580);
CLANG_FORWARD_PROC_SYMBOL(public_62e8400);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62e8422 _public_62e8422
#define public_62e843e _public_62e843e
#define public_62e8468 _public_62e8468
#define public_62e8491 _public_62e8491
#define public_62e8688 _public_62e8688
#define public_62e868c _public_62e868c
#define public_62e86a3 _public_62e86a3
#define public_62e86a7 _public_62e86a7
#define public_62e86b8 _public_62e86b8
#define public_62e86c4 _public_62e86c4

PROC_DECLARE(0x62e8400, internal_62e8400, public_62e8400);
extern "C" NAKED register_t __cdecl internal_62e8400()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_62e7580
        mov edi, eax
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], edi
        je public_62e86b8
        mov bl, 1
        public_62e8422 : nop
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62e843e
        mov ecx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+8]
        push edx
        call dword ptr ds : [eax+0x88]
        mov byte ptr ds : [esi+0x7D], bl
        public_62e843e : nop
        test dword ptr ds : [esi+8], 0x7F0000
        je public_62e86a7
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        jne public_62e8468
        mov ecx, dword ptr ds : [esi+0x84]
        lea edx, ds:[esi+0xC]
        push edx
        lea edx, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e8468 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62e8491
        mov ecx, dword ptr ds : [edi+0x84]
        lea edx, ds:[edi+0xC]
        push edx
        lea edx, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x2C]
        public_62e8491 : nop
        fld dword ptr ds : [edi+0x14]
        sub esp, 0xC
        fsub dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x10]
        fsub dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi+0xC]
        fsub dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x6C]
        call public_628b030
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x64]
        call public_62c5a70
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62e86a3
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x8C]
        fmul dword ptr ss : [esp+0x8C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62e86a3
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x30]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fcomp dword ptr ds : [public_639fb58]
        fnstsw ax
        test ah, 0x41
        jne public_62e86a3
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x78]
        call public_628b030
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x70]
        call public_62c5a70
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x84]
        call public_628b030
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x7C]
        call public_62c5a70
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x54]
        faddp 
        fcomp dword ptr ds : [public_6399e78]
        fnstsw ax
        test ah, 0x41
        jne public_62e86a3
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_62e6a80
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a0790]
        fnstsw ax
        test ah, 0x41
        jp public_62e86a3
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fdivr dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_639a1d0]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62e8688
        fstp st(0)
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_62e868c
        public_62e8688 : nop
        fstp dword ptr ss : [esp+0x14]
        public_62e868c : nop
        fld dword ptr ss : [esp+0x14]
        call public_6391fc2
        fcomp dword ptr ss : [esp+0x88]
        fnstsw ax
        test ah, 0x41
        jnp public_62e86c4
        public_62e86a3 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_62e86a7 : nop
        mov eax, dword ptr ds : [edi+8]
        add esi, 0x88
        cmp esi, eax
        jne public_62e8422
        public_62e86b8 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x74
        ret 8
        public_62e86c4 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x74
        ret 8
        UNREACHABLE_TRAP(0x62e8400)
    }
}

#undef public_62e8422
#undef public_62e843e
#undef public_62e8468
#undef public_62e8491
#undef public_62e8688
#undef public_62e868c
#undef public_62e86a3
#undef public_62e86a7
#undef public_62e86b8
#undef public_62e86c4
