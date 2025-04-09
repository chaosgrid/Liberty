#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55d610);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1646);

#define public_55d655 _public_55d655
#define public_55d674 _public_55d674
#define public_55d67d _public_55d67d
#define public_55d6ac _public_55d6ac
#define public_55d6b5 _public_55d6b5

PROC_DECLARE(0x55d610, internal_55d610, public_55d610);
extern "C" NAKED register_t __cdecl internal_55d610()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1646 @0x55d612*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1646
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
        mov dword ptr ds : [esi], offset public_5e15f4
        mov dword ptr ds : [esi+0x7C], offset public_5e15e8
        test byte ptr ds : [esi+0x330], 0x10
        mov dword ptr ss : [esp+0x14], 2
        je public_55d655
        push esi
        call public_59d960
        add esp, 4
        public_55d655 : nop
        mov eax, dword ptr ds : [esi+0x364]
        xor ebx, ebx
        cmp eax, ebx
        je public_55d67d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_55d674
        cmp cl, 0xFF
        je public_55d674
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55d67d
        public_55d674 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55d67d : nop
        mov dword ptr ds : [esi+0x364], ebx
        mov dword ptr ds : [esi+0x368], ebx
        mov dword ptr ds : [esi+0x36C], ebx
        mov eax, dword ptr ds : [esi+0x354]
        cmp eax, ebx
        je public_55d6b5
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_55d6ac
        cmp cl, 0xFF
        je public_55d6ac
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55d6b5
        public_55d6ac : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55d6b5 : nop
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
        UNREACHABLE_TRAP(0x55d610)
    }
}

#undef public_55d655
#undef public_55d674
#undef public_55d67d
#undef public_55d6ac
#undef public_55d6b5
