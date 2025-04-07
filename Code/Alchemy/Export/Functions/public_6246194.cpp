#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246194);
CLANG_FORWARD_PROC_SYMBOL(public_6246214);
CLANG_FORWARD_PROC_SYMBOL(public_62464b2);

#define public_62461cb _public_62461cb
#define public_62461db _public_62461db
#define public_62461fc _public_62461fc
#define public_6246213 _public_6246213

PROC_DECLARE(0x6246194, internal_6246194, public_6246194);
extern "C" NAKED register_t __cdecl internal_6246194()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_624fe70 @0x6246199*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_624fe70
/*FIXUP push offset _public_62464b2 @0x624619e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62464b2
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        and dword ptr ss : [ebp-0x1C], 0
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, esi
        imul eax, dword ptr ss : [ebp+0x10]
        add dword ptr ss : [ebp+8], eax
        and dword ptr ss : [ebp-4], 0
        public_62461cb : nop
        dec dword ptr ss : [ebp+0x10]
        js public_62461db
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_62461cb
        public_62461db : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_62461fc
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_62461fc : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6246213
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6246214
        public_6246213 : nop
        ret 
        UNREACHABLE_TRAP(0x6246194)
        ASM_EXPORT_ENTRY_SINGLE(0x62461fc, public_62461fc)
    }
}

#undef public_62461cb
#undef public_62461db
#undef public_62461fc
#undef public_6246213

#pragma init_seg(compiler)
extern "C" void const* const public_62461fc = __AsmFindLabelExport(&internal_6246194, 0x62461fc);
