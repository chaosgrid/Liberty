#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62cdfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62ce320);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);

#define public_62cdfba _public_62cdfba
#define public_62cdfc4 _public_62cdfc4
#define public_62cdfd3 _public_62cdfd3
#define public_62cdfd5 _public_62cdfd5
#define public_62ce24b _public_62ce24b
#define public_62ce24d _public_62ce24d
#define public_62ce254 _public_62ce254
#define public_62ce269 _public_62ce269
#define public_62ce270 _public_62ce270
#define public_62ce288 _public_62ce288
#define public_62ce2d6 _public_62ce2d6
#define public_62ce2e4 _public_62ce2e4

PROC_DECLARE(0x62cdfa0, internal_62cdfa0, public_62cdfa0);
extern "C" NAKED register_t __cdecl internal_62cdfa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xF4
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x168]
        test eax, eax
        je public_62cdfba
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62cdfc4
        public_62cdfba : nop
        xor al, al
        pop ebp
        add esp, 0xF4
        ret 
        public_62cdfc4 : nop
        mov eax, dword ptr ss : [ebp+0x168]
        test eax, eax
        je public_62cdfd3
        lea ecx, ds:[eax-8]
        jmp public_62cdfd5
        public_62cdfd3 : nop
        xor ecx, ecx
        public_62cdfd5 : nop
        mov eax, dword ptr ds : [ecx]
        push ebx
        push esi
        push edi
        push 0
        lea edx, ss:[esp+0xD8]
        push edx
        lea edx, ss:[esp+0xAC]
        push edx
        lea edx, ss:[esp+0x80]
        push edx
        lea edx, ss:[esp+0x50]
        push edx
        mov edx, dword ptr ss : [ebp+0x178]
        push edx
        call dword ptr ds : [eax+0xC8]
        mov edx, dword ptr ss : [esp+0x98]
        lea eax, ss:[ebp+0x1FC]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0xC8]
        lea ebx, ss:[ebp+0x1CC]
        lea edi, ss:[ebp+0x208]
        mov ecx, 9
        lea esi, ss:[esp+0x74]
        rep movsd
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xCC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xD0]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0xF8]
        lea edi, ss:[ebp+0x1D8]
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, 9
        lea esi, ss:[esp+0xA4]
        rep movsd
        lea ecx, ss:[ebp+0x19C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xFC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x100]
        mov dword ptr ds : [ecx+8], edx
        lea edi, ss:[ebp+0x1A8]
        mov ecx, 9
        lea esi, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x3C], edi
        rep movsd
        fld dword ptr ds : [ebx+8]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ebx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ebx]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        call public_62e1680
        fld dword ptr ss : [ebp+0x1A4]
        fsub dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x1A0]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ss : [ebp+0x19C]
        lea ecx, ss:[esp+0x2C]
        fsub dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        call public_62e1680
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        call public_62e1630
        fstp dword ptr ss : [esp+0x48]
        mov esi, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x54]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x14]
        push eax
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x30]
        push ecx
        call public_62e1630
        fstp dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x54]
        fld dword ptr ds : [ebx+8]
        lea edi, ss:[ebp+0x208]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ebx+0x14]
        lea edx, ss:[esp+0x68]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+0x20]
        push edx
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ds : [esi+0x14]
        push eax
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ds : [esi+0x20]
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ds : [edi+8]
        push ecx
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [edi+0x14]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [edi+0x20]
        fstp dword ptr ss : [esp+0x58]
        call public_62887d0
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x40]
        add esp, 0x18
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x60]
        push eax
        call public_62e1680
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        call public_62e1630
        fld dword ptr ss : [esp+0x48]
        fcomp qword ptr ds : [public_639fd40]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_62ce24b
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_639dfe8]
        fnstsw ax
        test ah, 0x41
        jne public_62ce24b
        fcomp qword ptr ds : [public_639fd38]
        fnstsw ax
        test ah, 0x41
        jne public_62ce24d
        mov byte ptr ss : [ebp+0x17C], 1
        jmp public_62ce254
        public_62ce24b : nop
        fstp st(0)
        public_62ce24d : nop
        mov byte ptr ss : [ebp+0x17C], 0
        public_62ce254 : nop
        mov eax, dword ptr ss : [esp+0x40]
        dec eax
        cmp eax, 7
        ja public_62ce2e4
/*FIXUP jmp dword ptr ds : [eax*4+public_62ce2f4] @0x62ce262*/
  JMPTB cmp eax, 0
  JMPTB je public_62ce269
  JMPTB cmp eax, 1
  JMPTB je public_62ce2d6
  JMPTB cmp eax, 2
  JMPTB je public_62ce2d6
  JMPTB cmp eax, 3
  JMPTB je public_62ce2d6
  JMPTB cmp eax, 4
  JMPTB je public_62ce2d6
  JMPTB cmp eax, 5
  JMPTB je public_62ce270
  JMPTB cmp eax, 6
  JMPTB je public_62ce270
  JMPTB cmp eax, 7
  JMPTB je public_62ce270
  JMPTB int 3
        public_62ce269 : nop
        mov byte ptr ss : [ebp+0x230], 1
        public_62ce270 : nop
        fld qword ptr ds : [public_639e2d0]
        lea eax, ds:[edi+8]
        fcos 
        mov ecx, 3
        fld qword ptr ds : [public_639e2d0]
        fsin 
        public_62ce288 : nop
        fld dword ptr ds : [eax-8]
        add eax, 0xC
        dec ecx
        fld st(0)
        fmul st, st(3)
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fsubp 
        fstp dword ptr ds : [eax-0x14]
        fld st(2)
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62ce288
        fstp st(0)
        push 0x40490FDB
        mov ecx, esi
        fstp st(0)
        call public_62ce320
        push 0x40490FDB
        mov ecx, ebx
        call public_62ce320
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        add esp, 0xF4
        ret 
        public_62ce2d6 : nop
        mov byte ptr ss : [ebp+0x17C], 0
        mov byte ptr ss : [ebp+0x231], 1
        public_62ce2e4 : nop
        pop edi
        pop esi
        pop ebx
        mov al, 1
        pop ebp
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x62cdfa0)
        ASM_EXPORT_ENTRY_FIRST(0x62ce269, public_62ce269)
        ASM_EXPORT_ENTRY(0x62ce270, public_62ce270)
        ASM_EXPORT_ENTRY_LAST(0x62ce2d6, public_62ce2d6)
    }
}

#undef public_62cdfba
#undef public_62cdfc4
#undef public_62cdfd3
#undef public_62cdfd5
#undef public_62ce24b
#undef public_62ce24d
#undef public_62ce254
#undef public_62ce269
#undef public_62ce270
#undef public_62ce288
#undef public_62ce2d6
#undef public_62ce2e4

#pragma init_seg(compiler)
extern "C" void const* const public_62ce269 = __AsmFindLabelExport(&internal_62cdfa0, 0x62ce269);
extern "C" void const* const public_62ce270 = __AsmFindLabelExport(&internal_62cdfa0, 0x62ce270);
extern "C" void const* const public_62ce2d6 = __AsmFindLabelExport(&internal_62cdfa0, 0x62ce2d6);
