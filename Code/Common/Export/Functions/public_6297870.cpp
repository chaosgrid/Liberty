#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62996e0);
CLANG_FORWARD_PROC_SYMBOL(public_62998d0);
CLANG_FORWARD_PROC_SYMBOL(public_6303450);
CLANG_FORWARD_PROC_SYMBOL(public_63038b0);

#define public_6297916 _public_6297916
#define public_629792c _public_629792c
#define public_6297a81 _public_6297a81
#define public_6297ab9 _public_6297ab9
#define public_6297abb _public_6297abb
#define public_6297adf _public_6297adf
#define public_6297ae1 _public_6297ae1
#define public_6297aef _public_6297aef

PROC_DECLARE(0x6297870, internal_6297870, public_6297870);
extern "C" NAKED register_t __cdecl internal_6297870()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x4C]
        mov ecx, dword ptr ds : [eax+0x90]
        test ecx, ecx
        push ebp
        push esi
        push edi
        jne public_6297916
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x60]
        mov ebp, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        mov ecx, ebx
        call public_62998d0
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x24]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ss:[ebp+0x30]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x34]
        lea eax, ss:[esp+0x38]
        push eax
        mov dword ptr ds : [ecx+8], edx
        call public_63038b0
        lea edi, ss:[ebp+0xC]
        mov ecx, 9
        mov esi, eax
        add esp, 8
        rep movsd
        jmp public_629792c
        public_6297916 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x60]
        mov ebp, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        push ebp
        mov ecx, ebx
        call public_62996e0
        public_629792c : nop
        mov eax, dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [eax+0xA0]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6297a81
        lea ecx, ss:[esp+0x28]
        push 0x3F800000
        push ecx
        lea esi, ss:[ebp+0x30]
        call public_6303450
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [esi+4]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+0xA0]
        mov dword ptr ss : [esp+0x64], eax
        fsubp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x6C]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+0x68], eax
        fild dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x64]
        fptan 
        fstp st(0)
        fmul dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fdivp 
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ss : [esp+0x20]
        push esi
        fadd dword ptr ds : [esi+8]
        push ecx
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ss : [esp+0x74]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        call public_63038b0
        lea edi, ss:[ebp+0xC]
        mov ecx, 9
        mov esi, eax
        add esp, 0x10
        rep movsd
        public_6297a81 : nop
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov eax, dword ptr ds : [ecx+0x90]
        sub eax, 2
        jne public_6297aef
        fld dword ptr ds : [ecx+0x94]
        fsub dword ptr ds : [ebx+0x26C]
        fld dword ptr ds : [public_6399408]
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6297ab9
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_6297aef
        jmp public_6297abb
        public_6297ab9 : nop
        fstp st(0)
        public_6297abb : nop
        mov eax, dword ptr ds : [ebx+0x250]
        test eax, eax
        je public_6297aef
        add eax, 0xFFFFFF64
        test eax, eax
        je public_6297aef
        mov eax, dword ptr ds : [ebx+0x250]
        test eax, eax
        je public_6297adf
        add eax, 0xFFFFFF64
        jmp public_6297ae1
        public_6297adf : nop
        xor eax, eax
        public_6297ae1 : nop
        mov dword ptr ss : [ebp+0x3C], eax
        mov dx, word ptr ds : [ebx+0x258]
        mov word ptr ss : [ebp+0x40], dx
        public_6297aef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x6297870)
    }
}

#undef public_6297916
#undef public_629792c
#undef public_6297a81
#undef public_6297ab9
#undef public_6297abb
#undef public_6297adf
#undef public_6297ae1
#undef public_6297aef
