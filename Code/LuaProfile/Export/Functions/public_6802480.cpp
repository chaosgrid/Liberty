#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802480);

#define public_6802490 _public_6802490
#define public_68024bb _public_68024bb
#define public_68024c3 _public_68024c3
#define public_68024cb _public_68024cb
#define public_68024d2 _public_68024d2
#define public_68024d9 _public_68024d9
#define public_68024e1 _public_68024e1

PROC_DECLARE(0x6802480, internal_6802480, public_6802480);
extern "C" NAKED register_t __cdecl internal_6802480()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jne public_6802490
        mov eax, 0xFFFFFFFA
        pop esi
        ret 
        public_6802490 : nop
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        mov esi, dword ptr ds : [edx+eax-0x10]
        lea ecx, ds:[edx+eax-0x10]
        lea edx, ds:[esi+0xA]
        cmp edx, 0xA
        ja public_68024e1
/*FIXUP xor eax, eax @0x68024ac*/
/*FIXUP mov al, byte ptr ds : [edx+public_6802500] @0x68024ae*/
/*FIXUP jmp dword ptr ds : [eax*4+public_68024e8] @0x68024b4*/
  JMPTB cmp edx, 0
  JMPTB mov eax, 0
  JMPTB je public_68024d2
  JMPTB cmp edx, 1
  JMPTB mov eax, 1
  JMPTB je public_68024cb
  JMPTB cmp edx, 2
  JMPTB mov eax, 2
  JMPTB je public_68024d9
  JMPTB cmp edx, 3
  JMPTB mov eax, 2
  JMPTB je public_68024d9
  JMPTB cmp edx, 4
  JMPTB mov eax, 5
  JMPTB je public_68024e1
  JMPTB cmp edx, 5
  JMPTB mov eax, 5
  JMPTB je public_68024e1
  JMPTB cmp edx, 6
  JMPTB mov eax, 5
  JMPTB je public_68024e1
  JMPTB cmp edx, 7
  JMPTB mov eax, 3
  JMPTB je public_68024c3
  JMPTB cmp edx, 8
  JMPTB mov eax, 5
  JMPTB je public_68024e1
  JMPTB cmp edx, 9
  JMPTB mov eax, 5
  JMPTB je public_68024e1
  JMPTB cmp edx, 0xA
  JMPTB mov eax, 4
  JMPTB je public_68024bb
  JMPTB int 3
        public_68024bb : nop
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        pop esi
        ret 
        public_68024c3 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x14]
        pop esi
        ret 
        public_68024cb : nop
        mov eax, 0xFFFFFFFC
        pop esi
        ret 
        public_68024d2 : nop
        mov eax, 0xFFFFFFFB
        pop esi
        ret 
        public_68024d9 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x10]
        pop esi
        ret 
        public_68024e1 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802480)
        ASM_EXPORT_ENTRY_FIRST(0x68024bb, public_68024bb)
        ASM_EXPORT_ENTRY(0x68024c3, public_68024c3)
        ASM_EXPORT_ENTRY(0x68024cb, public_68024cb)
        ASM_EXPORT_ENTRY(0x68024d2, public_68024d2)
        ASM_EXPORT_ENTRY(0x68024d9, public_68024d9)
        ASM_EXPORT_ENTRY_LAST(0x68024e1, public_68024e1)
    }
}

#undef public_6802490
#undef public_68024bb
#undef public_68024c3
#undef public_68024cb
#undef public_68024d2
#undef public_68024d9
#undef public_68024e1

#pragma init_seg(compiler)
extern "C" void const* const public_68024bb = __AsmFindLabelExport(&internal_6802480, 0x68024bb);
extern "C" void const* const public_68024c3 = __AsmFindLabelExport(&internal_6802480, 0x68024c3);
extern "C" void const* const public_68024cb = __AsmFindLabelExport(&internal_6802480, 0x68024cb);
extern "C" void const* const public_68024d2 = __AsmFindLabelExport(&internal_6802480, 0x68024d2);
extern "C" void const* const public_68024d9 = __AsmFindLabelExport(&internal_6802480, 0x68024d9);
extern "C" void const* const public_68024e1 = __AsmFindLabelExport(&internal_6802480, 0x68024e1);
