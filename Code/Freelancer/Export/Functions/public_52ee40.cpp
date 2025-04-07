#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_531b20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_52ee5b _public_52ee5b
#define public_52ee9c _public_52ee9c
#define public_52ee9e _public_52ee9e
#define public_52eec4 _public_52eec4
#define public_52eee6 _public_52eee6
#define public_52ef09 _public_52ef09
#define public_52ef29 _public_52ef29
#define public_52ef46 _public_52ef46
#define public_52ef4b _public_52ef4b
#define public_52ef63 _public_52ef63

PROC_DECLARE(0x52ee40, internal_52ee40, public_52ee40);
extern "C" NAKED register_t __cdecl internal_52ee40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        lea eax, ds:[ebx-0xA]
        cmp eax, 5
        push esi
        mov esi, ecx
        ja public_52ef63
/*FIXUP jmp dword ptr ds : [eax*4+public_52ef78] @0x52ee54*/
  JMPTB cmp eax, 0
  JMPTB je public_52ee5b
  JMPTB cmp eax, 1
  JMPTB je public_52eee6
  JMPTB cmp eax, 2
  JMPTB je public_52ef09
  JMPTB cmp eax, 3
  JMPTB je public_52ef63
  JMPTB cmp eax, 4
  JMPTB je public_52ef63
  JMPTB cmp eax, 5
  JMPTB je public_52ef29
  JMPTB int 3
        public_52ee5b : nop
        push edi
        mov edi, dword ptr ds : [esi+8]
        call public_54baf0
        cmp edi, eax
        jne public_52eec4
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x158]
        test al, al
        jne public_52eec4
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_52ee9c
        add eax, 0xC
        test eax, eax
        je public_52ee9c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52ee9c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_52ee9e
        public_52ee9c : nop
        xor eax, eax
        public_52ee9e : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_52eec4
        mov edx, dword ptr ds : [public_675480]
        push 0
        push edx
        call public_489e80
        add esp, 8
        public_52eec4 : nop
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[esi+0x10]
        push eax
        add ecx, 0x28
        call public_4fcef0
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        push ecx
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        ret 8
        public_52eee6 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_52ef63
        mov edx, dword ptr ds : [ecx]
        push 0x3F800000
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        ret 8
        public_52ef09 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_52ef63
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        ret 8
        public_52ef29 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_52ef46
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_52ef46
        mov eax, dword ptr ds : [eax+0xB4]
        jmp public_52ef4b
        public_52ef46 : nop
        call public_54bb00
        public_52ef4b : nop
        mov edx, dword ptr ds : [public_673344]
        cmp eax, edx
        jne public_52ef63
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 0
        call dword ptr ds : [eax+0x54]
        public_52ef63 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push ebx
        mov ecx, esi
        call public_531b20
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x52ee40)
        ASM_EXPORT_ENTRY_SINGLE(0x52ef29, public_52ef29)
    }
}

#undef public_52ee5b
#undef public_52ee9c
#undef public_52ee9e
#undef public_52eec4
#undef public_52eee6
#undef public_52ef09
#undef public_52ef29
#undef public_52ef46
#undef public_52ef4b
#undef public_52ef63

#pragma init_seg(compiler)
extern "C" void const* const public_52ef29 = __AsmFindLabelExport(&internal_52ee40, 0x52ef29);
