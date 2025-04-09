#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_576ac0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3ad9);

#define public_576af7 _public_576af7
#define public_576b0c _public_576b0c
#define public_576b3a _public_576b3a
#define public_576b43 _public_576b43

PROC_DECLARE(0x576ac0, internal_576ac0, public_576ac0);
extern "C" NAKED register_t __cdecl internal_576ac0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3ad9 @0x576ac2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3ad9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov ebp, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x20], 0
        je public_576b0c
        public_576af7 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_516f70
        cmp esi, ebp
        jne public_576af7
        public_576b0c : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_5b7e1d
        xor esi, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, esi
        je public_576b43
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_576b3a
        cmp cl, 0xFF
        je public_576b3a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_576b43
        public_576b3a : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_576b43 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x576ac0)
    }
}

#undef public_576af7
#undef public_576b0c
#undef public_576b3a
#undef public_576b43
