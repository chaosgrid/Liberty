#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_584c80);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);

#define public_584dfc _public_584dfc
#define public_584e42 _public_584e42
#define public_584e48 _public_584e48
#define public_584ea3 _public_584ea3
#define public_584ebe _public_584ebe
#define public_584ec0 _public_584ec0
#define public_584ed3 _public_584ed3
#define public_584eee _public_584eee
#define public_584ef0 _public_584ef0
#define public_584f03 _public_584f03
#define public_584f1e _public_584f1e
#define public_584f20 _public_584f20
#define public_584f33 _public_584f33
#define public_584f4e _public_584f4e
#define public_584f50 _public_584f50
#define public_584ff0 _public_584ff0
#define public_585032 _public_585032
#define public_58505d _public_58505d

PROC_DECLARE(0x584c80, internal_584c80, public_584c80);
extern "C" NAKED register_t __cdecl internal_584c80()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        lea eax, ss:[esp+0x14]
        push edi
        push eax
        mov esi, ecx
        call public_59da70
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5e4d14]
        add esp, 4
        lea ecx, ss:[esp+0x30]
        push ecx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x30]
        fmul dword ptr ds : [public_5e4d14]
        push edx
        mov edx, dword ptr ds : [public_67dbf8]
        lea eax, ss:[esp+0x30]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x28]
        push eax
        fmul dword ptr ds : [public_5e4d14]
        lea ecx, ss:[esp+0x30]
        push ecx
