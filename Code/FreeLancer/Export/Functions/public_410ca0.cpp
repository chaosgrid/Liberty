#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ca0);

#define public_410d1b _public_410d1b
#define public_410d1e _public_410d1e
#define public_410d26 _public_410d26
#define public_410d2c _public_410d2c
#define public_410d52 _public_410d52

PROC_DECLARE(0x410ca0, internal_410ca0, public_410ca0);
extern "C" NAKED register_t __cdecl internal_410ca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xC
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov ebp, 0x3F800000
        mov dword ptr ds : [esi+0x94], ebp
        mov dword ptr ds : [esi+0x84], ebp
        mov dword ptr ds : [esi+0x74], ebp
        mov al, bl
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0x9C], ebx
        mov dword ptr ds : [esi+0x98], ebx
        and al, 0xFE
        mov dword ptr ds : [esi+0xB4], ebx
        mov byte ptr ds : [esi+0xB4], al
        lea eax, ds:[ecx+2]
        or edx, 0xFFFFFFFF
        cmp eax, 5
        push edi
        mov dword ptr ds : [esi], offset public_5c89d4
        ja public_410d26
/*FIXUP jmp dword ptr ds : [eax*4+public_410db8] @0x410d14*/
  JMPTB cmp eax, 0
  JMPTB je public_410d1e
  JMPTB cmp eax, 1
  JMPTB je public_410d26
  JMPTB cmp eax, 2
  JMPTB je public_410d26
  JMPTB cmp eax, 3
  JMPTB je public_410d1b
  JMPTB cmp eax, 4
  JMPTB je public_410d1b
  JMPTB cmp eax, 5
  JMPTB je public_410d1b
  JMPTB int 3
        public_410d1b : nop
        mov dword ptr ds : [esi+0xC], ecx
        public_410d1e : nop
        mov dword ptr ds : [esi+0xB0], ecx
        jmp public_410d2c
        public_410d26 : nop
        mov dword ptr ds : [esi+0xB0], edx
        public_410d2c : nop
        cmp dword ptr ds : [public_610588], edx
        jne public_410d52
        mov eax, dword ptr ds : [public_5c6de0]
/*FIXUP push offset public_610588 @0x410d39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610588
        mov dword ptr ds : [public_610588], 1
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x18]
        public_410d52 : nop
        xor eax, eax
        lea edi, ds:[esi+0xC]
        mov ecx, 0x1A
        rep stosd
        lea edx, ds:[esi+0xA4]
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        pop edi
        mov dword ptr ds : [esi+0x64], ebp
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x410ca0)
        ASM_EXPORT_ENTRY_SINGLE(0x410d1b, public_410d1b)
    }
}

#undef public_410d1b
#undef public_410d1e
#undef public_410d26
#undef public_410d2c
#undef public_410d52

#pragma init_seg(compiler)
extern "C" void const* const public_410d1b = __AsmFindLabelExport(&internal_410ca0, 0x410d1b);
