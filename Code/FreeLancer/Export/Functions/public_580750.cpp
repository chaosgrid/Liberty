#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b10);
CLANG_FORWARD_PROC_SYMBOL(public_4e7090);
CLANG_FORWARD_PROC_SYMBOL(public_580750);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_580772 _public_580772
#define public_580781 _public_580781
#define public_580a12 _public_580a12
#define public_580a3d _public_580a3d
#define public_580a97 _public_580a97
#define public_580ce8 _public_580ce8

PROC_DECLARE(0x580750, internal_580750, public_580750);
extern "C" NAKED register_t __cdecl internal_580750()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x664]
        push edi
        mov edi, dword ptr ds : [esi+0x658]
        xor ebx, ebx
        cmp ecx, edi
        jne public_580772
        mov byte ptr ds : [esi+0x67B], bl
        jmp public_580781
        public_580772 : nop
        cmp ecx, dword ptr ds : [esi+0x65C]
        jne public_580781
        mov byte ptr ds : [esi+0x67B], 1
        public_580781 : nop
        mov eax, dword ptr ds : [esi+0x65C]
        sub eax, ecx
        cdq 
        push ebp
        mov ebp, eax
        xor ebp, edx
        sub ebp, edx
        mov eax, edi
        sub eax, ecx
        cdq 
        xor eax, edx
        sub eax, edx
        cmp ebp, eax
        pop ebp
        jge public_580a12
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        lea ecx, ds:[esi+0x5B8]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        call public_4e7090
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ds:[esi+0x540]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        call public_4e7090
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        mov edx, dword ptr ds : [public_67dbf8]
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
/*FIXUP push offset public_67dbf8 @0x580817*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [edx+0x34]
        test al, al
        je public_580ce8
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
/*FIXUP push offset public_67dbf8 @0x580841*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        test al, al
        je public_580ce8
        mov edx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xC], eax
        fstp dword ptr ss : [esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x14]
        fstp dword ptr ss : [esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x38], 0
        call public_423b60
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov edx, 0x5F3759DF
        fld dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x3C]
        fmul dword ptr ss : [esp+0x1C]
        push eax
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fst dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x80]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x80], edx
        fld dword ptr ss : [esp+0x80]
        lea ecx, ss:[esp+0x34]
        fmul dword ptr ss : [esp+0x80]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x88]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x8C]
        fstp st(0)
        call public_423b60
        fld dword ptr ss : [esp+0x38]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x38]
        add esp, 0x18
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fst dword ptr ss : [esp+0x70]
        mov eax, dword ptr ss : [esp+0x70]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x70], ecx
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fstp st(0)
        fld dword ptr ss : [esp+0x74]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_580ce8
        fld dword ptr ss : [esp+0x70]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_580ce8
        mov edx, dword ptr ss : [esp+0x74]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        call public_4c8b10
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], ecx
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        call public_4c8b10
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x2C]
        add esp, 0x18
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fmul dword ptr ss : [esp+0x70]
        fcomp dword ptr ss : [esp+0x74]
        fnstsw ax
        test ah, 5
        jnp public_580ce8
        pop edi
        mov byte ptr ds : [esi+0x67B], bl
        pop esi
        pop ebx
        add esp, 0x60
        ret 8
        public_580a12 : nop
        mov eax, dword ptr ds : [public_67c4c0]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        jne public_580a3d
        call public_5b73e0
        mov dword ptr ds : [public_67c4c0], eax
        public_580a3d : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ds:[esi+0x5B8]
        push ecx
        lea ecx, ss:[esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [public_67c4c0]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x5C], ecx
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        jne public_580a97
        call public_5b73e0
        mov dword ptr ds : [public_67c4c0], eax
        public_580a97 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ds:[esi+0x570]
        push ecx
        lea ecx, ss:[esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], eax
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        mov eax, dword ptr ds : [public_67dbf8]
        mov dword ptr ss : [esp+0x70], ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
/*FIXUP push offset public_67dbf8 @0x580adf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [eax+0x34]
        test al, al
        je public_580ce8
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov edx, dword ptr ds : [public_67dbf8]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
/*FIXUP push offset public_67dbf8 @0x580b09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [edx+0x34]
        test al, al
        je public_580ce8
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ebx
        fstp dword ptr ss : [esp+0x48]
        sub esp, 0xC
        fild qword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x2C]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x18]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fst dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ss : [esp+0x7C]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x7C], eax
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x80]
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x14]
        mov edx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fst dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x70]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x70], edx
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x70]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x70]
        fstp st(0)
        fld dword ptr ss : [esp+0x74]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_580ce8
        fld dword ptr ss : [esp+0x70]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_580ce8
        mov eax, dword ptr ss : [esp+0x74]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        call public_4c8b10
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x7C]
        lea ecx, ss:[esp+0x6C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fmul dword ptr ss : [esp+0x70]
        fcomp dword ptr ss : [esp+0x74]
        fnstsw ax
        test ah, 5
        jp public_580ce8
        pop edi
        mov byte ptr ds : [esi+0x67B], bl
        pop esi
        pop ebx
        add esp, 0x60
        ret 8
        public_580ce8 : nop
        pop edi
        mov byte ptr ds : [esi+0x67B], 1
        pop esi
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x580750)
    }
}

#undef public_580772
#undef public_580781
#undef public_580a12
#undef public_580a3d
#undef public_580a97
#undef public_580ce8
