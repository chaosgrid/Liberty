#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715600);
CLANG_FORWARD_PROC_SYMBOL(public_6716b20);

#define public_671565b _public_671565b
#define public_67156c2 _public_67156c2
#define public_67156f5 _public_67156f5
#define public_6715712 _public_6715712
#define public_6715740 _public_6715740
#define public_671577b _public_671577b
#define public_67157a1 _public_67157a1
#define public_67157a9 _public_67157a9
#define public_6715806 _public_6715806
#define public_671580c _public_671580c
#define public_6715835 _public_6715835
#define public_6715959 _public_6715959
#define public_671595f _public_671595f
#define public_6715965 _public_6715965
#define public_6715971 _public_6715971
#define public_6715979 _public_6715979
#define public_67159c0 _public_67159c0
#define public_6715a15 _public_6715a15
#define public_6715a74 _public_6715a74

PROC_DECLARE(0x6715600, internal_6715600, public_6715600);
extern "C" NAKED register_t __cdecl internal_6715600()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x214
        mov edx, dword ptr ds : [public_6719074]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_671cfbc]
        xor ebx, ebx
        cmp edi, ebx
        mov eax, edx
        setne byte ptr ss : [esp+0x1C]
        and eax, 0xFF
        lea edi, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xC], eax
        xor eax, eax
        fild dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, 0x80
        rep stosd
        mov al, byte ptr ds : [public_6719076]
        cmp eax, 4
        ja public_67157a9
