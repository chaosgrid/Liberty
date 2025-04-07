#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0991);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad442d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4ed0);

#define public_6ad09f8 _public_6ad09f8
#define public_6ad0a01 _public_6ad0a01
#define public_6ad0a15 _public_6ad0a15
#define public_6ad0a18 _public_6ad0a18
#define public_6ad0a51 _public_6ad0a51
#define public_6ad0a54 _public_6ad0a54
#define public_6ad0a57 _public_6ad0a57
#define public_6ad0a60 _public_6ad0a60
#define public_6ad0a6a _public_6ad0a6a
#define public_6ad0a70 _public_6ad0a70
#define public_6ad0a7e _public_6ad0a7e

PROC_DECLARE(0x6ad0991, internal_6ad0991, public_6ad0991);
extern "C" NAKED register_t __cdecl internal_6ad0991()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa20 @0x6ad0996*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa20
/*FIXUP push offset _public_6ad023c @0x6ad099b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov eax, dword ptr ds : [public_6ae2464]
        cmp eax, 3
        jne public_6ad0a01
        mov esi, dword ptr ss : [ebp+8]
        cmp esi, dword ptr ds : [public_6ae245c]
        ja public_6ad0a60
        push 9
        call public_6ad237a
        pop ecx
        and dword ptr ss : [ebp-4], 0
        push esi
        call public_6ad442d
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad09f8
        mov eax, dword ptr ss : [ebp-0x1C]
        test eax, eax
        je public_6ad0a60
        jmp public_6ad0a7e
        public_6ad09f8 : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad0a01 : nop
        cmp eax, 2
        jne public_6ad0a60
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_6ad0a15
        lea esi, ds:[eax+0xF]
        and esi, 0xFFFFFFF0
        jmp public_6ad0a18
        public_6ad0a15 : nop
        push 0x10
        pop esi
        public_6ad0a18 : nop
        mov dword ptr ss : [ebp+8], esi
        cmp esi, dword ptr ds : [public_6adfc74]
        ja public_6ad0a51
        push 9
        call public_6ad237a
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        mov eax, esi
        shr eax, 4
        push eax
        call public_6ad4ed0
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad0a57
        mov eax, dword ptr ss : [ebp-0x1C]
        test eax, eax
        jne public_6ad0a7e
        public_6ad0a51 : nop
        push esi
        jmp public_6ad0a70
        public_6ad0a54 : nop
        mov esi, dword ptr ss : [ebp+8]
        public_6ad0a57 : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad0a60 : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_6ad0a6a
        push 1
        pop eax
        public_6ad0a6a : nop
        add eax, 0xF
        and al, 0xF0
        push eax
        public_6ad0a70 : nop
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada130]
        public_6ad0a7e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad0991)
        ASM_EXPORT_ENTRY_FIRST(0x6ad09f8, public_6ad09f8)
        ASM_EXPORT_ENTRY_LAST(0x6ad0a54, public_6ad0a54)
    }
}

#undef public_6ad09f8
#undef public_6ad0a01
#undef public_6ad0a15
#undef public_6ad0a18
#undef public_6ad0a51
#undef public_6ad0a54
#undef public_6ad0a57
#undef public_6ad0a60
#undef public_6ad0a6a
#undef public_6ad0a70
#undef public_6ad0a7e

#pragma init_seg(compiler)
extern "C" void const* const public_6ad09f8 = __AsmFindLabelExport(&internal_6ad0991, 0x6ad09f8);
extern "C" void const* const public_6ad0a54 = __AsmFindLabelExport(&internal_6ad0991, 0x6ad0a54);
