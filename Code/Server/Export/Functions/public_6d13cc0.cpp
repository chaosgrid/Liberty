#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d12860);
CLANG_FORWARD_PROC_SYMBOL(public_6d12900);
CLANG_FORWARD_PROC_SYMBOL(public_6d12b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d13cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c600);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a8);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61cdb);

#define public_6d13d27 _public_6d13d27
#define public_6d13d40 _public_6d13d40
#define public_6d13d5a _public_6d13d5a
#define public_6d13d70 _public_6d13d70
#define public_6d13db6 _public_6d13db6
#define public_6d13dc0 _public_6d13dc0
#define public_6d13de5 _public_6d13de5
#define public_6d13df5 _public_6d13df5
#define public_6d13df8 _public_6d13df8
#define public_6d13dfc _public_6d13dfc
#define public_6d13e23 _public_6d13e23
#define public_6d13e4f _public_6d13e4f
#define public_6d13e58 _public_6d13e58
#define public_6d13e85 _public_6d13e85
#define public_6d13e94 _public_6d13e94
#define public_6d13e9d _public_6d13e9d
#define public_6d13ebb _public_6d13ebb
#define public_6d13eda _public_6d13eda

PROC_DECLARE(0x6d13cc0, internal_6d13cc0, public_6d13cc0);
/* CHUNK of public_6d18840 */
extern "C" NAKED register_t __cdecl internal_6d13cc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d61cdb @0x6d13cc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61cdb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x2C], ebp
        call dword ptr ds : [public_6d64798]
        mov edi, eax
        mov esi, dword ptr ds : [edi+8]
        mov eax, esi
        imul eax, 0x54
        add eax, 4
        push eax
        mov dword ptr ss : [ebp+4], esi
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x64], ebx
        je public_6d13d27
