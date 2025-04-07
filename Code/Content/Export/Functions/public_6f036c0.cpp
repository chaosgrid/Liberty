#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f036c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_PROC_SYMBOL(public_6facc30);

#define public_6f036fb _public_6f036fb
#define public_6f0370b _public_6f0370b
#define public_6f03719 _public_6f03719
#define public_6f03728 _public_6f03728
#define public_6f0373a _public_6f0373a
#define public_6f03740 _public_6f03740
#define public_6f0374d _public_6f0374d
#define public_6f03769 _public_6f03769
#define public_6f03786 _public_6f03786
#define public_6f0378f _public_6f0378f
#define public_6f037aa _public_6f037aa

PROC_DECLARE(0x6f036c0, internal_6f036c0, public_6f036c0);
extern "C" NAKED register_t __cdecl internal_6f036c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_6facc30 @0x6f036c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6facc30
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, eax
        or esi, 0x1F
        cmp esi, 0xFFFFFFFD
        push edi
        mov ebx, ecx
        mov dword ptr ss : [ebp-0x10], esp
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_6f036fb
        mov dword ptr ss : [ebp-0x14], eax
        mov esi, eax
        public_6f036fb : nop
        lea eax, ds:[esi+2]
        test eax, eax
        mov dword ptr ss : [ebp-4], 0
        jge public_6f0370b
        xor eax, eax
        public_6f0370b : nop
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_6f03740
        public_6f03719 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], eax
        add eax, 2
        test eax, eax
        jge public_6f03728
        xor eax, eax
        public_6f03728 : nop
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_6f0373a @0x6f03734*/
  FIXUP lea eax, ds : [public_6f0373a]
        ret 
        public_6f0373a : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x14]
        public_6f03740 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_6f03769
        cmp eax, esi
        jbe public_6f0374d
        mov eax, esi
        public_6f0374d : nop
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        mov edx, ecx
        shr ecx, 2
        lea edi, ds:[eax+1]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [ebp-0x14]
        public_6f03769 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov edi, dword ptr ds : [ebx+8]
        je public_6f0378f
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f03786
        cmp cl, 0xFF
        je public_6f03786
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f0378f
        public_6f03786 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f0378f : nop
        mov eax, dword ptr ss : [ebp+8]
        inc eax
        cmp edi, esi
        mov dword ptr ds : [ebx+8], 0
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [ebx+0xC], esi
        ja public_6f037aa
        mov esi, edi
        public_6f037aa : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], esi
        mov byte ptr ds : [esi+ecx], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f036c0)
        ASM_EXPORT_ENTRY_FIRST(0x6f03719, public_6f03719)
        ASM_EXPORT_ENTRY_LAST(0x6f0373a, public_6f0373a)
    }
}

#undef public_6f036fb
#undef public_6f0370b
#undef public_6f03719
#undef public_6f03728
#undef public_6f0373a
#undef public_6f03740
#undef public_6f0374d
#undef public_6f03769
#undef public_6f03786
#undef public_6f0378f
#undef public_6f037aa

#pragma init_seg(compiler)
extern "C" void const* const public_6f03719 = __AsmFindLabelExport(&internal_6f036c0, 0x6f03719);
extern "C" void const* const public_6f0373a = __AsmFindLabelExport(&internal_6f036c0, 0x6f0373a);
