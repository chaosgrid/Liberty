#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee360);
CLANG_FORWARD_PROC_SYMBOL(public_6d099e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d613ab);

#define public_6d09a38 _public_6d09a38
#define public_6d09a3e _public_6d09a3e
#define public_6d09a86 _public_6d09a86
#define public_6d09a88 _public_6d09a88
#define public_6d09b3b _public_6d09b3b
#define public_6d09b45 _public_6d09b45
#define public_6d09b65 _public_6d09b65
#define public_6d09b6b _public_6d09b6b

PROC_DECLARE(0x6d099e0, internal_6d099e0, public_6d099e0);
extern "C" NAKED register_t __cdecl internal_6d099e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d613ab @0x6d099e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d613ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebx
        push esi
        push edi
        push 0x60
        mov ebx, ecx
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor edi, edi
        cmp esi, edi
        mov dword ptr ss : [esp+0x78], edi
        je public_6d09a38
        mov ecx, esi
        call public_6cee360
        mov dword ptr ds : [esi], offset public_6d680d4
        mov dword ptr ds : [esi+4], offset public_6d68054
        mov dword ptr ds : [esi+0xC], offset public_6d68048
        mov dword ptr ss : [esp+0xC], esi
        jmp public_6d09a3e
        public_6d09a38 : nop
        mov dword ptr ss : [esp+0xC], edi
        mov esi, edi
        public_6d09a3e : nop
        push ebp
        mov ebp, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x164]
        mov ecx, dword ptr ss : [ebp+4]
        call dword ptr ds : [public_6d6439c]
        lea eax, ds:[esi+0xC]
        cmp eax, edi
        je public_6d09a86
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_6d09a86
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x67
        cmp cl, 0x67
        je public_6d09a88
        public_6d09a86 : nop
        xor eax, eax
        public_6d09a88 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x70], edx
        lea ecx, ss:[ebp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x2C], ecx
        lea esi, ss:[ebp+0x18]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x28], edx
        add ebp, 0x3C
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x20], 0xBF800000
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x18], ebx
        mov ecx, 9
        lea edi, ss:[esp+0x30]
        rep movsd
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x58], ecx
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0xA0]
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push 0
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        mov al, byte ptr ds : [ebx+0x90]
        test al, al
        pop ebp
        je public_6d09b3b
        mov eax, dword ptr ds : [ebx+0x94]
        test eax, eax
        je public_6d09b3b
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx+0x94], ecx
        jmp public_6d09b45
        public_6d09b3b : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d09b45 : nop
        mov edx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ds : [ebx+0x8C]
        test ecx, ecx
        je public_6d09b65
        mov dword ptr ds : [ecx], eax
        jmp public_6d09b6b
        public_6d09b65 : nop
        mov dword ptr ds : [ebx+0x88], eax
        public_6d09b6b : nop
        mov ecx, dword ptr ss : [esp+0x70]
        pop edi
        mov dword ptr ds : [ebx+0x8C], eax
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 4
        UNREACHABLE_TRAP(0x6d099e0)
    }
}

#undef public_6d09a38
#undef public_6d09a3e
#undef public_6d09a86
#undef public_6d09a88
#undef public_6d09b3b
#undef public_6d09b45
#undef public_6d09b65
#undef public_6d09b6b
