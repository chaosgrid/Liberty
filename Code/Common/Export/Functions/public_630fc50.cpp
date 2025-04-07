#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63963c1);

#define public_630fd43 _public_630fd43
#define public_630fd8c _public_630fd8c
#define public_630fd97 _public_630fd97
#define public_630fda2 _public_630fda2
#define public_630fdbc _public_630fdbc
#define public_630fddb _public_630fddb
#define public_630fde4 _public_630fde4
#define public_630fded _public_630fded

PROC_DECLARE(0x630fc50, internal_630fc50, public_630fc50);
extern "C" NAKED register_t __cdecl internal_630fc50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63963c1 @0x630fc52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63963c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        mov al, byte ptr ss : [esp+0x38]
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x14], al
        call dword ptr ds : [public_63991b8]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov esi, dword ptr ss : [esp+0x44]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x3C], ebx
        je public_630fddb
        mov edi, dword ptr ss : [esp+0x48]
        cmp edi, ebx
        je public_630fddb
        push edi
        call dword ptr ds : [public_6399328]
        mov ecx, edi
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, edx
        mov byte ptr ss : [ebp+0x1564], bl
        mov ecx, dword ptr ds : [public_63991c0]
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebx
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x54], 1
        call dword ptr ds : [public_63991a8]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+0x14], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x1C], ecx
        mov dword ptr ss : [ebp+0x20], edx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x24], ebx
        mov byte ptr ss : [ebp+0x28], bl
        je public_630fd43
        mov dword ptr ss : [ebp+0x20], ebx
        public_630fd43 : nop
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x44], 1
        call dword ptr ds : [public_6399198]
        mov eax, dword ptr ss : [esp+0x20]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_630fda2
        cmp dword ptr ss : [esp+0x24], ebx
        mov esi, dword ptr ds : [public_639913c]
        je public_630fd97
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_630fd8c
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_630fd8c : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call esi
        mov dword ptr ss : [esp+0x24], ebx
        public_630fd97 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call esi
        mov dword ptr ss : [esp+0x20], edi
        public_630fda2 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_630fdbc
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_630fdbc : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_630fded
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_630fde4
        cmp cl, 0xFF
        je public_630fde4
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_630fded
        public_630fddb : nop
        mov byte ptr ss : [esp+0x48], bl
        jmp public_630fd43
        public_630fde4 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_630fded : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov al, byte ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x630fc50)
    }
}

#undef public_630fd43
#undef public_630fd8c
#undef public_630fd97
#undef public_630fda2
#undef public_630fdbc
#undef public_630fddb
#undef public_630fde4
#undef public_630fded
