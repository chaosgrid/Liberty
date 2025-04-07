#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55d710);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c179e);

#define public_55d751 _public_55d751
#define public_55d75a _public_55d75a
#define public_55d789 _public_55d789
#define public_55d792 _public_55d792
#define public_55d7d6 _public_55d7d6
#define public_55d7f3 _public_55d7f3
#define public_55d7fc _public_55d7fc
#define public_55d82b _public_55d82b
#define public_55d834 _public_55d834

PROC_DECLARE(0x55d710, internal_55d710, public_55d710);
extern "C" NAKED register_t __cdecl internal_55d710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c179e @0x55d712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c179e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x3B8]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_55d75a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_55d751
        cmp cl, 0xFF
        je public_55d751
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55d75a
        public_55d751 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55d75a : nop
        mov dword ptr ds : [esi+0x3B8], ebx
        mov dword ptr ds : [esi+0x3BC], ebx
        mov dword ptr ds : [esi+0x3C0], ebx
        mov eax, dword ptr ds : [esi+0x3A8]
        cmp eax, ebx
        je public_55d792
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_55d789
        cmp cl, 0xFF
        je public_55d789
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55d792
        public_55d789 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55d792 : nop
        lea ecx, ds:[esi+0x378]
        mov dword ptr ds : [esi+0x3A8], ebx
        mov dword ptr ds : [esi+0x3AC], ebx
        mov dword ptr ds : [esi+0x3B0], ebx
        call public_59ef20
        mov dword ptr ds : [esi], offset public_5e15f4
        mov dword ptr ds : [esi+0x7C], offset public_5e15e8
        test byte ptr ds : [esi+0x330], 0x10
        mov dword ptr ss : [esp+0x14], 3
        je public_55d7d6
        push esi
        call public_59d960
        add esp, 4
        public_55d7d6 : nop
        mov eax, dword ptr ds : [esi+0x364]
        cmp eax, ebx
        je public_55d7fc
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_55d7f3
        cmp cl, 0xFF
        je public_55d7f3
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55d7fc
        public_55d7f3 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55d7fc : nop
        mov dword ptr ds : [esi+0x364], ebx
        mov dword ptr ds : [esi+0x368], ebx
        mov dword ptr ds : [esi+0x36C], ebx
        mov eax, dword ptr ds : [esi+0x354]
        cmp eax, ebx
        je public_55d834
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_55d82b
        cmp cl, 0xFF
        je public_55d82b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55d834
        public_55d82b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55d834 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x55d710)
    }
}

#undef public_55d751
#undef public_55d75a
#undef public_55d789
#undef public_55d792
#undef public_55d7d6
#undef public_55d7f3
#undef public_55d7fc
#undef public_55d82b
#undef public_55d834
