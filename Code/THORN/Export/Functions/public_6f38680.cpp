#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58c38);

#define public_6f386e7 _public_6f386e7
#define public_6f386e9 _public_6f386e9
#define public_6f386f1 _public_6f386f1
#define public_6f38710 _public_6f38710
#define public_6f3871b _public_6f3871b
#define public_6f38766 _public_6f38766
#define public_6f38776 _public_6f38776

PROC_DECLARE(0x6f38680, internal_6f38680, public_6f38680);
extern "C" NAKED register_t __cdecl internal_6f38680()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58c38 @0x6f38688*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58c38
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        xor ebp, ebp
        or eax, 0xFFFFFFFF
        cmp edi, ebp
        je public_6f38776
        mov eax, dword ptr ds : [edi]
        push edi
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x104]
        xor bl, bl
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], ebp
        jne public_6f386f1
        push 0x14
        call public_6f57e9c
        add esp, 4
        cmp eax, ebp
        je public_6f386e7
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ebp
        mov dword ptr ds : [eax], offset public_6f5aef4
        jmp public_6f386e9
        public_6f386e7 : nop
        xor eax, eax
        public_6f386e9 : nop
        mov dword ptr ds : [esi+0x104], eax
        mov bl, 1
        public_6f386f1 : nop
        mov eax, dword ptr ds : [esi+0xB4]
        mov ecx, dword ptr ds : [esi+0x104]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0xBC]
        cmp ecx, ebp
        jne public_6f38710
        xor eax, eax
        jmp public_6f3871b
        public_6f38710 : nop
        mov eax, dword ptr ds : [esi+0xC0]
        sub eax, ecx
        sar eax, 2
        public_6f3871b : nop
        mov ecx, dword ptr ds : [esi+0x104]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x104]
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x104]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        push edi
        call dword ptr ds : [edx+0xC]
        test bl, bl
        mov ebp, eax
        je public_6f38766
        mov eax, dword ptr ds : [esi+0x104]
        push eax
        call public_6f57e26
        add esp, 4
        mov dword ptr ds : [esi+0x104], 0
        public_6f38766 : nop
        mov eax, dword ptr ds : [edi]
        push edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        mov eax, ebp
        public_6f38776 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f38680)
    }
}

#undef public_6f386e7
#undef public_6f386e9
#undef public_6f386f1
#undef public_6f38710
#undef public_6f3871b
#undef public_6f38766
#undef public_6f38776
