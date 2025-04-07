#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4030);
CLANG_FORWARD_PROC_SYMBOL(public_6ad442d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad52bc);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5414);

#define public_6ad5452 _public_6ad5452
#define public_6ad545d _public_6ad545d
#define public_6ad545f _public_6ad545f
#define public_6ad54a8 _public_6ad54a8
#define public_6ad54ad _public_6ad54ad
#define public_6ad54b6 _public_6ad54b6
#define public_6ad54f0 _public_6ad54f0
#define public_6ad54fc _public_6ad54fc
#define public_6ad5501 _public_6ad5501
#define public_6ad5513 _public_6ad5513
#define public_6ad5531 _public_6ad5531
#define public_6ad5536 _public_6ad5536
#define public_6ad553f _public_6ad553f
#define public_6ad5542 _public_6ad5542

PROC_DECLARE(0x6ad5414, internal_6ad5414, public_6ad5414);
extern "C" NAKED register_t __cdecl internal_6ad5414()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaea0 @0x6ad5419*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaea0
/*FIXUP push offset _public_6ad023c @0x6ad541e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
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
        ja public_6ad545d
        xor ebx, ebx
        cmp esi, ebx
        jne public_6ad5452
        push 1
        pop esi
        public_6ad5452 : nop
        add esi, 0xF
        and esi, 0xFFFFFFF0
        mov dword ptr ss : [ebp+0xC], esi
        jmp public_6ad545f
        public_6ad545d : nop
        xor ebx, ebx
        public_6ad545f : nop
        mov dword ptr ss : [ebp-0x20], ebx
        cmp esi, 0xFFFFFFE0
        ja public_6ad5513
        mov eax, dword ptr ds : [public_6ae2464]
        cmp eax, 3
        jne public_6ad54b6
        mov edi, dword ptr ss : [ebp-0x1C]
        cmp edi, dword ptr ds : [public_6ae245c]
        ja public_6ad54fc
        push 9
        call public_6ad237a
        pop ecx
        mov dword ptr ss : [ebp-4], ebx
        push edi
        call public_6ad442d
        pop ecx
        mov dword ptr ss : [ebp-0x20], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad54ad
        cmp dword ptr ss : [ebp-0x20], ebx
        je public_6ad5501
        push dword ptr ss : [ebp-0x1C]
        jmp public_6ad54f0
        public_6ad54a8 : nop
        xor ebx, ebx
        mov esi, dword ptr ss : [ebp+0xC]
        public_6ad54ad : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad54b6 : nop
        cmp eax, 2
        jne public_6ad54fc
        cmp esi, dword ptr ds : [public_6adfc74]
        ja public_6ad54fc
        push 9
        call public_6ad237a
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        mov eax, esi
        shr eax, 4
        push eax
        call public_6ad4ed0
        pop ecx
        mov dword ptr ss : [ebp-0x20], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad5536
        cmp dword ptr ss : [ebp-0x20], ebx
        je public_6ad5501
        push esi
        public_6ad54f0 : nop
        push ebx
        push dword ptr ss : [ebp-0x20]
        call public_6ad4030
        add esp, 0xC
        public_6ad54fc : nop
        cmp dword ptr ss : [ebp-0x20], ebx
        jne public_6ad553f
        public_6ad5501 : nop
        push esi
        push 8
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada130]
        mov dword ptr ss : [ebp-0x20], eax
        public_6ad5513 : nop
        cmp dword ptr ss : [ebp-0x20], ebx
        jne public_6ad553f
        cmp dword ptr ds : [public_6ae108c], ebx
        je public_6ad553f
        push esi
        call public_6ad52bc
        pop ecx
        test eax, eax
        jne public_6ad545f
        jmp public_6ad5542
        public_6ad5531 : nop
        xor ebx, ebx
        mov esi, dword ptr ss : [ebp+0xC]
        public_6ad5536 : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad553f : nop
        mov eax, dword ptr ss : [ebp-0x20]
        public_6ad5542 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad5414)
        ASM_EXPORT_ENTRY_FIRST(0x6ad54a8, public_6ad54a8)
        ASM_EXPORT_ENTRY_LAST(0x6ad5531, public_6ad5531)
    }
}

#undef public_6ad5452
#undef public_6ad545d
#undef public_6ad545f
#undef public_6ad54a8
#undef public_6ad54ad
#undef public_6ad54b6
#undef public_6ad54f0
#undef public_6ad54fc
#undef public_6ad5501
#undef public_6ad5513
#undef public_6ad5531
#undef public_6ad5536
#undef public_6ad553f
#undef public_6ad5542

#pragma init_seg(compiler)
extern "C" void const* const public_6ad54a8 = __AsmFindLabelExport(&internal_6ad5414, 0x6ad54a8);
extern "C" void const* const public_6ad5531 = __AsmFindLabelExport(&internal_6ad5414, 0x6ad5531);
