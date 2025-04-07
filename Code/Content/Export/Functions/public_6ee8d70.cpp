#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ee2000);
CLANG_FORWARD_PROC_SYMBOL(public_6ee2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6ee4cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee55f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6e60);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7b00);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8880);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb920);
CLANG_FORWARD_PROC_SYMBOL(public_6eebd10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabcc8);

#define public_6ee8db9 _public_6ee8db9
#define public_6ee8e15 _public_6ee8e15
#define public_6ee8e6f _public_6ee8e6f
#define public_6ee8ec2 _public_6ee8ec2
#define public_6ee8ee6 _public_6ee8ee6
#define public_6ee8f0a _public_6ee8f0a
#define public_6ee8f0c _public_6ee8f0c
#define public_6ee8f48 _public_6ee8f48
#define public_6ee8f64 _public_6ee8f64
#define public_6ee8f76 _public_6ee8f76
#define public_6ee8f9a _public_6ee8f9a
#define public_6ee8f9c _public_6ee8f9c
#define public_6ee8fd4 _public_6ee8fd4
#define public_6ee900c _public_6ee900c
#define public_6ee9018 _public_6ee9018
#define public_6ee903e _public_6ee903e
#define public_6ee9040 _public_6ee9040
#define public_6ee905c _public_6ee905c
#define public_6ee905e _public_6ee905e
#define public_6ee9062 _public_6ee9062
#define public_6ee9068 _public_6ee9068
#define public_6ee907d _public_6ee907d
#define public_6ee90a3 _public_6ee90a3
#define public_6ee90a5 _public_6ee90a5
#define public_6ee90bf _public_6ee90bf
#define public_6ee90d7 _public_6ee90d7

PROC_DECLARE(0x6ee8d70, internal_6ee8d70, public_6ee8d70);
extern "C" NAKED register_t __cdecl internal_6ee8d70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fabcc8 @0x6ee8d72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabcc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+4]
        test al, al
        je public_6ee9062
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        dec eax
        cmp eax, 0x18
        ja public_6ee9062
