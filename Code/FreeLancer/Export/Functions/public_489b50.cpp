#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489a80);
CLANG_FORWARD_PROC_SYMBOL(public_489b50);
CLANG_FORWARD_PROC_SYMBOL(public_489f40);
CLANG_FORWARD_PROC_SYMBOL(public_59f7e0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc278);

#define public_489b86 _public_489b86
#define public_489b95 _public_489b95
#define public_489c04 _public_489c04
#define public_489c30 _public_489c30
#define public_489c54 _public_489c54

PROC_DECLARE(0x489b50, internal_489b50, public_489b50);
extern "C" NAKED register_t __cdecl internal_489b50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bc278 @0x489b58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc278
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebp, dword ptr ds : [edi+8]
        cmp ebp, 4
        jge public_489c30
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x28]
        je public_489b95
        public_489b86 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_489c54
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_489b86
        public_489b95 : nop
        mov al, byte ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xC], ecx
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0
        call public_489f40
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_59f7e0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_489c04
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], 0
        public_489c04 : nop
        test ebp, ebp
        jne public_489c54
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edx]
        add ecx, 8
        call public_489a80
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        lea esp, ss:[esp]
/*FIXUP public_489c30 : nop
        push offset public_5d248c @0x489c30*/
  FIXUP public_489c30 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d248c
        push 0xA2
/*FIXUP push offset public_5d245c @0x489c3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d245c
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x489c44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_489c54 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x489b50)
    }
}

#undef public_489b86
#undef public_489b95
#undef public_489c04
#undef public_489c30
#undef public_489c54