/*FIXUP push offset _public_6d12900 @0x6d13d0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d12900
/*FIXUP push offset _public_6d12860 @0x6d13d14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d12860
        push esi
        lea ebx, ds:[eax+4]
        push 0x54
        push ebx
        mov dword ptr ds : [eax], esi
        call public_6d601a8
        public_6d13d27 : nop
        mov dword ptr ss : [ebp], ebx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        je public_6d13d5a
        xor ebx, ebx
        lea ecx, ds:[ecx]
        public_6d13d40 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ss : [ebp]
        add ecx, ebx
        call public_6d12b30
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+4]
        add ebx, 0x54
        cmp esi, eax
        jne public_6d13d40
        public_6d13d5a : nop
        mov ecx, dword ptr ss : [ebp+4]
        xor eax, eax
        cmp ecx, eax
        mov dword ptr ss : [esp+0x24], eax
        jle public_6d13eda
        mov dword ptr ss : [esp+0x1C], eax
        nop 
        public_6d13d70 : nop
        mov esi, dword ptr ss : [ebp]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        lea edx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], eax
        push edx
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x58], esi
        call public_6d5c600
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jle public_6d13ebb
        add ebp, 0x1C
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6d13dc0
        public_6d13db6 : nop
        mov esi, dword ptr ss : [esp+0x28]
        lea ebx, ds:[ebx]
        public_6d13dc0 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [ebp+8]
        add eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov esi, dword ptr ds : [edx+4]
        cmp esi, ebx
        mov edi, edx
        mov al, 1
        je public_6d13dfc
        public_6d13de5 : nop
        cmp ecx, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6d13df5
        mov esi, dword ptr ds : [esi]
        jmp public_6d13df8
        public_6d13df5 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d13df8 : nop
        cmp esi, ebx
        jne public_6d13de5
        public_6d13dfc : nop
        mov cl, byte ptr ss : [ebp+0xC]
        test cl, cl
        je public_6d13e23
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, ebp
        call public_6cfdca0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], eax
        mov byte ptr ss : [esp+0x48], 1
        jmp public_6d13e9d
        public_6d13e23 : nop
        test al, al
        mov dword ptr ss : [esp+0x14], edi
        je public_6d13e58
        cmp edi, dword ptr ds : [edx]
        jne public_6d13e4f
        lea ecx, ss:[esp+0x12]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        push edi
        push esi
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x26], 1
        call public_6cfdca0
        push eax
        jmp public_6d13e94
        public_6d13e4f : nop
        lea ecx, ss:[esp+0x14]
        call public_6cfdf70
        public_6d13e58 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [esp+0x3C]
        jae public_6d13e85
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x26], 1
        call public_6cfdca0
        push eax
        jmp public_6d13e94
        public_6d13e85 : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x17], 0
        push ecx
        public_6d13e94 : nop
        lea ecx, ss:[esp+0x4C]
        call public_6d0f600
        public_6d13e9d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, 0x68
        dec eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x20], eax
        jne public_6d13db6
        mov ebp, dword ptr ss : [esp+0x2C]
        public_6d13ebb : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+4]
        inc eax
        add edx, 0x54
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x1C], edx
        jl public_6d13d70
        public_6d13eda : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x6d13cc0)
        ASM_EXPORT_ENTRY_FIRST(0x6d13d27, public_6d13d27)
        ASM_EXPORT_ENTRY(0x6d13d40, public_6d13d40)
        ASM_EXPORT_ENTRY(0x6d13d5a, public_6d13d5a)
        ASM_EXPORT_ENTRY(0x6d13d70, public_6d13d70)
        ASM_EXPORT_ENTRY(0x6d13db6, public_6d13db6)
        ASM_EXPORT_ENTRY(0x6d13dc0, public_6d13dc0)
        ASM_EXPORT_ENTRY(0x6d13de5, public_6d13de5)
        ASM_EXPORT_ENTRY(0x6d13df5, public_6d13df5)
        ASM_EXPORT_ENTRY(0x6d13df8, public_6d13df8)
        ASM_EXPORT_ENTRY(0x6d13dfc, public_6d13dfc)
        ASM_EXPORT_ENTRY(0x6d13e23, public_6d13e23)
        ASM_EXPORT_ENTRY(0x6d13e4f, public_6d13e4f)
        ASM_EXPORT_ENTRY(0x6d13e58, public_6d13e58)
        ASM_EXPORT_ENTRY(0x6d13e85, public_6d13e85)
        ASM_EXPORT_ENTRY(0x6d13e94, public_6d13e94)
        ASM_EXPORT_ENTRY(0x6d13e9d, public_6d13e9d)
        ASM_EXPORT_ENTRY(0x6d13ebb, public_6d13ebb)
        ASM_EXPORT_ENTRY_LAST(0x6d13eda, public_6d13eda)
    }
}

#undef public_6d13d27
#undef public_6d13d40
#undef public_6d13d5a
#undef public_6d13d70
#undef public_6d13db6
#undef public_6d13dc0
#undef public_6d13de5
#undef public_6d13df5
#undef public_6d13df8
#undef public_6d13dfc
#undef public_6d13e23
#undef public_6d13e4f
#undef public_6d13e58
#undef public_6d13e85
#undef public_6d13e94
#undef public_6d13e9d
#undef public_6d13ebb
#undef public_6d13eda

#pragma init_seg(compiler)
extern "C" void const* const public_6d13d27 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13d27);
extern "C" void const* const public_6d13d40 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13d40);
extern "C" void const* const public_6d13d5a = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13d5a);
extern "C" void const* const public_6d13d70 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13d70);
extern "C" void const* const public_6d13db6 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13db6);
extern "C" void const* const public_6d13dc0 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13dc0);
extern "C" void const* const public_6d13de5 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13de5);
extern "C" void const* const public_6d13df5 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13df5);
extern "C" void const* const public_6d13df8 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13df8);
extern "C" void const* const public_6d13dfc = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13dfc);
extern "C" void const* const public_6d13e23 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13e23);
extern "C" void const* const public_6d13e4f = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13e4f);
extern "C" void const* const public_6d13e58 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13e58);
extern "C" void const* const public_6d13e85 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13e85);
extern "C" void const* const public_6d13e94 = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13e94);
extern "C" void const* const public_6d13e9d = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13e9d);
extern "C" void const* const public_6d13ebb = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13ebb);
extern "C" void const* const public_6d13eda = __AsmFindLabelExport(&internal_6d13cc0, 0x6d13eda);
