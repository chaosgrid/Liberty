#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a1d8);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a236);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a442);

#define public_6b6a201 _public_6b6a201
#define public_6b6a214 _public_6b6a214
#define public_6b6a21e _public_6b6a21e
#define public_6b6a221 _public_6b6a221

PROC_DECLARE(0x6b6a1d8, internal_6b6a1d8, public_6b6a1d8);
extern "C" NAKED register_t __cdecl internal_6b6a1d8()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6b6ead8 @0x6b6a1dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6ead8
/*FIXUP push offset _public_6b6a442 @0x6b6a1e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6b6a442
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
        public_6b6a201 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6b6a221
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6b6a201
        public_6b6a214 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6b6a236
        pop ecx
        ret 
        public_6b6a21e : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6b6a221 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6b6a1d8)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a214, public_6b6a214)
        ASM_EXPORT_ENTRY_LAST(0x6b6a21e, public_6b6a21e)
    }
}

#undef public_6b6a201
#undef public_6b6a214
#undef public_6b6a21e
#undef public_6b6a221

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a214 = __AsmFindLabelExport(&internal_6b6a1d8, 0x6b6a214);
extern "C" void const* const public_6b6a21e = __AsmFindLabelExport(&internal_6b6a1d8, 0x6b6a21e);
