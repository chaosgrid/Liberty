#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dbf9e);
CLANG_FORWARD_PROC_SYMBOL(public_65dca41);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd1e8);
CLANG_FORWARD_PROC_SYMBOL(public_65dd253);
CLANG_FORWARD_PROC_SYMBOL(public_65ddb10);

#define public_65dd291 _public_65dd291
#define public_65dd29c _public_65dd29c
#define public_65dd29e _public_65dd29e
#define public_65dd2e7 _public_65dd2e7
#define public_65dd2ec _public_65dd2ec
#define public_65dd2f5 _public_65dd2f5
#define public_65dd32f _public_65dd32f
#define public_65dd33b _public_65dd33b
#define public_65dd340 _public_65dd340
#define public_65dd352 _public_65dd352
#define public_65dd370 _public_65dd370
#define public_65dd375 _public_65dd375
#define public_65dd37e _public_65dd37e
#define public_65dd381 _public_65dd381

PROC_DECLARE(0x65dd253, internal_65dd253, public_65dd253);
extern "C" NAKED register_t __cdecl internal_65dd253()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1ab8 @0x65dd258*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1ab8
/*FIXUP push offset _public_65dcf2c @0x65dd25d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov esi, dword ptr ss : [ebp+8]
        imul esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [ebp-0x1C], esi
        cmp esi, 0xFFFFFFE0
        ja public_65dd29c
        xor ebx, ebx
        cmp esi, ebx
        jne public_65dd291
        push 1
        pop esi
        public_65dd291 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        mov dword ptr ss : [ebp+0xC], esi
        jmp public_65dd29e
        public_65dd29c : nop
        xor ebx, ebx
        public_65dd29e : nop
        mov dword ptr ss : [ebp-0x20], ebx
        cmp esi, 0xFFFFFFE0
        ja public_65dd352
        mov eax, dword ptr ds : [public_65e7924]
        cmp eax, 3
        jne public_65dd2f5
        mov edi, dword ptr ss : [ebp-0x1C]
        cmp edi, dword ptr ds : [public_65e791c]
        ja public_65dd33b
        push 9
        call public_65dceab
        pop ecx
        mov dword ptr ss : [ebp-4], ebx
        push edi
        call public_65dbf9e
        pop ecx
        mov dword ptr ss : [ebp-0x20], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65dd2ec
        cmp dword ptr ss : [ebp-0x20], ebx
        je public_65dd340
        push dword ptr ss : [ebp-0x1C]
        jmp public_65dd32f
        public_65dd2e7 : nop
        xor ebx, ebx
        mov esi, dword ptr ss : [ebp+0xC]
        public_65dd2ec : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65dd2f5 : nop
        cmp eax, 2
        jne public_65dd33b
        cmp esi, dword ptr ds : [public_65e55ec]
        ja public_65dd33b
        push 9
        call public_65dceab
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        mov eax, esi
        shr eax, 4
        push eax
        call public_65dca41
        pop ecx
        mov dword ptr ss : [ebp-0x20], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65dd375
        cmp dword ptr ss : [ebp-0x20], ebx
        je public_65dd340
        push esi
        public_65dd32f : nop
        push ebx
        push dword ptr ss : [ebp-0x20]
        call public_65ddb10
        add esp, 0xC
        public_65dd33b : nop
        cmp dword ptr ss : [ebp-0x20], ebx
        jne public_65dd37e
        public_65dd340 : nop
        push esi
        push 8
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1060]
        mov dword ptr ss : [ebp-0x20], eax
        public_65dd352 : nop
        cmp dword ptr ss : [ebp-0x20], ebx
        jne public_65dd37e
        cmp dword ptr ds : [public_65e63d4], ebx
        je public_65dd37e
        push esi
        call public_65dd1e8
        pop ecx
        test eax, eax
        jne public_65dd29e
        jmp public_65dd381
        public_65dd370 : nop
        xor ebx, ebx
        mov esi, dword ptr ss : [ebp+0xC]
        public_65dd375 : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65dd37e : nop
        mov eax, dword ptr ss : [ebp-0x20]
        public_65dd381 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65dd253)
        ASM_EXPORT_ENTRY_FIRST(0x65dd2e7, public_65dd2e7)
        ASM_EXPORT_ENTRY_LAST(0x65dd370, public_65dd370)
    }
}

#undef public_65dd291
#undef public_65dd29c
#undef public_65dd29e
#undef public_65dd2e7
#undef public_65dd2ec
#undef public_65dd2f5
#undef public_65dd32f
#undef public_65dd33b
#undef public_65dd340
#undef public_65dd352
#undef public_65dd370
#undef public_65dd375
#undef public_65dd37e
#undef public_65dd381

#pragma init_seg(compiler)
extern "C" void const* const public_65dd2e7 = __AsmFindLabelExport(&internal_65dd253, 0x65dd2e7);
extern "C" void const* const public_65dd370 = __AsmFindLabelExport(&internal_65dd253, 0x65dd370);
