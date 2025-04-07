#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4aa7);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8031);
CLANG_FORWARD_PROC_SYMBOL(public_6ef810c);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);

#define public_6ef8078 _public_6ef8078
#define public_6ef8087 _public_6ef8087
#define public_6ef8090 _public_6ef8090

PROC_DECLARE(0x6ef8031, internal_6ef8031, public_6ef8031);
extern "C" NAKED register_t __cdecl internal_6ef8031()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc448 @0x6ef8036*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc448
/*FIXUP push offset _public_6efa070 @0x6ef803b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_6ef8078
        mov ecx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6ef8078
        and dword ptr ss : [ebp-4], 0
        push ecx
        push dword ptr ds : [eax+0x18]
        call public_6ef4aa7
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        public_6ef8078 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ef8087 : nop
        xor eax, eax
        cmp byte ptr ss : [ebp+0xC], al
        setne al
        ret 
        public_6ef8090 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        jmp public_6ef810c
        UNREACHABLE_TRAP(0x6ef8031)
        ASM_EXPORT_ENTRY_FIRST(0x6ef8087, public_6ef8087)
        ASM_EXPORT_ENTRY_LAST(0x6ef8090, public_6ef8090)
    }
}

#undef public_6ef8078
#undef public_6ef8087
#undef public_6ef8090

#pragma init_seg(compiler)
extern "C" void const* const public_6ef8087 = __AsmFindLabelExport(&internal_6ef8031, 0x6ef8087);
extern "C" void const* const public_6ef8090 = __AsmFindLabelExport(&internal_6ef8031, 0x6ef8090);