/*FIXUP push offset public_67dbf8 @0x584cd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fstp dword ptr ss : [esp+0x4C]
        call dword ptr ds : [edx+0x34]
        mov ebx, dword ptr ds : [esi+0x494]
        mov dword ptr ss : [esp+0x10], ebx
        fild dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_58505d
        mov edx, dword ptr ds : [esi+0x49C]
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_58505d
        mov edi, dword ptr ds : [esi+0x498]
        mov dword ptr ss : [esp+0x10], edi
        fild dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_58505d
        mov ecx, dword ptr ds : [esi+0x4A0]
        mov dword ptr ss : [esp+0x14], ecx
        fild dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_58505d
        sub edx, ebx
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        sub ecx, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov al, byte ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_5c75e0]
        xor edx, edx
        cmp al, dl
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], 0
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0xC]
        fadd st, st(2)
        fsub dword ptr ss : [esp+0x24]
        fxch st(2)
        fabs 
        fdivp st(2), st
        fxch 
        fmul dword ptr ds : [public_5c77f0]
        fsubr dword ptr ds : [public_5da41c]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fsub dword ptr ss : [esp+0x28]
        fxch 
        fabs 
        fdivp 
        fmul dword ptr ds : [public_5c77f0]
        fsubr dword ptr ds : [public_5e4d2c]
        fstp dword ptr ss : [esp+0x1C]
        je public_584dfc
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        add esi, 0x52C
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        public_584dfc : nop
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x52C]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x530]
        fld dword ptr ds : [esi+0x534]
        fchs 
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x524]
        fcomp dword ptr ds : [public_5da41c]
        fnstsw ax
        test ah, 0x41
        je public_584e42
        fld dword ptr ds : [esi+0x524]
        fcomp dword ptr ds : [public_5e4d28]
        fnstsw ax
        test ah, 5
        jp public_584e48
        public_584e42 : nop
        fxch 
        fchs 
        fxch 
        public_584e48 : nop
        mov eax, dword ptr ss : [esp+0x18]
        fxch 
        fadd dword ptr ds : [esi+0x520]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [esi+0x520]
        fadd dword ptr ds : [esi+0x524]
        fstp dword ptr ds : [esi+0x524]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [esi+0x528]
        fstp dword ptr ds : [esi+0x528]
        mov dword ptr ds : [esi+0x52C], eax
        fld dword ptr ds : [esi+0x520]
        mov eax, dword ptr ss : [esp+0x20]
        fcom qword ptr ds : [public_5e4d20]
        mov dword ptr ds : [esi+0x530], ecx
        mov dword ptr ds : [esi+0x534], eax
        fnstsw ax
        test ah, 5
        jp public_584ebe
        public_584ea3 : nop
        fadd dword ptr ds : [public_5ca23c]
        fcom qword ptr ds : [public_5e4d20]
        fnstsw ax
        test ah, 5
        jnp public_584ea3
        fstp dword ptr ds : [esi+0x520]
        jmp public_584ec0
        public_584ebe : nop
        fstp st(0)
        public_584ec0 : nop
        fld dword ptr ds : [esi+0x524]
        fcom qword ptr ds : [public_5e4d20]
        fnstsw ax
        test ah, 5
        jp public_584eee
        public_584ed3 : nop
        fadd dword ptr ds : [public_5ca23c]
        fcom qword ptr ds : [public_5e4d20]
        fnstsw ax
        test ah, 5
        jnp public_584ed3
        fstp dword ptr ds : [esi+0x524]
        jmp public_584ef0
        public_584eee : nop
        fstp st(0)
        public_584ef0 : nop
        fld dword ptr ds : [esi+0x520]
        fcom qword ptr ds : [public_5e4d18]
        fnstsw ax
        test ah, 0x41
        jne public_584f1e
        public_584f03 : nop
        fsub dword ptr ds : [public_5ca23c]
        fcom qword ptr ds : [public_5e4d18]
        fnstsw ax
        test ah, 0x41
        je public_584f03
        fstp dword ptr ds : [esi+0x520]
        jmp public_584f20
        public_584f1e : nop
        fstp st(0)
        public_584f20 : nop
        fld dword ptr ds : [esi+0x524]
        fcom qword ptr ds : [public_5e4d18]
        fnstsw ax
        test ah, 0x41
        jne public_584f4e
        public_584f33 : nop
        fsub dword ptr ds : [public_5ca23c]
        fcom qword ptr ds : [public_5e4d18]
        fnstsw ax
        test ah, 0x41
        je public_584f33
        fstp dword ptr ds : [esi+0x524]
        jmp public_584f50
        public_584f4e : nop
        fstp st(0)
        public_584f50 : nop
        mov edi, dword ptr ds : [esi+0x520]
        lea eax, ds:[esi+0x37C]
        mov ecx, eax
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [esi+0x524]
        mov dword ptr ds : [ecx+4], edi
        mov edi, dword ptr ds : [esi+0x528]
        mov dword ptr ds : [ecx+8], edi
        fld dword ptr ds : [esi+0x384]
        fld dword ptr ds : [esi+0x380]
        lea ecx, ds:[esi+0x364]
        fld dword ptr ds : [eax]
        lea eax, ds:[esi+0x370]
        fmul dword ptr ds : [public_5c77f4]
        mov dword ptr ds : [esi+0x35C], edx
        mov dword ptr ds : [ecx], edx
        fst dword ptr ss : [esp+0x40]
        mov dword ptr ds : [esi+0x36C], edx
        fcos 
        mov dword ptr ds : [esi+0x374], edx
        mov dword ptr ds : [esi+0x368], 0x3F800000
        mov edx, 3
        fld dword ptr ss : [esp+0x40]
        fsin 
        fld st(1)
        fstp dword ptr ds : [esi+0x358]
        fst dword ptr ds : [esi+0x360]
        fchs 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [esi+0x378]
        fmul dword ptr ds : [public_5c77f4]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x40]
        fsin 
        lea esp, ss:[esp]
        public_584ff0 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec edx
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_584ff0
        fstp st(0)
        mov eax, ecx
        fmul dword ptr ds : [public_5c77f4]
        mov ecx, 3
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x40]
        fsin 
        public_585032 : nop
        fld dword ptr ds : [eax-0xC]
        add eax, 4
        dec ecx
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fld st(2)
        fmul dword ptr ds : [eax-4]
        fsubp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [eax-4]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-4]
        jne public_585032
        fstp st(0)
        public_58505d : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x584c80)
    }
}

#undef public_584dfc
#undef public_584e42
#undef public_584e48
#undef public_584ea3
#undef public_584ebe
#undef public_584ec0
#undef public_584ed3
#undef public_584eee
#undef public_584ef0
#undef public_584f03
#undef public_584f1e
#undef public_584f20
#undef public_584f33
#undef public_584f4e
#undef public_584f50
#undef public_584ff0
#undef public_585032
#undef public_58505d
