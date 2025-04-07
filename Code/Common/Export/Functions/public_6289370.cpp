#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62814b0);
CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_6289370);
CLANG_FORWARD_PROC_SYMBOL(public_628c860);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393233);

#define public_628942a _public_628942a
#define public_6289432 _public_6289432
#define public_6289448 _public_6289448
#define public_62894af _public_62894af
#define public_62894b1 _public_62894b1
#define public_62894ca _public_62894ca

PROC_DECLARE(0x6289370, internal_6289370, public_6289370);
extern "C" NAKED register_t __cdecl internal_6289370()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393233 @0x6289372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393233
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x20]
        call public_63486c0
        mov esi, dword ptr ss : [esp+0x90]
        lea eax, ds:[esi+0x1E]
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x84], 0
        call public_6348720
        fld dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [esi+0xC]
        movzx edx, byte ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x3C], ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x64], ecx
        lea edi, ds:[esi+0x14]
        push edi
        mov ecx, offset public_63fc098
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x6C], edx
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc09c]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x90], eax
        je public_628942a
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_628942a
        lea eax, ss:[esp+0x90]
        jmp public_6289432
        public_628942a : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6289432 : nop
        mov eax, dword ptr ds : [eax]
        lea ebp, ds:[eax+0x10]
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        jne public_6289448
        mov eax, dword ptr ds : [public_63fc0bc]
        mov dword ptr ss : [esp+0x38], eax
        public_6289448 : nop
        mov edx, dword ptr ss : [esp+0x8C]
        mov edi, dword ptr ss : [esp+0x88]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        lea eax, ds:[edi+8]
        push eax
        lea ecx, ds:[edi+0x2C]
        push ecx
        mov ecx, ebp
        call public_628c860
        mov dword ptr ds : [edi+0x54], eax
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edi+0x50], edx
        mov dword ptr ds : [eax+0xA4], edi
        mov al, byte ptr ds : [esi+0x1D]
        test al, al
        je public_62894ca
        mov eax, dword ptr ds : [edi+0x54]
        test eax, eax
        je public_62894ca
        push 0x14
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x90], eax
        test eax, eax
        mov byte ptr ss : [esp+0x80], 1
        je public_62894af
        push edi
        mov ecx, eax
        call public_62814b0
        jmp public_62894b1
        public_62894af : nop
        xor eax, eax
        public_62894b1 : nop
        push 1
        push 1
        mov ecx, eax
        mov byte ptr ss : [esp+0x88], 0
        mov dword ptr ds : [edi+0x84], eax
        call public_6281510
        public_62894ca : nop
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call public_6348710
        mov ecx, dword ptr ss : [esp+0x78]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x6289370)
    }
}

#undef public_628942a
#undef public_6289432
#undef public_6289448
#undef public_62894af
#undef public_62894b1
#undef public_62894ca