/*FIXUP jmp dword ptr ds : [eax*4+public_6715a80] @0x6715654*/
  JMPTB cmp eax, 0
  JMPTB je public_671565b
  JMPTB cmp eax, 1
  JMPTB je public_67156f5
  JMPTB cmp eax, 2
  JMPTB je public_6715712
  JMPTB cmp eax, 3
  JMPTB je public_6715740
  JMPTB cmp eax, 4
  JMPTB je public_671577b
  JMPTB int 3
        public_671565b : nop
        fild dword ptr ds : [public_671b52c]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_671bac8]
        mov dword ptr ss : [esp+0x14], ebx
        fadd st, st(1)
        mov dword ptr ss : [esp+0x10], eax
        shr dl, 1
        fadd dword ptr ds : [public_6717220]
        fild qword ptr ss : [esp+0x10]
        and edx, 0xFF
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_67156c2
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_671721c]
        fiadd dword ptr ds : [public_671b524]
        mov dword ptr ss : [esp+0xC], edx
        fsub dword ptr ds : [public_6717220]
        fstp dword ptr ss : [esp+0x20]
        fild dword ptr ds : [public_671b530]
        fisub dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x24]
        jmp public_67157a9
        public_67156c2 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6717218]
        fsubr st, st(1)
        fadd dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], edx
        fadd dword ptr ds : [public_6717220]
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fild dword ptr ds : [public_671b530]
        fisub dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x24]
        jmp public_67157a9
        public_67156f5 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6717218]
        fadd dword ptr ds : [public_6717220]
        fst dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        jmp public_67157a9
        public_6715712 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6717218]
        mov ecx, dword ptr ds : [public_671bac8]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ecx
        fadd dword ptr ds : [public_6717220]
        fild qword ptr ss : [esp+0x10]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        jmp public_67157a9
        public_6715740 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6717218]
        mov edx, dword ptr ds : [public_671bac8]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_671b7b0]
        fadd dword ptr ds : [public_6717220]
        fild qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fild qword ptr ss : [esp+0x10]
        jmp public_67157a1
        public_671577b : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6717218]
        mov ecx, dword ptr ds : [public_671b7b0]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ecx
        fadd dword ptr ds : [public_6717220]
        fst dword ptr ss : [esp+0x20]
        fild qword ptr ss : [esp+0x10]
        public_67157a1 : nop
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        public_67157a9 : nop
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        cmp al, bl
        je public_6715806
        mov esi, dword ptr ds : [public_67170a4]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        fsub qword ptr ds : [public_671cee0]
        fcomp qword ptr ds : [public_6717210]
        fnstsw ax
        and eax, 0x4100
        jne public_671580c
        inc dword ptr ds : [public_671cfc0]
        call esi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_671cfc0]
        mov dword ptr ss : [esp+0x14], ebx
        cmp eax, 0xD
        fild qword ptr ss : [esp+0x10]
        fstp qword ptr ds : [public_671cee0]
        jbe public_671580c
        public_6715806 : nop
        mov dword ptr ds : [public_671cfc0], ebx
        public_671580c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ss:[esp+0x44]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6717218]
        and ecx, 0xFF
        mov edx, 0xF
        imul ecx, dword ptr ds : [public_671cfc0]
        mov esi, 0x3F800000
        public_6715835 : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ebx
        fild qword ptr ss : [esp+0x10]
        inc ecx
        add eax, 0x20
        dec edx
        fmul dword ptr ds : [public_671720c]
        fld st(0)
        fcos 
        fld st(2)
        fmulp 
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax-0x24]
        fsin 
        fld st(1)
        fmulp 
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [eax-0x20]
        mov dword ptr ds : [eax-0x18], esi
        jne public_6715835
        mov ecx, dword ptr ds : [public_6719068]
        xor eax, eax
        mov al, byte ptr ds : [public_6719075]
        shl eax, 0x18
        cmp ecx, ebx
        lea edx, ds:[eax+0xFFFFFF]
        fstp st(0)
        mov dword ptr ss : [esp+0x30], edx
        jne public_6715959
        cmp byte ptr ss : [esp+0x1C], bl
        je public_671595f
        lea ecx, ds:[eax+0xFF0000]
        lea edx, ds:[eax+0xFF3000]
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x70], edx
        lea ecx, ds:[eax+0xFF6000]
        lea edx, ds:[eax+0xFF9000]
        mov dword ptr ss : [esp+0x90], ecx
        mov dword ptr ss : [esp+0xB0], edx
        lea ecx, ds:[eax+0xFFC000]
        lea edx, ds:[eax+0xFFFF00]
        mov dword ptr ss : [esp+0xD0], ecx
        mov dword ptr ss : [esp+0xF0], edx
        lea ecx, ds:[eax+0xC0FF00]
        lea edx, ds:[eax+0x90FF00]
        mov dword ptr ss : [esp+0x110], ecx
        mov dword ptr ss : [esp+0x130], edx
        lea ecx, ds:[eax+0x60FF00]
        lea edx, ds:[eax+0x30C0FF]
        mov dword ptr ss : [esp+0x150], ecx
        mov dword ptr ss : [esp+0x170], edx
        lea ecx, ds:[eax+0xA0FF]
        lea edx, ds:[eax+0x3090FF]
        mov dword ptr ss : [esp+0x190], ecx
        mov dword ptr ss : [esp+0x1B0], edx
        lea ecx, ds:[eax+0x6060FF]
        lea edx, ds:[eax+0x9030FF]
        add eax, 0xC000FF
        mov dword ptr ss : [esp+0x1D0], ecx
        mov dword ptr ss : [esp+0x1F0], edx
        mov dword ptr ss : [esp+0x210], eax
        jmp public_6715979
        public_6715959 : nop
        cmp byte ptr ss : [esp+0x1C], bl
        jne public_6715965
        public_671595f : nop
        mov ecx, dword ptr ds : [public_671906c]
        public_6715965 : nop
        lea edx, ds:[eax+ecx]
        lea eax, ss:[esp+0x50]
        mov ecx, 0xF
        public_6715971 : nop
        mov dword ptr ds : [eax], edx
        add eax, 0x20
        dec ecx
        jne public_6715971
        public_6715979 : nop
        lea eax, ss:[esp+0x20]
        push 0x10
        push eax
        call dword ptr ds : [public_671bacc]
        mov ecx, dword ptr ds : [public_6719074]
        mov edx, dword ptr ds : [public_671cfc4]
        and ecx, 0xFF
        and edx, 0x3FF
        mov dword ptr ss : [esp+0x14], ecx
        add esp, 8
        fild dword ptr ss : [esp+0xC]
        cmp edx, 0x12
        fmul dword ptr ds : [public_6717208]
        jne public_67159c0
        cmp byte ptr ss : [esp+0x1C], bl
        je public_67159c0
        fmul dword ptr ds : [public_6717204]
        public_67159c0 : nop
        mov esi, dword ptr ds : [public_6719078]
        cmp esi, ebx
        je public_6715a74
        fmul dword ptr ds : [public_6717200]
        mov edi, dword ptr ds : [esi]
        call public_6716b20
        push eax
        mov ecx, esi
        call dword ptr ds : [edi]
        mov ecx, dword ptr ds : [public_6719078]
        mov edi, dword ptr ds : [public_6719070]
        xor edx, edx
        mov dl, byte ptr ds : [public_6719075]
        mov eax, dword ptr ds : [ecx]
        shl edx, 0x18
        or edx, edi
        push edx
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [public_671cfbc]
        mov esi, dword ptr ds : [public_671cf90]
        cmp eax, 1
        je public_6715a15
        mov esi, dword ptr ds : [public_67190a8]
        public_6715a15 : nop
        mov ecx, dword ptr ds : [public_6719078]
        lea edx, ss:[esp+0xC]
        push ebp
        push edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [public_6719078]
        mov ebp, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [edi]
        shr ebp, 1
        call public_6716b20
        fld dword ptr ss : [esp+0x24]
        sub eax, ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push eax
        shr ebp, 1
        call public_6716b20
        sub eax, ebp
        mov ecx, edi
        push eax
        call dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [public_6719078]
        push esi
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 0x214
        ret 
        public_6715a74 : nop
        pop edi
        pop esi
        fstp st(0)
        pop ebx
        add esp, 0x214
        ret 
        UNREACHABLE_TRAP(0x6715600)
        ASM_EXPORT_ENTRY_FIRST(0x671565b, public_671565b)
        ASM_EXPORT_ENTRY(0x67156f5, public_67156f5)
        ASM_EXPORT_ENTRY(0x6715712, public_6715712)
        ASM_EXPORT_ENTRY(0x6715740, public_6715740)
        ASM_EXPORT_ENTRY_LAST(0x671577b, public_671577b)
    }
}

#undef public_671565b
#undef public_67156c2
#undef public_67156f5
#undef public_6715712
#undef public_6715740
#undef public_671577b
#undef public_67157a1
#undef public_67157a9
#undef public_6715806
#undef public_671580c
#undef public_6715835
#undef public_6715959
#undef public_671595f
#undef public_6715965
#undef public_6715971
#undef public_6715979
#undef public_67159c0
#undef public_6715a15
#undef public_6715a74

#pragma init_seg(compiler)
extern "C" void const* const public_671565b = __AsmFindLabelExport(&internal_6715600, 0x671565b);
extern "C" void const* const public_67156f5 = __AsmFindLabelExport(&internal_6715600, 0x67156f5);
extern "C" void const* const public_6715712 = __AsmFindLabelExport(&internal_6715600, 0x6715712);
extern "C" void const* const public_6715740 = __AsmFindLabelExport(&internal_6715600, 0x6715740);
extern "C" void const* const public_671577b = __AsmFindLabelExport(&internal_6715600, 0x671577b);
