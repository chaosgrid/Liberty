#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442da0);
CLANG_FORWARD_PROC_SYMBOL(public_485a60);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5a1fe0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc198);

#define public_485ada _public_485ada
#define public_485ae6 _public_485ae6
#define public_485b11 _public_485b11
#define public_485b5e _public_485b5e
#define public_485b73 _public_485b73
#define public_485b8c _public_485b8c

PROC_DECLARE(0x485a60, internal_485a60, public_485a60);
extern "C" NAKED register_t __cdecl internal_485a60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc198 @0x485a62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc198
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [edi], offset public_5d1d5c
        mov dword ptr ds : [edi+0x7C], offset public_5d1d50
        mov dword ptr ds : [edi+0x32C], offset public_5d1d48
        lea ecx, ds:[edi+0xE98]
        mov dword ptr ss : [esp+0x24], 4
        call public_5a1fe0
        lea ecx, ds:[edi+0x5DC]
        mov byte ptr ss : [esp+0x24], 3
        call public_5a1fe0
        mov eax, dword ptr ds : [edi+0x354]
        xor ebx, ebx
        cmp eax, ebx
        je public_485ae6
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_485ada
        cmp cl, 0xFF
        je public_485ada
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_485ae6
        public_485ada : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_485ae6 : nop
        mov dword ptr ds : [edi+0x354], ebx
        mov dword ptr ds : [edi+0x358], ebx
        mov dword ptr ds : [edi+0x35C], ebx
        mov eax, dword ptr ds : [edi+0x348]
        mov ebp, dword ptr ds : [edi+0x344]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ebp
        je public_485b8c
        push esi
        public_485b11 : nop
        push 1
        lea ecx, ss:[ebp+0x14]
        mov byte ptr ss : [esp+0x2C], 5
        call dword ptr ds : [public_5c6fb8]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        lea esi, ss:[ebp+4]
        mov byte ptr ss : [esp+0x28], 1
        je public_485b73
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6fbc]
        cmp byte ptr ds : [eax], bl
        je public_485b5e
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6fbc]
        cmp byte ptr ds : [eax], 0xFF
        je public_485b5e
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6fbc]
        dec byte ptr ds : [eax]
        jmp public_485b73
        public_485b5e : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+4]
        add edx, 2
        push edx
        sub eax, 2
        push eax
        mov ecx, esi
        call public_442da0
        public_485b73 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add ebp, 0x24
        cmp ebp, eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ss : [esp+0x14], ebp
        jne public_485b11
        pop esi
        public_485b8c : nop
        mov eax, dword ptr ds : [edi+0x344]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[edi+0x32C]
        mov dword ptr ds : [edi+0x344], ebx
        mov dword ptr ds : [edi+0x348], ebx
        mov dword ptr ds : [edi+0x34C], ebx
        mov byte ptr ss : [esp+0x24], bl
        call public_576010
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_59fa50
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x485a60)
    }
}

#undef public_485ada
#undef public_485ae6
#undef public_485b11
#undef public_485b5e
#undef public_485b73
#undef public_485b8c
