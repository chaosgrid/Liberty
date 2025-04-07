#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);
CLANG_FORWARD_PROC_SYMBOL(public_65de5a0);
CLANG_FORWARD_PROC_SYMBOL(public_65defd3);
CLANG_FORWARD_PROC_SYMBOL(public_65df1f7);

#define public_65df027 _public_65df027
#define public_65df049 _public_65df049
#define public_65df05e _public_65df05e
#define public_65df085 _public_65df085
#define public_65df09b _public_65df09b
#define public_65df0e3 _public_65df0e3
#define public_65df0e7 _public_65df0e7
#define public_65df0f6 _public_65df0f6
#define public_65df161 _public_65df161
#define public_65df163 _public_65df163
#define public_65df175 _public_65df175
#define public_65df197 _public_65df197
#define public_65df19b _public_65df19b
#define public_65df1a9 _public_65df1a9
#define public_65df1d0 _public_65df1d0
#define public_65df1d6 _public_65df1d6
#define public_65df1f0 _public_65df1f0

PROC_DECLARE(0x65defd3, internal_65defd3, public_65defd3);
extern "C" NAKED register_t __cdecl internal_65defd3()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1b28 @0x65defd8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b28
/*FIXUP push offset _public_65dcf2c @0x65defdd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        xor edi, edi
        cmp dword ptr ds : [public_65e6434], edi
        jne public_65df049
        push edi
        push edi
        push 1
        pop ebx
        push ebx
/*FIXUP push offset public_65e1b10 @0x65df009*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b10
        mov esi, 0x100
        push esi
        push edi
        call dword ptr ds : [public_65e102c]
        test eax, eax
        je public_65df027
        mov dword ptr ds : [public_65e6434], ebx
        jmp public_65df049
        public_65df027 : nop
        push edi
        push edi
        push ebx
/*FIXUP push offset public_65e1b0c @0x65df02a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b0c
        push esi
        push edi
        call dword ptr ds : [public_65e1030]
        test eax, eax
        je public_65df161
        mov dword ptr ds : [public_65e6434], 2
        public_65df049 : nop
        cmp dword ptr ss : [ebp+0x14], edi
        jle public_65df05e
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        call public_65df1f7
        pop ecx
        pop ecx
        mov dword ptr ss : [ebp+0x14], eax
        public_65df05e : nop
        mov eax, dword ptr ds : [public_65e6434]
        cmp eax, 2
        jne public_65df085
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_65e1030]
        jmp public_65df163
        public_65df085 : nop
        cmp eax, 1
        jne public_65df161
        cmp dword ptr ss : [ebp+0x20], edi
        jne public_65df09b
        mov eax, dword ptr ds : [public_65e63f8]
        mov dword ptr ss : [ebp+0x20], eax
        public_65df09b : nop
        push edi
        push edi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0x24]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_65e10e8]
        mov ebx, eax
        mov dword ptr ss : [ebp-0x1C], ebx
        cmp ebx, edi
        je public_65df161
        mov dword ptr ss : [ebp-4], edi
        lea eax, ds:[ebx+ebx]
        add eax, 3
        and al, 0xFC
        call public_65de5a0
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, esp
        mov dword ptr ss : [ebp-0x24], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_65df0f6
        public_65df0e3 : nop
        push 1
        pop eax
        ret 
        public_65df0e7 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor edi, edi
        mov dword ptr ss : [ebp-0x24], edi
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ebx, dword ptr ss : [ebp-0x1C]
        public_65df0f6 : nop
        cmp dword ptr ss : [ebp-0x24], edi
        je public_65df161
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push 1
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_65e10e8]
        test eax, eax
        je public_65df161
        push edi
        push edi
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_65e102c]
        mov esi, eax
        mov dword ptr ss : [ebp-0x28], esi
        cmp esi, edi
        je public_65df161
        test byte ptr ss : [ebp+0xD], 4
        je public_65df175
        cmp dword ptr ss : [ebp+0x1C], edi
        je public_65df1f0
        cmp esi, dword ptr ss : [ebp+0x1C]
        jg public_65df161
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_65e102c]
        test eax, eax
        jne public_65df1f0
        public_65df161 : nop
        xor eax, eax
        public_65df163 : nop
        lea esp, ss:[ebp-0x38]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_65df175 : nop
        mov dword ptr ss : [ebp-4], 1
        lea eax, ds:[esi+esi]
        add eax, 3
        and al, 0xFC
        call public_65de5a0
        mov dword ptr ss : [ebp-0x18], esp
        mov ebx, esp
        mov dword ptr ss : [ebp-0x20], ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_65df1a9
        public_65df197 : nop
        push 1
        pop eax
        ret 
        public_65df19b : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor edi, edi
        xor ebx, ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, dword ptr ss : [ebp-0x28]
        public_65df1a9 : nop
        cmp ebx, edi
        je public_65df161
        push esi
        push ebx
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_65e102c]
        test eax, eax
        je public_65df161
        cmp dword ptr ss : [ebp+0x1C], edi
        push edi
        push edi
        jne public_65df1d0
        push edi
        push edi
        jmp public_65df1d6
        public_65df1d0 : nop
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        public_65df1d6 : nop
        push esi
        push ebx
        push 0x220
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_65e1094]
        mov esi, eax
        cmp esi, edi
        je public_65df161
        public_65df1f0 : nop
        mov eax, esi
        jmp public_65df163
        UNREACHABLE_TRAP(0x65defd3)
        ASM_EXPORT_ENTRY_FIRST(0x65df0e3, public_65df0e3)
        ASM_EXPORT_ENTRY(0x65df0e7, public_65df0e7)
        ASM_EXPORT_ENTRY(0x65df197, public_65df197)
        ASM_EXPORT_ENTRY_LAST(0x65df19b, public_65df19b)
    }
}

#undef public_65df027
#undef public_65df049
#undef public_65df05e
#undef public_65df085
#undef public_65df09b
#undef public_65df0e3
#undef public_65df0e7
#undef public_65df0f6
#undef public_65df161
#undef public_65df163
#undef public_65df175
#undef public_65df197
#undef public_65df19b
#undef public_65df1a9
#undef public_65df1d0
#undef public_65df1d6
#undef public_65df1f0

#pragma init_seg(compiler)
extern "C" void const* const public_65df0e3 = __AsmFindLabelExport(&internal_65defd3, 0x65df0e3);
extern "C" void const* const public_65df0e7 = __AsmFindLabelExport(&internal_65defd3, 0x65df0e7);
extern "C" void const* const public_65df197 = __AsmFindLabelExport(&internal_65defd3, 0x65df197);
extern "C" void const* const public_65df19b = __AsmFindLabelExport(&internal_65defd3, 0x65df19b);
