#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_517180);
CLANG_FORWARD_PROC_SYMBOL(public_518600);
CLANG_FORWARD_PROC_SYMBOL(public_51a210);
CLANG_FORWARD_PROC_SYMBOL(public_51ad30);
CLANG_FORWARD_PROC_SYMBOL(public_51b2f0);
CLANG_FORWARD_PROC_SYMBOL(public_51e100);
CLANG_FORWARD_PROC_SYMBOL(public_51ea20);
CLANG_FORWARD_PROC_SYMBOL(public_549300);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1238);

#define public_549411 _public_549411

PROC_DECLARE(0x549300, internal_549300, public_549300);
extern "C" NAKED register_t __cdecl internal_549300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1238 @0x549302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1238
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], offset public_5cbed8
        xor ebx, ebx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x18], ebx
        call public_517180
        lea ecx, ds:[esi+0x1B0]
        mov byte ptr ss : [esp+0x18], 1
        call public_518600
        lea ecx, ds:[esi+0x3C8]
        mov byte ptr ss : [esp+0x18], 2
        call public_51a210
        lea ecx, ds:[esi+0x500]
        mov byte ptr ss : [esp+0x18], 3
        call public_51ad30
        lea edi, ds:[esi+0x60C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 4
        call public_51b2f0
        mov dword ptr ds : [edi+0x140], 0x3F800000
        mov dword ptr ds : [edi+0x148], 0x3FC00000
        mov dword ptr ds : [edi+0x14C], 0x3F59999A
        mov dword ptr ds : [edi+0x150], 0x42C80000
        mov dword ptr ds : [edi], offset public_5e061c
        lea ecx, ds:[esi+0x760]
        mov byte ptr ss : [esp+0x18], 5
        call public_51e100
        lea edi, ds:[esi+0x9A4]
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 6
        call public_51b2f0
        mov dword ptr ds : [edi], offset public_5e0594
        lea ecx, ds:[esi+0xA9C]
        mov byte ptr ss : [esp+0x18], 7
        call public_51ea20
        mov dword ptr ds : [esi], offset public_5e0554
        mov dword ptr ds : [esi+4], offset public_5e0548
        mov byte ptr ds : [esi+8], bl
        mov dword ptr ds : [esi+0xBA0], ebx
        mov byte ptr ds : [esi+9], bl
        mov byte ptr ds : [esi+0xA], bl
        cmp dword ptr ds : [public_679744], ebx
        mov byte ptr ss : [esp+0x18], 8
        je public_549411
        push ebx
        mov ecx, offset public_679744
        call dword ptr ds : [public_5c62a8]
        public_549411 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0xBAA], bl
        mov byte ptr ds : [esi+0xBAB], bl
        mov byte ptr ds : [esi+0xBA9], bl
        mov byte ptr ds : [esi+0xBA8], bl
        mov byte ptr ds : [esi+0xB], bl
        pop edi
        mov dword ptr ds : [esi+0xBA4], 1
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x549300)
    }
}

#undef public_549411
