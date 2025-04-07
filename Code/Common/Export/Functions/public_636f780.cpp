#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636f780);

#define public_636f7a9 _public_636f7a9
#define public_636f7bc _public_636f7bc
#define public_636f7d6 _public_636f7d6
#define public_636f7f5 _public_636f7f5
#define public_636f7fa _public_636f7fa
#define public_636f7ff _public_636f7ff
#define public_636f805 _public_636f805
#define public_636f808 _public_636f808
#define public_636f829 _public_636f829
#define public_636f834 _public_636f834
#define public_636f85b _public_636f85b

PROC_DECLARE(0x636f780, internal_636f780, public_636f780);
extern "C" NAKED register_t __cdecl internal_636f780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        sub edx, eax
        lea esi, ds:[ecx+eax*4+4]
        lea eax, ds:[edx-1]
        cmp eax, 5
        push edi
        ja public_636f829
/*FIXUP jmp dword ptr ds : [eax*4+public_636f870] @0x636f7a2*/
  JMPTB cmp eax, 0
  JMPTB je public_636f7a9
  JMPTB cmp eax, 1
  JMPTB je public_636f7bc
  JMPTB cmp eax, 2
  JMPTB je public_636f7d6
  JMPTB cmp eax, 3
  JMPTB je public_636f7f5
  JMPTB cmp eax, 4
  JMPTB je public_636f7fa
  JMPTB cmp eax, 5
  JMPTB je public_636f7ff
  JMPTB int 3
        public_636f7a9 : nop
        mov eax, dword ptr ds : [esi]
        sub eax, dword ptr ss : [esp+0x24]
        xor edx, edx
        div dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov eax, edx
        ret 
        public_636f7bc : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi]
        sub eax, edx
        add eax, ecx
        xor edx, edx
        div dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov eax, edx
        ret 
        public_636f7d6 : nop
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi]
        add eax, edi
        sub eax, edx
        add eax, ecx
        xor edx, edx
        div dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov eax, edx
        ret 
        public_636f7f5 : nop
        mov eax, dword ptr ds : [esi+0xC]
        jmp public_636f808
        public_636f7fa : nop
        mov eax, dword ptr ds : [esi+0x10]
        jmp public_636f805
        public_636f7ff : nop
        mov eax, dword ptr ds : [esi+0x14]
        add eax, dword ptr ds : [esi+0x10]
        public_636f805 : nop
        add eax, dword ptr ds : [esi+0xC]
        public_636f808 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi]
        add eax, ebx
        add eax, edi
        sub eax, edx
        add eax, ecx
        xor edx, edx
        div dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov eax, edx
        ret 
        public_636f829 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        xor eax, eax
        mov edi, 3
        public_636f834 : nop
        mov edx, dword ptr ds : [esi]
        add esi, 4
        cmp edx, ebx
        je public_636f85b
        mov ecx, 0x20
        sub ecx, edi
        mov ebp, edx
        shr ebp, cl
        mov ecx, edi
        shl edx, cl
        add edi, 3
        add ebp, edx
        xor eax, ebp
        cmp edi, 0x20
        jl public_636f85b
        sub edi, 0x20
        public_636f85b : nop
        cmp dword ptr ds : [esi], 0
        jne public_636f834
        xor edx, edx
        div dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x636f780)
        ASM_EXPORT_ENTRY_FIRST(0x636f7a9, public_636f7a9)
        ASM_EXPORT_ENTRY(0x636f7bc, public_636f7bc)
        ASM_EXPORT_ENTRY(0x636f7d6, public_636f7d6)
        ASM_EXPORT_ENTRY(0x636f7f5, public_636f7f5)
        ASM_EXPORT_ENTRY(0x636f7fa, public_636f7fa)
        ASM_EXPORT_ENTRY_LAST(0x636f7ff, public_636f7ff)
    }
}

#undef public_636f7a9
#undef public_636f7bc
#undef public_636f7d6
#undef public_636f7f5
#undef public_636f7fa
#undef public_636f7ff
#undef public_636f805
#undef public_636f808
#undef public_636f829
#undef public_636f834
#undef public_636f85b

#pragma init_seg(compiler)
extern "C" void const* const public_636f7a9 = __AsmFindLabelExport(&internal_636f780, 0x636f7a9);
extern "C" void const* const public_636f7bc = __AsmFindLabelExport(&internal_636f780, 0x636f7bc);
extern "C" void const* const public_636f7d6 = __AsmFindLabelExport(&internal_636f780, 0x636f7d6);
extern "C" void const* const public_636f7f5 = __AsmFindLabelExport(&internal_636f780, 0x636f7f5);
extern "C" void const* const public_636f7fa = __AsmFindLabelExport(&internal_636f780, 0x636f7fa);
extern "C" void const* const public_636f7ff = __AsmFindLabelExport(&internal_636f780, 0x636f7ff);
