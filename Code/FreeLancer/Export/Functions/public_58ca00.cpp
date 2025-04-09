#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_58ca00);
CLANG_FORWARD_PROC_SYMBOL(public_58e360);
CLANG_FORWARD_PROC_SYMBOL(public_599a60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4730);

#define public_58ca45 _public_58ca45
#define public_58ca53 _public_58ca53
#define public_58ca90 _public_58ca90
#define public_58ca9f _public_58ca9f
#define public_58cb10 _public_58cb10
#define public_58cb1e _public_58cb1e

PROC_DECLARE(0x58ca00, internal_58ca00, public_58ca00);
extern "C" NAKED register_t __cdecl internal_58ca00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4730 @0x58ca02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4730
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5e511c
        mov dword ptr ds : [esi+0x7C], offset public_5e5110
        mov ebx, dword ptr ds : [esi+0x568]
        mov edi, dword ptr ds : [esi+0x564]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], 4
        je public_58ca53
        public_58ca45 : nop
        mov ecx, edi
        call public_444ee0
        add edi, 0x64
        cmp edi, ebx
        jne public_58ca45
        public_58ca53 : nop
        mov eax, dword ptr ds : [esi+0x564]
        push eax
        call public_5b7e1d
        xor ebx, ebx
        mov dword ptr ds : [esi+0x564], ebx
        mov dword ptr ds : [esi+0x568], ebx
        mov dword ptr ds : [esi+0x56C], ebx
        mov ebp, dword ptr ds : [esi+0x4C8]
        mov edi, dword ptr ds : [esi+0x4C4]
        add esp, 4
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], 3
        je public_58ca9f
        nop 
        lea esp, ss:[esp]
        public_58ca90 : nop
        lea ecx, ds:[edi+8]
        call public_599a60
        add edi, 0xC
        cmp edi, ebp
        jne public_58ca90
        public_58ca9f : nop
        mov eax, dword ptr ds : [esi+0x4C4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x4C4], ebx
        mov dword ptr ds : [esi+0x4C8], ebx
        mov dword ptr ds : [esi+0x4CC], ebx
        mov eax, dword ptr ds : [esi+0x4B4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x4B4], ebx
        mov dword ptr ds : [esi+0x4B8], ebx
        mov dword ptr ds : [esi+0x4BC], ebx
        mov eax, dword ptr ds : [esi+0x4A4]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [esi+0x4A4], ebx
        mov dword ptr ds : [esi+0x4A8], ebx
        mov dword ptr ds : [esi+0x4AC], ebx
        mov ebp, dword ptr ds : [esi+0x498]
        mov edi, dword ptr ds : [esi+0x494]
        add esp, 0xC
        cmp edi, ebp
        mov byte ptr ss : [esp+0x1C], bl
        je public_58cb1e
        public_58cb10 : nop
        mov ecx, edi
        call public_58e360
        add edi, 0x1C
        cmp edi, ebp
        jne public_58cb10
        public_58cb1e : nop
        mov eax, dword ptr ds : [esi+0x494]
        push eax
        call public_5b7e1d
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x494], ebx
        mov dword ptr ds : [esi+0x498], ebx
        mov dword ptr ds : [esi+0x49C], ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_579620
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x58ca00)
    }
}

#undef public_58ca45
#undef public_58ca53
#undef public_58ca90
#undef public_58ca9f
#undef public_58cb10
#undef public_58cb1e
