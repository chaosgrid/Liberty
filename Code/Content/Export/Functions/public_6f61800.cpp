#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f611a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f61350);
CLANG_FORWARD_PROC_SYMBOL(public_6f616e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f61800);

#define public_6f61908 _public_6f61908
#define public_6f61941 _public_6f61941
#define public_6f61990 _public_6f61990
#define public_6f619f1 _public_6f619f1
#define public_6f61a00 _public_6f61a00
#define public_6f61ada _public_6f61ada
#define public_6f61b32 _public_6f61b32
#define public_6f61b98 _public_6f61b98
#define public_6f61bcd _public_6f61bcd
#define public_6f61bd7 _public_6f61bd7
#define public_6f61be3 _public_6f61be3
#define public_6f61c09 _public_6f61c09
#define public_6f61c50 _public_6f61c50
#define public_6f61c65 _public_6f61c65
#define public_6f61c7f _public_6f61c7f
#define public_6f61c8b _public_6f61c8b
#define public_6f61ca1 _public_6f61ca1

PROC_DECLARE(0x6f61800, internal_6f61800, public_6f61800);
extern "C" NAKED register_t __cdecl internal_6f61800()
{
    __asm
    {
        sub esp, 0xDC
        mov ecx, dword ptr ss : [esp+0xF4]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x104]
        push edi
        mov edi, dword ptr ss : [esp+0x10C]
        lea eax, ss:[esp+0x48]
        push eax
        push edi
        push esi
        push ecx
        call public_6f611a0
        fstp st(0)
        fld dword ptr ds : [edi+8]
        add esp, 4
        fsub dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        call dword ptr ds : [public_6fb3370]
        fld dword ptr ss : [esp+0x14]
        shl eax, 1
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        je public_6f61908
        fmul dword ptr ds : [public_6fb8578]
        mov edx, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [edx], 0xFFFFFFFF
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+4]
        fmul dword ptr ds : [public_6fb8578]
        mov edx, dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fb8578]
        jmp public_6f61941
        public_6f61908 : nop
        fmul dword ptr ds : [public_6fbbc58]
        mov eax, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [eax], 1
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi+8]
        fmul dword ptr ds : [public_6fbbc58]
        mov edi, esi
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fbbc58]
        public_6f61941 : nop
        mov ebx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0xFC]
        mov dword ptr ss : [esp+0x20], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x28], edi
        mov edi, dword ptr ss : [esp+0x114]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        xor al, al
        mov dword ptr ss : [esp+0x24], ebx
        mov ebx, dword ptr ss : [esp+0xF8]
        mov dword ptr ds : [edi+8], edx
        mov edi, dword ptr ss : [esp+0x110]
        mov dword ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0x13], al
        nop 
        lea esp, ss:[esp]
        public_6f61990 : nop
        test al, al
        jne public_6f61ca1
        cmp dword ptr ss : [esp+0x30], 1
        jne public_6f619f1
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6fb5e84]
        mov ecx, dword ptr ss : [esp+0x114]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        fmul dword ptr ds : [public_6fb5e84]
        mov eax, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        neg ecx
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        fmul dword ptr ds : [public_6fb5e84]
        fstp dword ptr ss : [esp+0x1C]
        public_6f619f1 : nop
        mov dword ptr ss : [esp+0x2C], 0
        lea esp, ss:[esp]
        public_6f61a00 : nop
        fild dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x6C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x68]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [edx+4], ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x110]
        push edx
        push esi
        push edi
        call public_6f611a0
        fstp st(0)
        fld dword ptr ss : [esp+0x44]
        add esp, 0x10
        fsub dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbc54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f61ada
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [esi+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbc54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f61ada
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbc54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f61c8b
        public_6f61ada : nop
        fld dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x10C]
        fsub dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbc54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f61b32
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ds : [ecx+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbc54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f61b32
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fbbc54]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f61c8b
        public_6f61b32 : nop
        mov edx, dword ptr ss : [esp+0xF4]
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x15]
        push ecx
        push edx
        push edi
        mov byte ptr ss : [esp+0x22], 1
        mov byte ptr ss : [esp+0x21], 1
        call public_6f616e0
        add esp, 0x10
        test al, al
        je public_6f61c65
        mov edx, dword ptr ss : [esp+0xF0]
        lea eax, ss:[esp+0x11]
        push eax
        lea ecx, ss:[esp+0x16]
        push ecx
        push edx
        push edi
        mov byte ptr ss : [esp+0x21], 0
        mov byte ptr ss : [esp+0x22], 1
        call public_6f616e0
        add esp, 0x10
        test al, al
        je public_6f61c65
        test ebp, ebp
        je public_6f61bd7
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ss : [ebp+8]
        je public_6f61bd7
        public_6f61b98 : nop
        fld dword ptr ss : [esp+0x100]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f61bcd
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        call dword ptr ds : [public_6fb3550]
        fcomp dword ptr ss : [esp+0x108]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        je public_6f61c65
        public_6f61bcd : nop
        mov eax, dword ptr ss : [ebp+8]
        add esi, 4
        cmp esi, eax
        jne public_6f61b98
        public_6f61bd7 : nop
        test ebx, ebx
        je public_6f61c09
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6f61c09
        public_6f61be3 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        call dword ptr ds : [public_6fb34b8]
        fcomp qword ptr ds : [public_6fb70c0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jnp public_6f61c65
        mov eax, dword ptr ds : [ebx+8]
        add esi, 4
        cmp esi, eax
        jne public_6f61be3
        public_6f61c09 : nop
        call public_6f5a7e0
        test al, al
        je public_6f61c50
        mov eax, dword ptr ss : [esp+0x11C]
        mov ecx, dword ptr ds : [eax+0x48]
        lea edx, ss:[esp+0x40]
        push edx
        push 0x7FFDFF
        push 0x43480000
        push edi
        push 0x20
        lea eax, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x58], ecx
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x5C]
        add esp, 0x1C
        test eax, eax
        jne public_6f61c65
        public_6f61c50 : nop
        mov edx, dword ptr ss : [esp+0x11C]
        push edx
        push edi
        call public_6f61350
        add esp, 8
        test al, al
        jne public_6f61c7f
        public_6f61c65 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x108]
        inc eax
        cmp eax, 0xF
        mov dword ptr ss : [esp+0x2C], eax
        jge public_6f61c8b
        jmp public_6f61a00
        public_6f61c7f : nop
        mov esi, dword ptr ss : [esp+0x108]
        mov byte ptr ss : [esp+0x13], 1
        public_6f61c8b : nop
        mov eax, dword ptr ss : [esp+0x30]
        inc eax
        mov dword ptr ss : [esp+0x30], eax
        cmp eax, 2
        mov al, byte ptr ss : [esp+0x13]
        jle public_6f61990
        public_6f61ca1 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xDC
        ret 
        UNREACHABLE_TRAP(0x6f61800)
    }
}

#undef public_6f61908
#undef public_6f61941
#undef public_6f61990
#undef public_6f619f1
#undef public_6f61a00
#undef public_6f61ada
#undef public_6f61b32
#undef public_6f61b98
#undef public_6f61bcd
#undef public_6f61bd7
#undef public_6f61be3
#undef public_6f61c09
#undef public_6f61c50
#undef public_6f61c65
#undef public_6f61c7f
#undef public_6f61c8b
#undef public_6f61ca1
