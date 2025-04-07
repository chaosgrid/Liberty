#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b50);
CLANG_FORWARD_PROC_SYMBOL(public_62c1220);
CLANG_FORWARD_PROC_SYMBOL(public_62c1490);
CLANG_FORWARD_PROC_SYMBOL(public_62c1880);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63949b6);

#define public_62c131f _public_62c131f
#define public_62c1321 _public_62c1321
#define public_62c132b _public_62c132b
#define public_62c1369 _public_62c1369

PROC_DECLARE(0x62c1220, internal_62c1220, public_62c1220);
extern "C" NAKED register_t __cdecl internal_62c1220()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63949b6 @0x62c1222*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63949b6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_6285b50
        xor ebx, ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+0x10], offset public_639bf6c
        lea ecx, ds:[esi+0x18]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x60], eax
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC0], ebx
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ds : [esi], offset public_639f3f4
        mov dword ptr ds : [esi+0x10], offset public_639f3e4
        je public_62c131f
        add eax, 8
        jmp public_62c1321
        public_62c131f : nop
        xor eax, eax
        public_62c1321 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62c132b
        push eax
        call public_6341610
        public_62c132b : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x2C]
        push 1
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [esi+0x20], edi
        mov dword ptr ds : [esi+0x24], ebp
        mov byte ptr ds : [esi+0x96], 1
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [eax+0x130]
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ss : [esp+0x10], eax
        je public_62c1369
        mov byte ptr ds : [esi+0x96], bl
        public_62c1369 : nop
        lea eax, ds:[esi+0x28]
        push eax
        push edi
        mov ecx, esi
        mov byte ptr ds : [esi+0x95], bl
        mov byte ptr ds : [esi+0xF8], bl
        call public_62c1880
        lea ecx, ds:[esi+0x5C]
        push ecx
        push ebp
        mov ecx, esi
        call public_62c1880
        mov dl, byte ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, esi
        mov byte ptr ds : [esi+0x97], dl
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x90], ebx
        mov byte ptr ds : [esi+0x94], bl
        mov dword ptr ds : [esi+0xE8], ebx
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
        call public_62c1490
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 0x14
        UNREACHABLE_TRAP(0x62c1220)
    }
}

#undef public_62c131f
#undef public_62c1321
#undef public_62c132b
#undef public_62c1369
