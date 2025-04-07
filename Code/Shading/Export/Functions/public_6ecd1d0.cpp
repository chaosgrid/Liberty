#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb22b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecd320);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfae0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c70);

#define public_6ecd1f4 _public_6ecd1f4
#define public_6ecd2a7 _public_6ecd2a7
#define public_6ecd2c3 _public_6ecd2c3
#define public_6ecd2e2 _public_6ecd2e2
#define public_6ecd2f4 _public_6ecd2f4
#define public_6ecd302 _public_6ecd302

PROC_DECLARE(0x6ecd1d0, internal_6ecd1d0, public_6ecd1d0);
extern "C" NAKED register_t __cdecl internal_6ecd1d0()
{
    __asm
    {
        mov eax, 0x2050
        call public_6ed0c70
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2060]
        cmp ebp, 1
        push esi
        push edi
        mov eax, offset public_6ed5060
        je public_6ecd1f4
        mov eax, offset public_6ed51c0
        public_6ecd1f4 : nop
        mov edi, dword ptr ss : [esp+0x2070]
        mov esi, dword ptr ss : [esp+0x206C]
        push edi
        push esi
        push eax
        lea eax, ss:[esp+0x6C]
/*FIXUP push offset public_6ed51a0 @0x6ecd209*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed51a0
        push eax
        call public_6eb22b0
        push eax
        push 0x362
/*FIXUP push offset public_6ed50a0 @0x6ecd21a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed50a0
        mov ecx, 0x100003
/*FIXUP push offset public_6ed40a0 @0x6ecd224*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed40a0
        push ecx
        mov ecx, dword ptr ds : [public_6ed1004]
        call dword ptr ds : [ecx]
        push 0x40
        xor ebx, ebx
        lea edx, ss:[esp+0x4C]
        push edi
        push edx
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x50], ebx
        call dword ptr ds : [public_6ed1028]
        push esi
        mov byte ptr ss : [esp+0x97], bl
        mov dword ptr ss : [esp+0x4C], ebp
        call public_6ecfae0
        push esi
        mov esi, dword ptr ds : [public_6ed108c]
        mov dword ptr ss : [esp+0x4C], eax
        call esi
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x5C]
        push eax
        call esi
        mov ebp, dword ptr ss : [esp+0x20A4]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x5C], eax
        mov esi, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [esi+4]
        add esp, 0x40
        push 0x18
        call public_6ed0c5c
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_6ecd2a7
        mov edi, eax
        public_6ecd2a7 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx], eax
        je public_6ecd2c3
        lea eax, ss:[esp+0x10]
        push eax
        call public_6ecd320
        public_6ecd2c3 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [public_6ed1054]
        inc edx
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x10], edx
        je public_6ecd2e2
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebx
        public_6ecd2e2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_6ecd2f4
        push eax
        call esi
        add esp, 4
        mov dword ptr ss : [esp+0x18], ebx
        public_6ecd2f4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        je public_6ecd302
        push eax
        call esi
        add esp, 4
        public_6ecd302 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2050
        ret 0x10
        UNREACHABLE_TRAP(0x6ecd1d0)
    }
}

#undef public_6ecd1f4
#undef public_6ecd2a7
#undef public_6ecd2c3
#undef public_6ecd2e2
#undef public_6ecd2f4
#undef public_6ecd302
