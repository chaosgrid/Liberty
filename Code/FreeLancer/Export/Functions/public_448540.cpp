#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_448540);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9a2b);

#define public_448572 _public_448572
#define public_448588 _public_448588
#define public_4485a0 _public_4485a0
#define public_4485d9 _public_4485d9
#define public_4485df _public_4485df
#define public_448608 _public_448608
#define public_448628 _public_448628
#define public_448630 _public_448630
#define public_448646 _public_448646
#define public_448650 _public_448650
#define public_44866a _public_44866a

PROC_DECLARE(0x448540, internal_448540, public_448540);
extern "C" NAKED register_t __cdecl internal_448540()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9a2b @0x448542*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9a2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x6C]
        xor ebp, ebp
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], ecx
        je public_4485a0
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_448588
        public_448572 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6188]
        cmp esi, ebx
        jne public_448572
        public_448588 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        push edi
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        call public_5b7e1d
        add esp, 8
        public_4485a0 : nop
        push 0xC
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        cmp edi, ebp
        mov dword ptr ss : [esp+0x24], ebp
        je public_4485d9
        mov cl, byte ptr ss : [esp+0x2C]
        push 0x28
        mov byte ptr ds : [edi], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebp
        mov dword ptr ss : [esp+0x10], edi
        jmp public_4485df
        public_4485d9 : nop
        mov dword ptr ss : [esp+0x10], ebp
        mov edi, ebp
        public_4485df : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp edi, ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [edx+0x6C], edi
        je public_44866a
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov ecx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], ecx
        je public_448628
        public_448608 : nop
        cmp ebp, dword ptr ss : [esp+0x2C]
        je public_448628
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        lea esi, ss:[ebp+8]
        mov ecx, 8
        rep movsd
        mov ebp, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x10]
        jne public_448608
        public_448628 : nop
        cmp eax, ebx
        mov esi, eax
        je public_448646
        mov edi, edi
        public_448630 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6188]
        cmp esi, ebx
        jne public_448630
        public_448646 : nop
        cmp ebp, dword ptr ss : [esp+0x2C]
        mov esi, ebp
        je public_44866a
        mov edi, edi
        public_448650 : nop
        lea ecx, ds:[esi+8]
        push ecx
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_5c6228]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x2C]
        jne public_448650
        public_44866a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x448540)
    }
}

#undef public_448572
#undef public_448588
#undef public_4485a0
#undef public_4485d9
#undef public_4485df
#undef public_448608
#undef public_448628
#undef public_448630
#undef public_448646
#undef public_448650
#undef public_44866a
