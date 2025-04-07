#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5500);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60410);

#define public_6ce5538 _public_6ce5538
#define public_6ce5548 _public_6ce5548
#define public_6ce5558 _public_6ce5558
#define public_6ce5567 _public_6ce5567
#define public_6ce557c _public_6ce557c
#define public_6ce5582 _public_6ce5582
#define public_6ce558f _public_6ce558f
#define public_6ce55a0 _public_6ce55a0
#define public_6ce55af _public_6ce55af
#define public_6ce55cc _public_6ce55cc
#define public_6ce55d8 _public_6ce55d8
#define public_6ce55f5 _public_6ce55f5

PROC_DECLARE(0x6ce5500, internal_6ce5500, public_6ce5500);
extern "C" NAKED register_t __cdecl internal_6ce5500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_6d60410 @0x6ce5505*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d60410
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov edi, eax
        or edi, 0x1F
        cmp edi, 0x7FFFFFFD
        mov esi, ecx
        mov dword ptr ss : [ebp-0x10], esp
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_6ce5538
        mov edi, eax
        public_6ce5538 : nop
        lea eax, ds:[edi+2]
        test eax, eax
        mov dword ptr ss : [ebp-4], 0
        jge public_6ce5548
        xor eax, eax
        public_6ce5548 : nop
        add eax, eax
        push eax
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_6ce5582
        public_6ce5558 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x18], eax
        add eax, 2
        test eax, eax
        jge public_6ce5567
        xor eax, eax
        public_6ce5567 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6d60012
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_6ce557c @0x6ce5576*/
  FIXUP lea eax, ds : [public_6ce557c]
        ret 
        public_6ce557c : nop
        mov esi, dword ptr ss : [ebp-0x14]
        mov edi, dword ptr ss : [ebp-0x18]
        public_6ce5582 : nop
        mov edx, dword ptr ds : [esi+8]
        test edx, edx
        jbe public_6ce55af
        cmp edx, edi
        jbe public_6ce558f
        mov edx, edi
        public_6ce558f : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        test edx, edx
        jbe public_6ce55af
        lea esp, ss:[esp]
        public_6ce55a0 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6ce55a0
        public_6ce55af : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebx, dword ptr ds : [esi+8]
        je public_6ce55d8
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce55cc
        cmp cl, 0xFF
        je public_6ce55cc
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6ce55d8
        public_6ce55cc : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce55d8 : nop
        cmp ebx, edi
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ds:[ecx+2]
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [esi+0xC], edi
        ja public_6ce55f5
        mov edi, ebx
        public_6ce55f5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ce5500)
        ASM_EXPORT_ENTRY_FIRST(0x6ce5558, public_6ce5558)
        ASM_EXPORT_ENTRY_LAST(0x6ce557c, public_6ce557c)
    }
}

#undef public_6ce5538
#undef public_6ce5548
#undef public_6ce5558
#undef public_6ce5567
#undef public_6ce557c
#undef public_6ce5582
#undef public_6ce558f
#undef public_6ce55a0
#undef public_6ce55af
#undef public_6ce55cc
#undef public_6ce55d8
#undef public_6ce55f5

#pragma init_seg(compiler)
extern "C" void const* const public_6ce5558 = __AsmFindLabelExport(&internal_6ce5500, 0x6ce5558);
extern "C" void const* const public_6ce557c = __AsmFindLabelExport(&internal_6ce5500, 0x6ce557c);
