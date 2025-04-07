#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f37d30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f6eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad228);

#define public_6f0af63 _public_6f0af63
#define public_6f0af72 _public_6f0af72
#define public_6f0afac _public_6f0afac
#define public_6f0afbc _public_6f0afbc
#define public_6f0afd9 _public_6f0afd9
#define public_6f0aff5 _public_6f0aff5
#define public_6f0b043 _public_6f0b043
#define public_6f0b047 _public_6f0b047
#define public_6f0b050 _public_6f0b050
#define public_6f0b072 _public_6f0b072
#define public_6f0b0a0 _public_6f0b0a0
#define public_6f0b0ac _public_6f0b0ac
#define public_6f0b0db _public_6f0b0db
#define public_6f0b0fa _public_6f0b0fa
#define public_6f0b14d _public_6f0b14d
#define public_6f0b189 _public_6f0b189

PROC_DECLARE(0x6f0af40, internal_6f0af40, public_6f0af40);
extern "C" NAKED register_t __cdecl internal_6f0af40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fad228 @0x6f0af48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad228
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ebp, 2
        public_6f0af63 : nop
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, 5
        ja public_6f0af63
/*FIXUP jmp dword ptr ds : [eax*4+public_6f0b1c4] @0x6f0af6b*/
  JMPTB cmp eax, 0
  JMPTB je public_6f0b0a0
  JMPTB cmp eax, 1
  JMPTB je public_6f0af72
  JMPTB cmp eax, 2
  JMPTB je public_6f0b0ac
  JMPTB cmp eax, 3
  JMPTB je public_6f0b072
  JMPTB cmp eax, 4
  JMPTB je public_6f0b0fa
  JMPTB cmp eax, 5
  JMPTB je public_6f0aff5
  JMPTB int 3
        public_6f0af72 : nop
        mov al, byte ptr ss : [esp+0x13]
        xor edi, edi
        push edi
        push edi
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x34], al
        call public_6f93790
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], edi
        mov ecx, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x54], edi
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        jne public_6f0afac
        mov dword ptr ds : [esi+0x28], ebp
        xor bl, bl
        jmp public_6f0afbc
        public_6f0afac : nop
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        call public_6f57840
        mov bl, 1
        public_6f0afbc : nop
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x50], 1
        call public_6ed2a00
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        lea ecx, ss:[esp+0x2C]
        public_6f0afd9 : nop
        call public_6f15350
        test bl, bl
        je public_6f0af63
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        public_6f0aff5 : nop
        mov dl, byte ptr ss : [esp+0x13]
        push 0
        push 0
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], dl
        call public_6f93790
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x54], ebp
        call dword ptr ds : [eax+0x10]
        cmp eax, 1
        jne public_6f0b047
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_6f0b043
        mov ecx, dword ptr ds : [esi+8]
        push 0
        lea eax, ss:[esp+0x24]
        push eax
        call public_6f57840
        public_6f0b043 : nop
        mov bl, 1
        jmp public_6f0b050
        public_6f0b047 : nop
        mov dword ptr ds : [esi+0x28], 1
        xor bl, bl
        public_6f0b050 : nop
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x50], 3
        call public_6ed2a00
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        lea ecx, ss:[esp+0x20]
        jmp public_6f0afd9
        public_6f0b072 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+4]
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], edx
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6f6eca0
        add esp, 0x10
        test al, al
        mov ecx, esi
        jne public_6f0b0db
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x3C]
        public_6f0b0a0 : nop
        mov dword ptr ds : [esi+0x28], 1
        jmp public_6f0af63
        public_6f0b0ac : nop
        mov ecx, dword ptr ds : [esi+0x30]
        mov byte ptr ds : [esi+0x24], 0
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x48]
        pop edi
        mov dword ptr ds : [esi+0x28], 3
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        public_6f0b0db : nop
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x40]
        pop edi
        mov dword ptr ds : [esi+0x28], 4
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        public_6f0b0fa : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [eax+8]
        mov cl, byte ptr ss : [esp+0x13]
        xor edi, edi
        mov byte ptr ss : [esp+0x38], cl
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        lea edx, ss:[esp+0x38]
        push edx
        lea ecx, ds:[esi+0x18]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x58], 4
        call public_6f37d30
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, edi
        je public_6f0b14d
        mov edi, dword ptr ss : [esp+0x40]
        sub edi, eax
        sar edi, 2
        public_6f0b14d : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ss : [esp+0x3C]
        sar eax, 0xF
        mov ecx, dword ptr ds : [edx+eax*4]
        mov eax, dword ptr ds : [esi+0x2C]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, 1
        mov dword ptr ds : [eax+0x18], ecx
        mov bl, byte ptr ds : [edx+0x3C]
        test bl, bl
        jne public_6f0b189
        mov edx, dword ptr ds : [eax+0xC]
        neg edx
        mov dword ptr ds : [eax+0xC], edx
        public_6f0b189 : nop
        mov bl, byte ptr ds : [esi+0x25]
        test bl, bl
        setne al
        mov dword ptr ds : [esi+0x28], ecx
        mov byte ptr ds : [esi+0x24], 1
        mov esi, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6f0af40)
        ASM_EXPORT_ENTRY_FIRST(0x6f0af72, public_6f0af72)
        ASM_EXPORT_ENTRY(0x6f0aff5, public_6f0aff5)
        ASM_EXPORT_ENTRY(0x6f0b072, public_6f0b072)
        ASM_EXPORT_ENTRY(0x6f0b0a0, public_6f0b0a0)
        ASM_EXPORT_ENTRY(0x6f0b0ac, public_6f0b0ac)
        ASM_EXPORT_ENTRY_LAST(0x6f0b0fa, public_6f0b0fa)
    }
}

#undef public_6f0af63
#undef public_6f0af72
#undef public_6f0afac
#undef public_6f0afbc
#undef public_6f0afd9
#undef public_6f0aff5
#undef public_6f0b043
#undef public_6f0b047
#undef public_6f0b050
#undef public_6f0b072
#undef public_6f0b0a0
#undef public_6f0b0ac
#undef public_6f0b0db
#undef public_6f0b0fa
#undef public_6f0b14d
#undef public_6f0b189

#pragma init_seg(compiler)
extern "C" void const* const public_6f0af72 = __AsmFindLabelExport(&internal_6f0af40, 0x6f0af72);
extern "C" void const* const public_6f0aff5 = __AsmFindLabelExport(&internal_6f0af40, 0x6f0aff5);
extern "C" void const* const public_6f0b072 = __AsmFindLabelExport(&internal_6f0af40, 0x6f0b072);
extern "C" void const* const public_6f0b0a0 = __AsmFindLabelExport(&internal_6f0af40, 0x6f0b0a0);
extern "C" void const* const public_6f0b0ac = __AsmFindLabelExport(&internal_6f0af40, 0x6f0b0ac);
extern "C" void const* const public_6f0b0fa = __AsmFindLabelExport(&internal_6f0af40, 0x6f0b0fa);
