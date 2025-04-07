#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);
CLANG_FORWARD_PROC_SYMBOL(public_636e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636ea05 _public_636ea05
#define public_636ea30 _public_636ea30
#define public_636ea3a _public_636ea3a
#define public_636ea44 _public_636ea44
#define public_636ea4e _public_636ea4e
#define public_636ea5a _public_636ea5a
#define public_636ea7d _public_636ea7d
#define public_636ea90 _public_636ea90
#define public_636eaa2 _public_636eaa2
#define public_636eaac _public_636eaac
#define public_636eab6 _public_636eab6
#define public_636ead0 _public_636ead0
#define public_636eaed _public_636eaed

PROC_DECLARE(0x636e9c0, internal_636e9c0, public_636e9c0);
extern "C" NAKED register_t __cdecl internal_636e9c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, esi
        sub eax, edi
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jns public_636ea05
        push edi
/*FIXUP push offset public_63ee904 @0x636e9dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee904
        call public_6356960
        mov eax, dword ptr ds : [public_658b994]
        push ebx
/*FIXUP push offset public_63997b0 @0x636e9ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push eax
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x20
        public_636ea05 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        lea esi, ds:[esi+ebp-1]
        push esi
        call public_636e920
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        inc esi
        add ebx, 4
        cmp edi, 4
        mov dword ptr ds : [eax+ecx*4+4], esi
        lea edx, ds:[eax+ebp*4+4]
        ja public_636ea5a
/*FIXUP jmp dword ptr ds : [edi*4+public_636eaf8] @0x636ea29*/
  JMPTB cmp edi, 0
  JMPTB je public_636ea7d
  JMPTB cmp edi, 1
  JMPTB je public_636ea4e
  JMPTB cmp edi, 2
  JMPTB je public_636ea44
  JMPTB cmp edi, 3
  JMPTB je public_636ea3a
  JMPTB cmp edi, 4
  JMPTB je public_636ea30
  JMPTB int 3
        public_636ea30 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ecx
        add edx, 4
        add ebx, 4
        public_636ea3a : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ecx
        add edx, 4
        add ebx, 4
        public_636ea44 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ecx
        add edx, 4
        add ebx, 4
        public_636ea4e : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ecx
        add edx, 4
        add ebx, 4
        jmp public_636ea7d
        public_636ea5a : nop
        lea ecx, ds:[edi*4]
        mov dword ptr ss : [esp+0x18], ecx
        mov ebp, ecx
        shr ecx, 2
        mov esi, ebx
        mov edi, edx
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov ecx, ebp
        add edx, ecx
        add ebx, ecx
        public_636ea7d : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add ebx, 4
        cmp ecx, 4
        ja public_636ead0
/*FIXUP jmp dword ptr ds : [ecx*4+public_636eb0c] @0x636ea89*/
  JMPTB cmp ecx, 0
  JMPTB je public_636eaed
  JMPTB cmp ecx, 1
  JMPTB je public_636ea90
  JMPTB cmp ecx, 2
  JMPTB je public_636eab6
  JMPTB cmp ecx, 3
  JMPTB je public_636eaac
  JMPTB cmp ecx, 4
  JMPTB je public_636eaa2
  JMPTB int 3
        public_636ea90 : nop
        mov ecx, dword ptr ds : [ebx]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ecx
        add edx, 4
        pop ebp
        mov dword ptr ds : [edx], 0
        pop ebx
        ret 
        public_636eaa2 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ecx
        add edx, 4
        add ebx, 4
        public_636eaac : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ecx
        add edx, 4
        add ebx, 4
        public_636eab6 : nop
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [ebx+4]
        pop edi
        add edx, 4
        pop esi
        mov dword ptr ds : [edx], ecx
        add edx, 4
        pop ebp
        mov dword ptr ds : [edx], 0
        pop ebx
        ret 
        public_636ead0 : nop
        lea ebp, ds:[ecx*4]
        mov ecx, ebp
        mov esi, ebx
        mov ebx, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        add edx, ebp
        public_636eaed : nop
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e9c0)
        ASM_EXPORT_ENTRY_FIRST(0x636ea30, public_636ea30)
        ASM_EXPORT_ENTRY(0x636ea3a, public_636ea3a)
        ASM_EXPORT_ENTRY(0x636ea44, public_636ea44)
        ASM_EXPORT_ENTRY(0x636ea4e, public_636ea4e)
        ASM_EXPORT_ENTRY(0x636ea7d, public_636ea7d)
        ASM_EXPORT_ENTRY(0x636ea90, public_636ea90)
        ASM_EXPORT_ENTRY(0x636eaa2, public_636eaa2)
        ASM_EXPORT_ENTRY(0x636eaac, public_636eaac)
        ASM_EXPORT_ENTRY(0x636eab6, public_636eab6)
        ASM_EXPORT_ENTRY_LAST(0x636eaed, public_636eaed)
    }
}

#undef public_636ea05
#undef public_636ea30
#undef public_636ea3a
#undef public_636ea44
#undef public_636ea4e
#undef public_636ea5a
#undef public_636ea7d
#undef public_636ea90
#undef public_636eaa2
#undef public_636eaac
#undef public_636eab6
#undef public_636ead0
#undef public_636eaed

#pragma init_seg(compiler)
extern "C" void const* const public_636ea30 = __AsmFindLabelExport(&internal_636e9c0, 0x636ea30);
extern "C" void const* const public_636ea3a = __AsmFindLabelExport(&internal_636e9c0, 0x636ea3a);
extern "C" void const* const public_636ea44 = __AsmFindLabelExport(&internal_636e9c0, 0x636ea44);
extern "C" void const* const public_636ea4e = __AsmFindLabelExport(&internal_636e9c0, 0x636ea4e);
extern "C" void const* const public_636ea7d = __AsmFindLabelExport(&internal_636e9c0, 0x636ea7d);
extern "C" void const* const public_636ea90 = __AsmFindLabelExport(&internal_636e9c0, 0x636ea90);
extern "C" void const* const public_636eaa2 = __AsmFindLabelExport(&internal_636e9c0, 0x636eaa2);
extern "C" void const* const public_636eaac = __AsmFindLabelExport(&internal_636e9c0, 0x636eaac);
extern "C" void const* const public_636eab6 = __AsmFindLabelExport(&internal_636e9c0, 0x636eab6);
extern "C" void const* const public_636eaed = __AsmFindLabelExport(&internal_636e9c0, 0x636eaed);
