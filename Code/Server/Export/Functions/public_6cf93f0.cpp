#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d00670);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf944e _public_6cf944e
#define public_6cf9476 _public_6cf9476
#define public_6cf94ac _public_6cf94ac
#define public_6cf94b9 _public_6cf94b9
#define public_6cf94d8 _public_6cf94d8
#define public_6cf94e5 _public_6cf94e5
#define public_6cf9509 _public_6cf9509
#define public_6cf9535 _public_6cf9535
#define public_6cf9552 _public_6cf9552
#define public_6cf955f _public_6cf955f
#define public_6cf9586 _public_6cf9586
#define public_6cf95b8 _public_6cf95b8
#define public_6cf95cb _public_6cf95cb

PROC_DECLARE(0x6cf93f0, internal_6cf93f0, public_6cf93f0);
extern "C" NAKED register_t __cdecl internal_6cf93f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x1C
        test ecx, 0x3FFFFFFF
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, 0xFFFFFFFB
        je public_6cf95cb
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        or ebp, 0xFFFFFFFF
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf95cb
        mov edi, dword ptr ss : [esp+0x30]
        test edi, edi
        je public_6cf95cb
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi]
        cmp eax, 3
        ja public_6cf95cb
/*FIXUP jmp dword ptr ds : [eax*4+public_6cf95d8] @0x6cf9447*/
  JMPTB cmp eax, 0
  JMPTB je public_6cf944e
  JMPTB cmp eax, 1
  JMPTB je public_6cf9476
  JMPTB cmp eax, 2
  JMPTB je public_6cf94b9
  JMPTB cmp eax, 3
  JMPTB je public_6cf9535
  JMPTB int 3
        public_6cf944e : nop
        cmp dword ptr ds : [esi+8], 1
        jne public_6cf95cb
        mov eax, dword ptr ds : [edi+4]
        push 0
        lea ecx, ds:[edi+4]
        push 1
        push 1
        call dword ptr ds : [eax+0x50]
        pop edi
        neg eax
        pop esi
        sbb eax, eax
        pop ebp
        and eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x1C
        ret 
        public_6cf9476 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6cf95cb
        push eax
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf94ac
        mov edx, dword ptr ds : [edi]
        add esi, 0x10
        push esi
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x120]
        pop edi
        neg eax
        pop esi
        sbb eax, eax
        pop ebp
        and eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x1C
        ret 
        public_6cf94ac : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFB
        pop ebx
        add esp, 0x1C
        ret 
        public_6cf94b9 : nop
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_6cf94d8
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6cf94d8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6cf94e5
        public_6cf94d8 : nop
        pop edi
        or ebp, 0xFFFFFFFF
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_6cf94e5 : nop
        push 0x1000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64024]
        test eax, eax
        jne public_6cf9509
        pop edi
        mov ebp, 0xFFFFFFFE
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_6cf9509 : nop
        xor edx, edx
        mov dx, word ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        push 0
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+0x14], edx
        xor edx, edx
        mov dl, byte ptr ds : [esi+4]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0x4C]
        pop edi
        xor ebp, ebp
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_6cf9535 : nop
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_6cf9552
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_6cf9552
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        je public_6cf955f
        public_6cf9552 : nop
        pop edi
        or ebp, 0xFFFFFFFF
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        public_6cf955f : nop
        push 1
        lea ecx, ss:[esp+0x20]
        xor ebp, ebp
        call dword ptr ds : [public_6d64204]
        lea ecx, ss:[esp+0x1C]
        lea ebx, ds:[esi+0xE4]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6d64200]
        mov esi, eax
        test esi, esi
        je public_6cf95cb
        public_6cf9586 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d644b8]
        mov cl, byte ptr ds : [eax+0x71]
        test cl, cl
        je public_6cf95b8
        mov eax, dword ptr ds : [edi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+8]
        push 0
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x38]
        movzx edx, byte ptr ds : [edx+4]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x4C]
        public_6cf95b8 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d64200]
        mov esi, eax
        test esi, esi
        jne public_6cf9586
        public_6cf95cb : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6cf93f0)
        ASM_EXPORT_ENTRY_FIRST(0x6cf944e, public_6cf944e)
        ASM_EXPORT_ENTRY(0x6cf9476, public_6cf9476)
        ASM_EXPORT_ENTRY(0x6cf94b9, public_6cf94b9)
        ASM_EXPORT_ENTRY_LAST(0x6cf9535, public_6cf9535)
    }
}

#undef public_6cf944e
#undef public_6cf9476
#undef public_6cf94ac
#undef public_6cf94b9
#undef public_6cf94d8
#undef public_6cf94e5
#undef public_6cf9509
#undef public_6cf9535
#undef public_6cf9552
#undef public_6cf955f
#undef public_6cf9586
#undef public_6cf95b8
#undef public_6cf95cb

#pragma init_seg(compiler)
extern "C" void const* const public_6cf944e = __AsmFindLabelExport(&internal_6cf93f0, 0x6cf944e);
extern "C" void const* const public_6cf9476 = __AsmFindLabelExport(&internal_6cf93f0, 0x6cf9476);
extern "C" void const* const public_6cf94b9 = __AsmFindLabelExport(&internal_6cf93f0, 0x6cf94b9);
extern "C" void const* const public_6cf9535 = __AsmFindLabelExport(&internal_6cf93f0, 0x6cf9535);
