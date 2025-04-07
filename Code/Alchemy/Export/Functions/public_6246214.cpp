#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246214);
CLANG_FORWARD_PROC_SYMBOL(public_6246272);
CLANG_FORWARD_PROC_SYMBOL(public_62464b2);

#define public_624623d _public_624623d
#define public_6246250 _public_6246250
#define public_624625a _public_624625a
#define public_624625d _public_624625d

PROC_DECLARE(0x6246214, internal_6246214, public_6246214);
extern "C" NAKED register_t __cdecl internal_6246214()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_624fe80 @0x6246219*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_624fe80
/*FIXUP push offset _public_62464b2 @0x624621e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62464b2
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        and dword ptr ss : [ebp-4], 0
        public_624623d : nop
        dec dword ptr ss : [ebp+0x10]
        js public_624625d
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_624623d
        public_6246250 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6246272
        pop ecx
        ret 
        public_624625a : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_624625d : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6246214)
        ASM_EXPORT_ENTRY_FIRST(0x6246250, public_6246250)
        ASM_EXPORT_ENTRY_LAST(0x624625a, public_624625a)
    }
}

#undef public_624623d
#undef public_6246250
#undef public_624625a
#undef public_624625d

#pragma init_seg(compiler)
extern "C" void const* const public_6246250 = __AsmFindLabelExport(&internal_6246214, 0x6246250);
extern "C" void const* const public_624625a = __AsmFindLabelExport(&internal_6246214, 0x624625a);
