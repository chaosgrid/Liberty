#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6339f20);
CLANG_FORWARD_PROC_SYMBOL(public_633dc90);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_633a00a _public_633a00a
#define public_633a014 _public_633a014
#define public_633a050 _public_633a050
#define public_633a094 _public_633a094
#define public_633a0a7 _public_633a0a7
#define public_633a0f4 _public_633a0f4
#define public_633a0fd _public_633a0fd
#define public_633a117 _public_633a117
#define public_633a11f _public_633a11f
#define public_633a13d _public_633a13d
#define public_633a147 _public_633a147
#define public_633a15c _public_633a15c
#define public_633a16d _public_633a16d
#define public_633a17a _public_633a17a
#define public_633a18d _public_633a18d
#define public_633a1c2 _public_633a1c2
#define public_633a1d5 _public_633a1d5
#define public_633a208 _public_633a208
#define public_633a224 _public_633a224
#define public_633a246 _public_633a246

PROC_DECLARE(0x6339ff0, internal_6339ff0, public_6339ff0);
extern "C" NAKED register_t __cdecl internal_6339ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x78
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x3C]
        dec eax
        cmp eax, 4
        ja public_633a246
/*FIXUP jmp dword ptr ds : [eax*4+public_633a27c] @0x633a003*/
  JMPTB cmp eax, 0
  JMPTB je public_633a00a
  JMPTB cmp eax, 1
  JMPTB je public_633a014
  JMPTB cmp eax, 2
  JMPTB je public_633a094
  JMPTB cmp eax, 3
  JMPTB je public_633a17a
  JMPTB cmp eax, 4
  JMPTB je public_633a1c2
  JMPTB int 3
        public_633a00a : nop
        fld dword ptr ds : [ebx+0x44]
        pop ebx
        add esp, 0x78
        ret 4
        public_633a014 : nop
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x28]
        call public_62748a0
        lea ebp, ds:[ebx+0xC]
        mov ecx, 0xC
        mov esi, ebp
        lea edi, ss:[esp+0x28]
        rep movsd
        add ebx, 0x44
        push ebx
        lea ecx, ss:[esp+0x2C]
        call public_6339f20
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_633a050
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a050 : nop
        mov edx, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], edx
        call public_633dc90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 4
        public_633a094 : nop
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_633a0a7
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a0a7 : nop
        mov edx, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ds:[ebx+0xC]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fabs 
        fcom dword ptr ds : [public_63a4ab4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        fnstsw ax
        mov dword ptr ss : [esp+0x18], edx
        test ah, 0x41
        jne public_633a0f4
        fld dword ptr ds : [ebx+0x44]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+4]
        jmp public_633a0fd
        public_633a0f4 : nop
        mov eax, dword ptr ds : [public_63a4ab8]
        mov dword ptr ss : [esp+4], eax
        public_633a0fd : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fabs 
        fcom dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 0x41
        jne public_633a117
        fdivr dword ptr ds : [ebx+0x48]
        jmp public_633a11f
        public_633a117 : nop
        fstp st(0)
        fld dword ptr ds : [public_63a4ab8]
        public_633a11f : nop
        fld dword ptr ss : [esp+0x18]
        fabs 
        fcom dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 0x41
        jne public_633a13d
        fld dword ptr ds : [ebx+0x4C]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0xC]
        jmp public_633a147
        public_633a13d : nop
        mov ecx, dword ptr ds : [public_63a4ab8]
        mov dword ptr ss : [esp+0xC], ecx
        public_633a147 : nop
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_633a15c
        fstp st(0)
        fld dword ptr ss : [esp+4]
        public_633a15c : nop
        fcom dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 5
        jnp public_633a16d
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        public_633a16d : nop
        fmul qword ptr ds : [public_639df88]
        pop ebx
        add esp, 0x78
        ret 4
        public_633a17a : nop
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_633a18d
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a18d : nop
        mov ecx, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ds : [ebx+0x48]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+8]
        fabs 
        fld dword ptr ds : [ebx+0x44]
        fld st(2)
        fld st(1)
        fmul st, st(2)
        fld st(4)
        fmul st, st(5)
        jmp public_633a208
        public_633a1c2 : nop
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_633a1d5
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a1d5 : nop
        mov ecx, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ds:[ebx+0xC]
        push ecx
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ds : [ebx+0x4C]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+8]
        fabs 
        fld dword ptr ds : [ebx+0x44]
        fld st(2)
        fld st(3)
        fmul st, st(4)
        fld st(2)
        fmul st, st(3)
        public_633a208 : nop
        faddp 
        fsqrt 
        fdivp 
        fstp st(1)
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_633a224
        fdivp 
        pop ebx
        add esp, 0x78
        ret 4
        public_633a224 : nop
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [ebx+0x44]
        pop ebx
        add esp, 0x78
        ret 4
        public_633a246 : nop
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a51bc @0x633a24c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a51bc
        push 0x4BE
/*FIXUP push offset public_63a4b20 @0x633a256*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4b20
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x633a260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [ebx]
        add esp, 0x14
        mov ecx, ebx
        call dword ptr ds : [eax+0x30]
        pop ebx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x6339ff0)
        ASM_EXPORT_ENTRY_FIRST(0x633a00a, public_633a00a)
        ASM_EXPORT_ENTRY(0x633a014, public_633a014)
        ASM_EXPORT_ENTRY(0x633a094, public_633a094)
        ASM_EXPORT_ENTRY(0x633a17a, public_633a17a)
        ASM_EXPORT_ENTRY_LAST(0x633a1c2, public_633a1c2)
    }
}

#undef public_633a00a
#undef public_633a014
#undef public_633a050
#undef public_633a094
#undef public_633a0a7
#undef public_633a0f4
#undef public_633a0fd
#undef public_633a117
#undef public_633a11f
#undef public_633a13d
#undef public_633a147
#undef public_633a15c
#undef public_633a16d
#undef public_633a17a
#undef public_633a18d
#undef public_633a1c2
#undef public_633a1d5
#undef public_633a208
#undef public_633a224
#undef public_633a246

#pragma init_seg(compiler)
extern "C" void const* const public_633a00a = __AsmFindLabelExport(&internal_6339ff0, 0x633a00a);
extern "C" void const* const public_633a014 = __AsmFindLabelExport(&internal_6339ff0, 0x633a014);
extern "C" void const* const public_633a094 = __AsmFindLabelExport(&internal_6339ff0, 0x633a094);
extern "C" void const* const public_633a17a = __AsmFindLabelExport(&internal_6339ff0, 0x633a17a);
extern "C" void const* const public_633a1c2 = __AsmFindLabelExport(&internal_6339ff0, 0x633a1c2);
