#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_62db740);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_62e25c0);
CLANG_FORWARD_PROC_SYMBOL(public_6339f20);
CLANG_FORWARD_PROC_SYMBOL(public_6339fb0);
CLANG_FORWARD_PROC_SYMBOL(public_633dc90);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6339b1f _public_6339b1f
#define public_6339b65 _public_6339b65
#define public_6339c0a _public_6339c0a
#define public_6339c7b _public_6339c7b
#define public_6339d20 _public_6339d20
#define public_6339d8c _public_6339d8c
#define public_6339d9a _public_6339d9a
#define public_6339db9 _public_6339db9
#define public_6339dc7 _public_6339dc7
#define public_6339e39 _public_6339e39
#define public_6339e85 _public_6339e85
#define public_6339ef1 _public_6339ef1

PROC_DECLARE(0x6339b00, internal_6339b00, public_6339b00);
extern "C" NAKED register_t __cdecl internal_6339b00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xB8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x3C]
        dec eax
        cmp eax, 3
        push esi
        push edi
        ja public_6339e85
/*FIXUP jmp dword ptr ds : [eax*4+public_6339f04] @0x6339b18*/
  JMPTB cmp eax, 0
  JMPTB je public_6339b1f
  JMPTB cmp eax, 1
  JMPTB je public_6339dc7
  JMPTB cmp eax, 2
  JMPTB je public_6339c7b
  JMPTB cmp eax, 3
  JMPTB je public_6339b65
  JMPTB int 3
        public_6339b1f : nop
        mov ecx, dword ptr ss : [esp+0xC8]
        lea eax, ds:[ebx+0x30]
        push eax
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        add esp, 0xC
        fld dword ptr ss : [esp+0x50]
        pop edi
        fmul dword ptr ss : [esp+0x4C]
        pop esi
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fsqrt 
        fsub dword ptr ds : [ebx+0x44]
        pop ebx
        add esp, 0xB8
        ret 4
        public_6339b65 : nop
        lea ecx, ss:[esp+0x64]
        call public_62748a0
        fld dword ptr ds : [ebx+0x48]
        mov eax, dword ptr ds : [ebx+0x44]
        fmul qword ptr ds : [public_639df88]
        mov ecx, eax
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, eax
        fstp dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x64]
        rep movsd
        mov esi, dword ptr ss : [esp+0xC8]
        mov ecx, edx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x94], edx
        lea edx, ss:[esp+0x88]
        push edx
        mov dword ptr ss : [esp+0x9C], eax
        lea eax, ss:[esp+0x20]
        push esi
        push eax
        mov dword ptr ss : [esp+0xA8], ecx
        call public_6288800
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        call public_62dbb90
        add esp, 0x18
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ss:[esp+0x6C]
        call public_62dba00
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6339c0a
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6339c0a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x44]
        push esi
        push ecx
        call public_6288800
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_62dbb90
        add esp, 0x18
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x6C]
        call public_62dba00
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x20]
        mov bl, al
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x34]
        jmp public_6339d8c
        public_6339c7b : nop
        lea ecx, ss:[esp+0x64]
        call public_62db740
        push 0x3F000000
        lea ecx, ds:[ebx+0x44]
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        call public_6288830
        mov eax, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x6C]
        lea esi, ds:[ebx+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x68]
        mov esi, dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0xA0], eax
        lea eax, ss:[esp+0x94]
        push eax
        mov dword ptr ss : [esp+0xA8], ecx
        lea ecx, ss:[esp+0x38]
        push esi
        push ecx
        mov dword ptr ss : [esp+0xB4], edx
        call public_6288800
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        call public_62dbb90
        add esp, 0x24
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x6C]
        call public_62dba00
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6339d20
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6339d20 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        lea eax, ss:[esp+0x88]
        push eax
        lea ecx, ss:[esp+0x2C]
        push esi
        push ecx
        call public_6288800
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_62dbb90
        add esp, 0x18
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x6C]
        call public_62dba00
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x20]
        mov bl, al
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_6288800
        lea ecx, ss:[esp+0x40]
        public_6339d8c : nop
        add esp, 0xC
        call public_62c4780
        test bl, bl
        jne public_6339d9a
        fchs 
        public_6339d9a : nop
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6339db9
        fchs 
        pop edi
        fsqrt 
        pop esi
        pop ebx
        fchs 
        add esp, 0xB8
        ret 4
        public_6339db9 : nop
        pop edi
        fsqrt 
        pop esi
        pop ebx
        add esp, 0xB8
        ret 4
        public_6339dc7 : nop
        lea ecx, ss:[esp+0x64]
        call public_62db740
        lea esi, ds:[ebx+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x64]
        rep movsd
        add ebx, 0x44
        push ebx
        lea ecx, ss:[esp+0x68]
        call public_6339f20
        mov edx, dword ptr ss : [esp+0xC8]
        lea ecx, ss:[esp+0x88]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call public_6288800
        add esp, 0xC
        lea ecx, ss:[esp+0x1C]
        call public_6347e60
        fst dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 5
        jp public_6339e39
        lea ecx, ss:[esp+0x64]
        call public_6339fb0
        fchs 
        pop edi
        pop esi
        pop ebx
        add esp, 0xB8
        ret 4
        public_6339e39 : nop
        fld dword ptr ss : [esp+0xC]
        push ecx
        fdivr qword ptr ds : [public_6399410]
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp]
        call public_62e25c0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        call public_62dbb90
        add esp, 0xC
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x68]
        call public_633dc90
        pop edi
        pop esi
        fsubr dword ptr ss : [esp+4]
        pop ebx
        add esp, 0xB8
        ret 4
        public_6339e85 : nop
        mov esi, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ds : [ebx]
        push esi
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x44]
        lea ecx, ds:[ebx+0x30]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6288800
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x20]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x14]
        push 0
        push esi
        mov ecx, ebx
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [edx+0x34]
        test al, al
        je public_6339ef1
        fld dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        fchs 
        pop ebx
        add esp, 0xB8
        ret 4
        public_6339ef1 : nop
        fld dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        pop ebx
        add esp, 0xB8
        ret 4
        UNREACHABLE_TRAP(0x6339b00)
        ASM_EXPORT_ENTRY_FIRST(0x6339b1f, public_6339b1f)
        ASM_EXPORT_ENTRY(0x6339b65, public_6339b65)
        ASM_EXPORT_ENTRY(0x6339c7b, public_6339c7b)
        ASM_EXPORT_ENTRY_LAST(0x6339dc7, public_6339dc7)
    }
}

#undef public_6339b1f
#undef public_6339b65
#undef public_6339c0a
#undef public_6339c7b
#undef public_6339d20
#undef public_6339d8c
#undef public_6339d9a
#undef public_6339db9
#undef public_6339dc7
#undef public_6339e39
#undef public_6339e85
#undef public_6339ef1

#pragma init_seg(compiler)
extern "C" void const* const public_6339b1f = __AsmFindLabelExport(&internal_6339b00, 0x6339b1f);
extern "C" void const* const public_6339b65 = __AsmFindLabelExport(&internal_6339b00, 0x6339b65);
extern "C" void const* const public_6339c7b = __AsmFindLabelExport(&internal_6339b00, 0x6339c7b);
extern "C" void const* const public_6339dc7 = __AsmFindLabelExport(&internal_6339b00, 0x6339dc7);
