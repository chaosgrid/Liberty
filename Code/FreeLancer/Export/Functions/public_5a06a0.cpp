#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59efa0);
CLANG_FORWARD_PROC_SYMBOL(public_5a06a0);

#define public_5a075a _public_5a075a

PROC_DECLARE(0x5a06a0, internal_5a06a0, public_5a06a0);
extern "C" NAKED register_t __cdecl internal_5a06a0()
{
    __asm
    {
        push ecx
        push esi
        push 0x15
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5a075a
        add esi, 0x80
        mov ecx, esi
        call public_420d60
        test al, al
        je public_5a075a
        push 0xB71
        call public_421ed0
        movzx eax, byte ptr ds : [public_679bb4]
        mov dword ptr ss : [esp+8], eax
        add esp, 4
        push 0
        fild dword ptr ss : [esp+8]
        push 0x3F800000
        push 0
/*FIXUP push offset public_67dbf8 @0x5a06f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x14]
        movzx ecx, byte ptr ds : [public_679bb5]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, esi
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x18]
        movzx edx, byte ptr ds : [public_679bb6]
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x1C]
        movzx eax, byte ptr ds : [public_679bb7]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [esi+0x24]
        call public_59efa0
        push 0xB71
        call public_421ed0
        add esp, 4
        public_5a075a : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5a06a0)
    }
}

#undef public_5a075a
