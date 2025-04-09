#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489e80);
CLANG_FORWARD_PROC_SYMBOL(public_4b6b60);
CLANG_FORWARD_PROC_SYMBOL(public_4e54c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be862);

#define public_4e5596 _public_4e5596
#define public_4e55d0 _public_4e55d0
#define public_4e55ec _public_4e55ec
#define public_4e55f6 _public_4e55f6
#define public_4e5603 _public_4e5603

PROC_DECLARE(0x4e54c0, internal_4e54c0, public_4e54c0);
extern "C" NAKED register_t __cdecl internal_4e54c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5be862 @0x4e54c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be862
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push esi
        call public_54baf0
        mov esi, eax
        xor ebx, ebx
        cmp esi, ebx
        je public_4e5603
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        je public_4e5603
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x88]
        test eax, eax
        jne public_4e5603
        test dword ptr ss : [esp+0x10], 0x7F0000
        je public_4e5603
        mov ecx, dword ptr ds : [public_674ad4]
        push ebx
        push ecx
        call public_489e80
        mov dl, byte ptr ss : [esp+0x13]
        add esp, 8
        mov byte ptr ss : [esp+0x24], dl
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [eax+0x120]
        cmp eax, ebx
        jne public_4e55f6
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        xor esi, esi
        call dword ptr ds : [eax+0x150]
        cmp eax, ebx
        je public_4e5596
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 1
        cmp cl, 1
        jne public_4e5596
        mov ecx, eax
        call dword ptr ds : [public_5c6590]
        mov esi, dword ptr ds : [eax+8]
        public_4e5596 : nop
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6100]
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        mov byte ptr ss : [esp+0x48], 1
        call public_4b6b60
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax]
        add esp, 8
        cmp esi, eax
        mov byte ptr ss : [esp+0x40], bl
        mov edi, eax
        je public_4e55ec
        lea esp, ss:[esp]
        public_4e55d0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6188]
        cmp esi, edi
        jne public_4e55d0
        mov eax, dword ptr ss : [esp+0x20]
        public_4e55ec : nop
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        public_4e55f6 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        call public_5b7e1d
        add esp, 4
        public_4e5603 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x4e54c0)
    }
}

#undef public_4e5596
#undef public_4e55d0
#undef public_4e55ec
#undef public_4e55f6
#undef public_4e5603
