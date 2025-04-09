#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447120);
CLANG_FORWARD_PROC_SYMBOL(public_447210);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b99bb);

#define public_4471c3 _public_4471c3
#define public_4471c5 _public_4471c5

PROC_DECLARE(0x447120, internal_447120, public_447120);
extern "C" NAKED register_t __cdecl internal_447120()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b99bb @0x447128*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b99bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp+0x30], eax
        lea ecx, ds:[ebx+4]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x34]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        push esi
        push edi
        mov dword ptr ds : [edx+8], ecx
        lea esi, ds:[ebx+0x10]
        lea edi, ss:[ebp+0x40]
        mov ecx, 9
        rep movsd
        mov edx, dword ptr ds : [ebx+0x34]
        push edx
        lea eax, ss:[ebp+0x64]
        push eax
        call dword ptr ds : [public_5c60cc]
        mov cl, byte ptr ds : [ebx+0x38]
        mov edx, dword ptr ss : [ebp]
        mov byte ptr ss : [ebp+0x68], cl
        mov eax, dword ptr ds : [ebx+0x3C]
        add esp, 8
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0xC]
        push 0xC
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_4471c3
        mov cl, byte ptr ss : [esp+0x20]
        push 0x28
        mov byte ptr ds : [esi], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        mov ecx, esi
        jmp public_4471c5
        public_4471c3 : nop
        xor ecx, ecx
        public_4471c5 : nop
        mov dword ptr ss : [ebp+0x6C], ecx
        mov edx, dword ptr ds : [ebx+0x40]
        push edx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6208]
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xAC], edi
        call public_447210
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x18], edi
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x15], 3
        mov byte ptr ss : [ebp+0x16], 0
        mov byte ptr ss : [ebp+0x14], 0
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x447120)
    }
}

#undef public_4471c3
#undef public_4471c5
