#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_557700);
CLANG_FORWARD_PROC_SYMBOL(public_558310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c153b);

#define public_558370 _public_558370
#define public_558372 _public_558372
#define public_558415 _public_558415
#define public_558417 _public_558417
#define public_55843a _public_55843a
#define public_55844e _public_55844e

PROC_DECLARE(0x558310, internal_558310, public_558310);
extern "C" NAKED register_t __cdecl internal_558310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c153b @0x558312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c153b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x70
        push ebx
        push ebp
        push esi
        push edi
        push 8
        mov ebp, ecx
        call public_5b7e84
        mov ebx, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebx
        test ebx, ebx
        mov dword ptr ss : [esp+0x88], 0
        je public_558415
        push 0x7C
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_558370
        mov ecx, dword ptr ss : [esp+0x90]
        push ecx
        mov ecx, eax
        call public_557700
        jmp public_558372
        public_558370 : nop
        xor eax, eax
        public_558372 : nop
        mov ecx, 9
        lea esi, ss:[esp+0x2C]
        lea edi, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        rep movsd
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ds : [ebx], eax
        lea edi, ds:[eax+0x4C]
        mov eax, dword ptr ss : [esp+0x94]
        mov ecx, 0xC
        lea esi, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x7C], edx
        rep movsd
        mov dword ptr ds : [ebx+4], eax
        jmp public_558417
        public_558415 : nop
        xor ebx, ebx
        public_558417 : nop
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_55843a
        mov edi, eax
        public_55843a : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_55844e
        mov dword ptr ds : [eax], ebx
        public_55844e : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x80]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x7C
        ret 8
        UNREACHABLE_TRAP(0x558310)
    }
}

#undef public_558370
#undef public_558372
#undef public_558415
#undef public_558417
#undef public_55843a
#undef public_55844e
