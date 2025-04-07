#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fd230);
CLANG_FORWARD_PROC_SYMBOL(public_533d10);
CLANG_FORWARD_PROC_SYMBOL(public_534730);

#define public_53474c _public_53474c
#define public_53478e _public_53478e
#define public_5347b2 _public_5347b2
#define public_5347d2 _public_5347d2
#define public_534811 _public_534811
#define public_53482f _public_53482f
#define public_534847 _public_534847

PROC_DECLARE(0x534730, internal_534730, public_534730);
extern "C" NAKED register_t __cdecl internal_534730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        add eax, 0xFFFFFFFB
        cmp eax, 3
        push edi
        mov esi, ecx
        ja public_534847
/*FIXUP jmp dword ptr ds : [eax*4+public_534850] @0x534745*/
  JMPTB cmp eax, 0
  JMPTB je public_53474c
  JMPTB cmp eax, 1
  JMPTB je public_5347b2
  JMPTB cmp eax, 2
  JMPTB je public_5347d2
  JMPTB cmp eax, 3
  JMPTB je public_53482f
  JMPTB int 3
        public_53474c : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, edi
        call dword ptr ds : [public_5c6990]
        mov edx, dword ptr ds : [esi-0xAC]
        add esi, 0xFFFFFF54
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0x154]
        test al, al
        mov ecx, edi
        je public_53478e
        push 0
        call dword ptr ds : [public_5c6930]
        add eax, 0x74
        push eax
        push ebx
        mov ecx, esi
        call public_533d10
        pop edi
        pop esi
        pop ebx
        ret 8
        public_53478e : nop
        push ebp
        mov ebp, dword ptr ds : [public_5c6930]
        call ebp
        add eax, 0x70
        push eax
        mov ecx, edi
        call ebp
        add eax, 0x74
        push eax
        push ebx
        mov ecx, esi
        call public_533d10
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret 8
        public_5347b2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x84]
        lea ecx, ds:[esi-0x84]
        push eax
        call public_4fd230
        pop edi
        pop esi
        pop ebx
        ret 8
        public_5347d2 : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, edi
        call dword ptr ds : [public_5c698c]
        mov edx, dword ptr ds : [esi-0xAC]
        add esi, 0xFFFFFF54
        mov ecx, esi
        mov ebx, eax
        call dword ptr ds : [edx+0x154]
        test al, al
        mov ecx, edi
        je public_534811
        push 0
        call dword ptr ds : [public_5c6988]
        push eax
        push ebx
        mov ecx, esi
        call public_533d10
        pop edi
        pop esi
        pop ebx
        ret 8
        public_534811 : nop
        call dword ptr ds : [public_5c6984]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6988]
        push eax
        push ebx
        mov ecx, esi
        call public_533d10
        pop edi
        pop esi
        pop ebx
        ret 8
        public_53482f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        call dword ptr ds : [public_5c6580]
        lea ecx, ds:[esi-0x84]
        push eax
        call public_4fd230
        public_534847 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x534730)
        ASM_EXPORT_ENTRY_SINGLE(0x53482f, public_53482f)
    }
}

#undef public_53474c
#undef public_53478e
#undef public_5347b2
#undef public_5347d2
#undef public_534811
#undef public_53482f
#undef public_534847

#pragma init_seg(compiler)
extern "C" void const* const public_53482f = __AsmFindLabelExport(&internal_534730, 0x53482f);
