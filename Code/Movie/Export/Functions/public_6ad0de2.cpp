#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad08fd);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0de2);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0e80);
CLANG_FORWARD_PROC_SYMBOL(public_6ad12b0);

#define public_6ad0e14 _public_6ad0e14
#define public_6ad0e23 _public_6ad0e23
#define public_6ad0e28 _public_6ad0e28
#define public_6ad0e43 _public_6ad0e43
#define public_6ad0e49 _public_6ad0e49
#define public_6ad0e53 _public_6ad0e53
#define public_6ad0e63 _public_6ad0e63
#define public_6ad0e6e _public_6ad0e6e

PROC_DECLARE(0x6ad0de2, internal_6ad0de2, public_6ad0de2);
extern "C" NAKED register_t __cdecl internal_6ad0de2()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa38 @0x6ad0de7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa38
/*FIXUP push offset _public_6ad023c @0x6ad0dec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp-0x1C], esi
        mov edi, dword ptr ss : [ebp+0x10]
        public_6ad0e14 : nop
        cmp esi, dword ptr ss : [ebp+0x14]
        je public_6ad0e6e
        cmp esi, 0xFFFFFFFF
        jle public_6ad0e23
        cmp esi, dword ptr ds : [edi+4]
        jl public_6ad0e28
        public_6ad0e23 : nop
        call public_6ad08fd
        public_6ad0e28 : nop
        and dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax+esi*8+4]
        test eax, eax
        je public_6ad0e43
        push 0x103
        push ebx
        push eax
        call public_6ad12b0
        public_6ad0e43 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6ad0e63
        public_6ad0e49 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6ad0e80
        pop ecx
        ret 
        public_6ad0e53 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov edi, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ss : [ebp-0x1C]
        public_6ad0e63 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax+esi*8]
        mov dword ptr ss : [ebp-0x1C], esi
        jmp public_6ad0e14
        public_6ad0e6e : nop
        mov dword ptr ds : [ebx+8], esi
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad0de2)
        ASM_EXPORT_ENTRY_FIRST(0x6ad0e49, public_6ad0e49)
        ASM_EXPORT_ENTRY_LAST(0x6ad0e53, public_6ad0e53)
    }
}

#undef public_6ad0e14
#undef public_6ad0e23
#undef public_6ad0e28
#undef public_6ad0e43
#undef public_6ad0e49
#undef public_6ad0e53
#undef public_6ad0e63
#undef public_6ad0e6e

#pragma init_seg(compiler)
extern "C" void const* const public_6ad0e49 = __AsmFindLabelExport(&internal_6ad0de2, 0x6ad0e49);
extern "C" void const* const public_6ad0e53 = __AsmFindLabelExport(&internal_6ad0de2, 0x6ad0e53);