/*FIXUP movzx ecx, byte ptr ds : [eax+public_6ee9124] @0x6ee8dab*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ee9100] @0x6ee8db2*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6ee8e6f
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_6ee8db9
  JMPTB cmp eax, 2
  JMPTB mov ecx, 2
  JMPTB je public_6ee8e15
  JMPTB cmp eax, 3
  JMPTB mov ecx, 8
  JMPTB je public_6ee9062
  JMPTB cmp eax, 4
  JMPTB mov ecx, 3
  JMPTB je public_6ee8ec2
  JMPTB cmp eax, 5
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 6
  JMPTB mov ecx, 5
  JMPTB je public_6ee8f76
  JMPTB cmp eax, 7
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 8
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 9
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 4
  JMPTB je public_6ee8ee6
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 6
  JMPTB je public_6ee9018
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 7
  JMPTB je public_6ee907d
  JMPTB int 3
        public_6ee8db9 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
        push 2
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6ee9062
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
        push 2
        call public_6eeb920
        push 0x34
        call public_6fa912a
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_6ee8f0a
        push esi
        mov ecx, eax
        call public_6ee6e60
        jmp public_6ee8f0c
        public_6ee8e15 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push edx
        push eax
        push 3
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6ee9062
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push 0
        push ecx
        push edx
        push 3
        call public_6eeb920
        push 0x2C
        call public_6fa912a
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 1
        je public_6ee8f0a
        push esi
        mov ecx, eax
        call public_6ee8880
        jmp public_6ee8f0c
        public_6ee8e6f : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push edx
        push eax
        push 1
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6ee9062
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push 0
        push ecx
        push edx
        push 1
        call public_6eeb920
        push 0x24
        call public_6fa912a
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 2
        je public_6ee8f0a
        push esi
        mov ecx, eax
        call public_6ee2000
        jmp public_6ee8f0c
        public_6ee8ec2 : nop
        push 0x24
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 3
        je public_6ee8f0a
        push esi
        mov ecx, eax
        call public_6ee4cd0
        jmp public_6ee8f0c
        public_6ee8ee6 : nop
        push 0x1C
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 4
        je public_6ee8f0a
        push esi
        mov ecx, eax
        call public_6ee2c20
        jmp public_6ee8f0c
        public_6ee8f0a : nop
        xor eax, eax
        public_6ee8f0c : nop
        mov dword ptr ss : [esp+0x24], eax
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [edx+8]
        test al, al
        mov ecx, dword ptr ss : [esp+0x24]
        je public_6ee900c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ee8f48
        mov ebx, eax
        public_6ee8f48 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x24]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        add esp, 8
        public_6ee8f64 : nop
        mov eax, dword ptr ds : [edi+0x10]
        fld dword ptr ds : [public_6fb5810]
        inc eax
        mov dword ptr ds : [edi+0x10], eax
        jmp public_6ee9068
        public_6ee8f76 : nop
        push 0x1C
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 5
        je public_6ee8f9a
        push esi
        mov ecx, eax
        call public_6ee2c20
        jmp public_6ee8f9c
        public_6ee8f9a : nop
        xor eax, eax
        public_6ee8f9c : nop
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [edx+8]
        test al, al
        mov ecx, dword ptr ss : [esp+0x10]
        je public_6ee900c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ee8fd4
        mov ebx, eax
        public_6ee8fd4 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb6740
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        jmp public_6ee9068
        public_6ee900c : nop
        test ecx, ecx
        je public_6ee9062
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        jmp public_6ee9062
        public_6ee9018 : nop
        push 0x24
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 6
        je public_6ee903e
        push esi
        mov ecx, eax
        call public_6ee55f0
        mov ebx, eax
        jmp public_6ee9040
        public_6ee903e : nop
        xor ebx, ebx
        public_6ee9040 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [edx+8]
        test al, al
        mov ecx, ebx
        je public_6ee905c
        mov eax, dword ptr ds : [ebx]
        call dword ptr ds : [eax+4]
        jmp public_6ee90bf
        public_6ee905c : nop
        mov edx, dword ptr ds : [ebx]
        public_6ee905e : nop
        push 1
        call dword ptr ds : [edx]
        public_6ee9062 : nop
        fld dword ptr ds : [public_6fb444c]
        public_6ee9068 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        public_6ee907d : nop
        push 0x24
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [esp+0x24], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 7
        je public_6ee90a3
        push esi
        mov ecx, eax
        call public_6ee7b00
        mov ebx, eax
        jmp public_6ee90a5
        public_6ee90a3 : nop
        xor ebx, ebx
        public_6ee90a5 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        test al, al
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        je public_6ee905e
        call dword ptr ds : [edx+4]
        public_6ee90bf : nop
        mov esi, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6ee90d7
        mov ebp, eax
        public_6ee90d7 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ee8f64
        fld dword ptr ds : [public_6fb5810]
        mov dword ptr ds : [eax], ebx
        inc dword ptr ds : [edi+0x10]
        jmp public_6ee9068
        UNREACHABLE_TRAP(0x6ee8d70)
        ASM_EXPORT_ENTRY_FIRST(0x6ee8db9, public_6ee8db9)
        ASM_EXPORT_ENTRY(0x6ee8e15, public_6ee8e15)
        ASM_EXPORT_ENTRY(0x6ee8e6f, public_6ee8e6f)
        ASM_EXPORT_ENTRY(0x6ee8ec2, public_6ee8ec2)
        ASM_EXPORT_ENTRY(0x6ee8ee6, public_6ee8ee6)
        ASM_EXPORT_ENTRY(0x6ee8f76, public_6ee8f76)
        ASM_EXPORT_ENTRY(0x6ee9018, public_6ee9018)
        ASM_EXPORT_ENTRY(0x6ee9062, public_6ee9062)
        ASM_EXPORT_ENTRY_LAST(0x6ee907d, public_6ee907d)
    }
}

#undef public_6ee8db9
#undef public_6ee8e15
#undef public_6ee8e6f
#undef public_6ee8ec2
#undef public_6ee8ee6
#undef public_6ee8f0a
#undef public_6ee8f0c
#undef public_6ee8f48
#undef public_6ee8f64
#undef public_6ee8f76
#undef public_6ee8f9a
#undef public_6ee8f9c
#undef public_6ee8fd4
#undef public_6ee900c
#undef public_6ee9018
#undef public_6ee903e
#undef public_6ee9040
#undef public_6ee905c
#undef public_6ee905e
#undef public_6ee9062
#undef public_6ee9068
#undef public_6ee907d
#undef public_6ee90a3
#undef public_6ee90a5
#undef public_6ee90bf
#undef public_6ee90d7

#pragma init_seg(compiler)
extern "C" void const* const public_6ee8db9 = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee8db9);
extern "C" void const* const public_6ee8e15 = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee8e15);
extern "C" void const* const public_6ee8e6f = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee8e6f);
extern "C" void const* const public_6ee8ec2 = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee8ec2);
extern "C" void const* const public_6ee8ee6 = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee8ee6);
extern "C" void const* const public_6ee8f76 = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee8f76);
extern "C" void const* const public_6ee9018 = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee9018);
extern "C" void const* const public_6ee9062 = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee9062);
extern "C" void const* const public_6ee907d = __AsmFindLabelExport(&internal_6ee8d70, 0x6ee907d);
