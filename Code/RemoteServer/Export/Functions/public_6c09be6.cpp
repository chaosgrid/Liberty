#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09be6);
CLANG_FORWARD_PROC_SYMBOL(public_6c09c44);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ef4);

#define public_6c09c0f _public_6c09c0f
#define public_6c09c22 _public_6c09c22
#define public_6c09c2c _public_6c09c2c
#define public_6c09c2f _public_6c09c2f

PROC_DECLARE(0x6c09be6, internal_6c09be6, public_6c09be6);
extern "C" NAKED register_t __cdecl internal_6c09be6()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6c0e678 @0x6c09beb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e678
/*FIXUP push offset _public_6c09ef4 @0x6c09bf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6c09ef4
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
        public_6c09c0f : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6c09c2f
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6c09c0f
        public_6c09c22 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6c09c44
        pop ecx
        ret 
        public_6c09c2c : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6c09c2f : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6c09be6)
        ASM_EXPORT_ENTRY_FIRST(0x6c09c22, public_6c09c22)
        ASM_EXPORT_ENTRY_LAST(0x6c09c2c, public_6c09c2c)
    }
}

#undef public_6c09c0f
#undef public_6c09c22
#undef public_6c09c2c
#undef public_6c09c2f

#pragma init_seg(compiler)
extern "C" void const* const public_6c09c22 = __AsmFindLabelExport(&internal_6c09be6, 0x6c09c22);
extern "C" void const* const public_6c09c2c = __AsmFindLabelExport(&internal_6c09be6, 0x6c09c2c);
