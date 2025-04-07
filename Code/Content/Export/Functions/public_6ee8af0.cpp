#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8af0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabc3d);

#define public_6ee8b30 _public_6ee8b30
#define public_6ee8b3d _public_6ee8b3d
#define public_6ee8b63 _public_6ee8b63
#define public_6ee8b90 _public_6ee8b90
#define public_6ee8ba5 _public_6ee8ba5

PROC_DECLARE(0x6ee8af0, internal_6ee8af0, public_6ee8af0);
/* CHUNK of public_6f5c9a0 */
extern "C" NAKED register_t __cdecl internal_6ee8af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fabc3d @0x6ee8af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabc3d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_6fb7484
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        mov dword ptr ss : [esp+0x24], 2
        je public_6ee8b63
        nop 
        lea esp, ss:[esp]
        public_6ee8b30 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6ee8b3d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ee8b3d : nop
        mov ebp, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x10]
        add esp, 4
        dec ecx
        mov dword ptr ds : [edi+0x10], ecx
        cmp ebp, dword ptr ds : [edi+0xC]
        mov esi, ebp
        jne public_6ee8b30
        public_6ee8b63 : nop
        mov eax, dword ptr ds : [edi+0x18]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x20], ebx
        mov ebp, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ss : [ebp]
        add edi, 8
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x24], bl
        je public_6ee8ba5
        lea esp, ss:[esp]
        public_6ee8b90 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6ecfe80
        cmp esi, ebp
        jne public_6ee8b90
        public_6ee8ba5 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [public_6fcf1b0], ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6ee8af0)
        ASM_EXPORT_ENTRY_FIRST(0x6ee8b30, public_6ee8b30)
        ASM_EXPORT_ENTRY(0x6ee8b3d, public_6ee8b3d)
        ASM_EXPORT_ENTRY(0x6ee8b63, public_6ee8b63)
        ASM_EXPORT_ENTRY(0x6ee8b90, public_6ee8b90)
        ASM_EXPORT_ENTRY_LAST(0x6ee8ba5, public_6ee8ba5)
    }
}

#undef public_6ee8b30
#undef public_6ee8b3d
#undef public_6ee8b63
#undef public_6ee8b90
#undef public_6ee8ba5

#pragma init_seg(compiler)
extern "C" void const* const public_6ee8b30 = __AsmFindLabelExport(&internal_6ee8af0, 0x6ee8b30);
extern "C" void const* const public_6ee8b3d = __AsmFindLabelExport(&internal_6ee8af0, 0x6ee8b3d);
extern "C" void const* const public_6ee8b63 = __AsmFindLabelExport(&internal_6ee8af0, 0x6ee8b63);
extern "C" void const* const public_6ee8b90 = __AsmFindLabelExport(&internal_6ee8af0, 0x6ee8b90);
extern "C" void const* const public_6ee8ba5 = __AsmFindLabelExport(&internal_6ee8af0, 0x6ee8ba5);
