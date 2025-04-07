#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_471ba9 _public_471ba9
#define public_471bd8 _public_471bd8
#define public_471bf0 _public_471bf0
#define public_471c02 _public_471c02
#define public_471c25 _public_471c25
#define public_471c54 _public_471c54
#define public_471c65 _public_471c65
#define public_471c77 _public_471c77
#define public_471c8d _public_471c8d

PROC_DECLARE(0x471b90, internal_471b90, public_471b90);
extern "C" NAKED register_t __cdecl internal_471b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xFFFFFFF1
        cmp eax, 4
        push esi
        push edi
        ja public_471c8d
/*FIXUP jmp dword ptr ds : [eax*4+public_471c94] @0x471ba2*/
  JMPTB cmp eax, 0
  JMPTB je public_471c25
  JMPTB cmp eax, 1
  JMPTB je public_471c8d
  JMPTB cmp eax, 2
  JMPTB je public_471ba9
  JMPTB cmp eax, 3
  JMPTB je public_471c25
  JMPTB cmp eax, 4
  JMPTB je public_471ba9
  JMPTB int 3
        public_471ba9 : nop
        lea esi, ds:[ecx-0x32C]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x339]
        push ecx
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_471bd8
        mov edx, dword ptr ds : [esi+0x334]
        push 0
        push edx
        call eax
        add esp, 8
        public_471bd8 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_471c02
        lea esp, ss:[esp]
        public_471bf0 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_471bf0
        public_471c02 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_67eca0]
        push ecx
        call dword ptr ds : [public_5c72dc]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_471c25 : nop
        lea esi, ds:[ecx-0x32C]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x339]
        push edx
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_471c54
        mov ecx, dword ptr ds : [esi+0x334]
        push 1
        push ecx
        call eax
        add esp, 8
        public_471c54 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_471c77
        public_471c65 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_471c65
        public_471c77 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_471c8d : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x471b90)
        ASM_EXPORT_ENTRY_SINGLE(0x471ba9, public_471ba9)
    }
}

#undef public_471ba9
#undef public_471bd8
#undef public_471bf0
#undef public_471c02
#undef public_471c25
#undef public_471c54
#undef public_471c65
#undef public_471c77
#undef public_471c8d

#pragma init_seg(compiler)
extern "C" void const* const public_471ba9 = __AsmFindLabelExport(&internal_471b90, 0x471ba9);
