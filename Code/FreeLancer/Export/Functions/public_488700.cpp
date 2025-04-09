#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);

#define public_488719 _public_488719
#define public_488734 _public_488734
#define public_488745 _public_488745
#define public_488759 _public_488759
#define public_488774 _public_488774
#define public_488785 _public_488785
#define public_488797 _public_488797
#define public_4887ad _public_4887ad

PROC_DECLARE(0x488700, internal_488700, public_488700);
extern "C" NAKED register_t __cdecl internal_488700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xFFFFFFF1
        cmp eax, 4
        push esi
        push edi
        ja public_4887ad
/*FIXUP jmp dword ptr ds : [eax*4+public_4887b4] @0x488712*/
  JMPTB cmp eax, 0
  JMPTB je public_488719
  JMPTB cmp eax, 1
  JMPTB je public_4887ad
  JMPTB cmp eax, 2
  JMPTB je public_488759
  JMPTB cmp eax, 3
  JMPTB je public_488719
  JMPTB cmp eax, 4
  JMPTB je public_488759
  JMPTB int 3
        public_488719 : nop
        lea esi, ds:[ecx-0x32C]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_488734
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3006
        call dword ptr ds : [edx+0x5C]
        public_488734 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_488797
        public_488745 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_488745
        jmp public_488797
        public_488759 : nop
        lea esi, ds:[ecx-0x32C]
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_488774
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x3006
        call dword ptr ds : [edx+0x5C]
        public_488774 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_488797
        public_488785 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_488785
        public_488797 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_4887ad : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x488700)
        ASM_EXPORT_ENTRY_SINGLE(0x488759, public_488759)
    }
}

#undef public_488719
#undef public_488734
#undef public_488745
#undef public_488759
#undef public_488774
#undef public_488785
#undef public_488797
#undef public_4887ad

#pragma init_seg(compiler)
extern "C" void const* const public_488759 = __AsmFindLabelExport(&internal_488700, 0x488759);
