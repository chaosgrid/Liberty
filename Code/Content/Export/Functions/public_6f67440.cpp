#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f575a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5aeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f67440);
CLANG_FORWARD_PROC_SYMBOL(public_6f67640);

#define public_6f67479 _public_6f67479
#define public_6f675f7 _public_6f675f7
#define public_6f67608 _public_6f67608
#define public_6f6760c _public_6f6760c
#define public_6f6762a _public_6f6762a

PROC_DECLARE(0x6f67440, internal_6f67440, public_6f67440);
extern "C" NAKED register_t __cdecl internal_6f67440()
{
    __asm
    {
        sub esp, 0x38
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edx+0xE0]
        fld st(0)
        fmul st, st(1)
        push esi
        mov esi, dword ptr ds : [eax]
        xor ecx, ecx
        cmp esi, eax
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+4], ecx
        fstp st(0)
        je public_6f6762a
        push ebx
        mov ebx, dword ptr ss : [esp+0x48]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x5C]
        public_6f67479 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [ecx+0x5A8]
        test al, al
        mov ebp, dword ptr ss : [esp+0x58]
        jne public_6f6760c
        lea eax, ss:[esp+0x30]
        push eax
        call public_6eb70f0
        fld dword ptr ds : [ebx+0x24]
        fsub dword ptr ss : [esp+0x30]
        lea ecx, ds:[ebx+0x24]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0x38]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ss : [esp+0x14]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jnp public_6f675f7
        fld dword ptr ss : [ebp]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f6760c
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x60]
        push eax
        call public_6f5aeb0
        fmul dword ptr ss : [esp+0x64]
        add esp, 0x10
        fcomp dword ptr ss : [ebp]
        fnstsw ax
        test ah, 0x41
        jp public_6f6760c
        mov ecx, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6eb7810
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6f67640
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x2C]
        push edx
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fstp dword ptr ss : [esp+0x54]
        call public_6f5aeb0
        fmul dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x60]
        push eax
        fstp dword ptr ss : [esp+0x5C]
        call public_6f5aeb0
        fmul dword ptr ss : [esp+0x64]
        add esp, 8
        fmul dword ptr ss : [esp+0x54]
        fdivr dword ptr ss : [esp+0x50]
        fld qword ptr ds : [public_6fbbcc8]
        fcos 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_6f6760c
        public_6f675f7 : nop
        test edi, edi
        je public_6f67608
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_6f575a0
        test al, al
        je public_6f6760c
        public_6f67608 : nop
        inc dword ptr ss : [esp+0x10]
        public_6f6760c : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xE0]
        jne public_6f67479
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 0x38
        ret 
        public_6f6762a : nop
        mov eax, ecx
        pop esi
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6f67440)
    }
}

#undef public_6f67479
#undef public_6f675f7
#undef public_6f67608
#undef public_6f6760c
#undef public_6f6762a
