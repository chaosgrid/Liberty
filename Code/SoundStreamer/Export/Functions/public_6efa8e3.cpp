#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46b0);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);
CLANG_FORWARD_PROC_SYMBOL(public_6efa8e3);
CLANG_FORWARD_PROC_SYMBOL(public_6efab07);

#define public_6efa937 _public_6efa937
#define public_6efa959 _public_6efa959
#define public_6efa96e _public_6efa96e
#define public_6efa995 _public_6efa995
#define public_6efa9ab _public_6efa9ab
#define public_6efa9f3 _public_6efa9f3
#define public_6efa9f7 _public_6efa9f7
#define public_6efaa06 _public_6efaa06
#define public_6efaa71 _public_6efaa71
#define public_6efaa73 _public_6efaa73
#define public_6efaa85 _public_6efaa85
#define public_6efaaa7 _public_6efaaa7
#define public_6efaaab _public_6efaaab
#define public_6efaab9 _public_6efaab9
#define public_6efaae0 _public_6efaae0
#define public_6efaae6 _public_6efaae6
#define public_6efab00 _public_6efab00

PROC_DECLARE(0x6efa8e3, internal_6efa8e3, public_6efa8e3);
extern "C" NAKED register_t __cdecl internal_6efa8e3()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc7d0 @0x6efa8e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7d0
/*FIXUP push offset _public_6efa070 @0x6efa8ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        xor edi, edi
        cmp dword ptr ds : [public_6f0129c], edi
        jne public_6efa959
        push edi
        push edi
        push 1
        pop ebx
        push ebx
/*FIXUP push offset public_6efc7b8 @0x6efa919*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7b8
        mov esi, 0x100
        push esi
        push edi
        call dword ptr ds : [public_6efc068]
        test eax, eax
        je public_6efa937
        mov dword ptr ds : [public_6f0129c], ebx
        jmp public_6efa959
        public_6efa937 : nop
        push edi
        push edi
        push ebx
/*FIXUP push offset public_6efc7b4 @0x6efa93a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7b4
        push esi
        push edi
        call dword ptr ds : [public_6efc06c]
        test eax, eax
        je public_6efaa71
        mov dword ptr ds : [public_6f0129c], 2
        public_6efa959 : nop
        cmp dword ptr ss : [ebp+0x14], edi
        jle public_6efa96e
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        call public_6efab07
        pop ecx
        pop ecx
        mov dword ptr ss : [ebp+0x14], eax
        public_6efa96e : nop
        mov eax, dword ptr ds : [public_6f0129c]
        cmp eax, 2
        jne public_6efa995
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6efc06c]
        jmp public_6efaa73
        public_6efa995 : nop
        cmp eax, 1
        jne public_6efaa71
        cmp dword ptr ss : [ebp+0x20], edi
        jne public_6efa9ab
        mov eax, dword ptr ds : [public_6f012b8]
        mov dword ptr ss : [ebp+0x20], eax
        public_6efa9ab : nop
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
        call dword ptr ds : [public_6efc078]
        mov ebx, eax
        mov dword ptr ss : [ebp-0x1C], ebx
        cmp ebx, edi
        je public_6efaa71
        mov dword ptr ss : [ebp-4], edi
        lea eax, ds:[ebx+ebx]
        add eax, 3
        and al, 0xFC
        call public_6ef46b0
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, esp
        mov dword ptr ss : [ebp-0x24], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6efaa06
        public_6efa9f3 : nop
        push 1
        pop eax
        ret 
        public_6efa9f7 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor edi, edi
        mov dword ptr ss : [ebp-0x24], edi
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ebx, dword ptr ss : [ebp-0x1C]
        public_6efaa06 : nop
        cmp dword ptr ss : [ebp-0x24], edi
        je public_6efaa71
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push 1
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_6efc078]
        test eax, eax
        je public_6efaa71
        push edi
        push edi
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6efc068]
        mov esi, eax
        mov dword ptr ss : [ebp-0x28], esi
        cmp esi, edi
        je public_6efaa71
        test byte ptr ss : [ebp+0xD], 4
        je public_6efaa85
        cmp dword ptr ss : [ebp+0x1C], edi
        je public_6efab00
        cmp esi, dword ptr ss : [ebp+0x1C]
        jg public_6efaa71
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push ebx
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6efc068]
        test eax, eax
        jne public_6efab00
        public_6efaa71 : nop
        xor eax, eax
        public_6efaa73 : nop
        lea esp, ss:[ebp-0x38]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6efaa85 : nop
        mov dword ptr ss : [ebp-4], 1
        lea eax, ds:[esi+esi]
        add eax, 3
        and al, 0xFC
        call public_6ef46b0
        mov dword ptr ss : [ebp-0x18], esp
        mov ebx, esp
        mov dword ptr ss : [ebp-0x20], ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6efaab9
        public_6efaaa7 : nop
        push 1
        pop eax
        ret 
        public_6efaaab : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor edi, edi
        xor ebx, ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, dword ptr ss : [ebp-0x28]
        public_6efaab9 : nop
        cmp ebx, edi
        je public_6efaa71
        push esi
        push ebx
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6efc068]
        test eax, eax
        je public_6efaa71
        cmp dword ptr ss : [ebp+0x1C], edi
        push edi
        push edi
        jne public_6efaae0
        push edi
        push edi
        jmp public_6efaae6
        public_6efaae0 : nop
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        public_6efaae6 : nop
        push esi
        push ebx
        push 0x220
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_6efc0e4]
        mov esi, eax
        cmp esi, edi
        je public_6efaa71
        public_6efab00 : nop
        mov eax, esi
        jmp public_6efaa73
        UNREACHABLE_TRAP(0x6efa8e3)
        ASM_EXPORT_ENTRY_FIRST(0x6efa9f3, public_6efa9f3)
        ASM_EXPORT_ENTRY(0x6efa9f7, public_6efa9f7)
        ASM_EXPORT_ENTRY(0x6efaaa7, public_6efaaa7)
        ASM_EXPORT_ENTRY_LAST(0x6efaaab, public_6efaaab)
    }
}

#undef public_6efa937
#undef public_6efa959
#undef public_6efa96e
#undef public_6efa995
#undef public_6efa9ab
#undef public_6efa9f3
#undef public_6efa9f7
#undef public_6efaa06
#undef public_6efaa71
#undef public_6efaa73
#undef public_6efaa85
#undef public_6efaaa7
#undef public_6efaaab
#undef public_6efaab9
#undef public_6efaae0
#undef public_6efaae6
#undef public_6efab00

#pragma init_seg(compiler)
extern "C" void const* const public_6efa9f3 = __AsmFindLabelExport(&internal_6efa8e3, 0x6efa9f3);
extern "C" void const* const public_6efa9f7 = __AsmFindLabelExport(&internal_6efa8e3, 0x6efa9f7);
extern "C" void const* const public_6efaaa7 = __AsmFindLabelExport(&internal_6efa8e3, 0x6efaaa7);
extern "C" void const* const public_6efaaab = __AsmFindLabelExport(&internal_6efa8e3, 0x6efaaab);
