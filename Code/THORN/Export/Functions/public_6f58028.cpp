#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57fb4);
CLANG_FORWARD_PROC_SYMBOL(public_6f58028);
CLANG_FORWARD_PROC_SYMBOL(public_6f58342);

#define public_6f58056 _public_6f58056
#define public_6f58071 _public_6f58071
#define public_6f58092 _public_6f58092
#define public_6f580a9 _public_6f580a9

PROC_DECLARE(0x6f58028, internal_6f58028, public_6f58028);
extern "C" NAKED register_t __cdecl internal_6f58028()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6f5b4a0 @0x6f5802d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5b4a0
/*FIXUP push offset _public_6f58342 @0x6f58032*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f58342
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        xor eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-0x1C], eax
        public_6f58056 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6f58071
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6f58056
        public_6f58071 : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6f58092
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_6f58092 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6f580a9
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6f57fb4
        public_6f580a9 : nop
        ret 
        UNREACHABLE_TRAP(0x6f58028)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58092, public_6f58092)
    }
}

#undef public_6f58056
#undef public_6f58071
#undef public_6f58092
#undef public_6f580a9

#pragma init_seg(compiler)
extern "C" void const* const public_6f58092 = __AsmFindLabelExport(&internal_6f58028, 0x6f58092);
