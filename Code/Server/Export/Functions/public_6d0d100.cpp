#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cef450);
CLANG_FORWARD_PROC_SYMBOL(public_6cf63f0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6630);
CLANG_FORWARD_PROC_SYMBOL(public_6d07690);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d100);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6163d);

#define public_6d0d156 _public_6d0d156
#define public_6d0d158 _public_6d0d158
#define public_6d0d1cf _public_6d0d1cf
#define public_6d0d1d2 _public_6d0d1d2
#define public_6d0d1f8 _public_6d0d1f8
#define public_6d0d1fa _public_6d0d1fa
#define public_6d0d25e _public_6d0d25e
#define public_6d0d267 _public_6d0d267
#define public_6d0d290 _public_6d0d290
#define public_6d0d300 _public_6d0d300
#define public_6d0d331 _public_6d0d331

PROC_DECLARE(0x6d0d100, internal_6d0d100, public_6d0d100);
extern "C" NAKED register_t __cdecl internal_6d0d100()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d6163d @0x6d0d108*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6163d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xEC
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x10C]
        test ebp, ebp
        mov ecx, dword ptr ss : [esp+0x110]
        mov dword ptr ds : [ecx+0x14], eax
        je public_6d0d156
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_6d0d156
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0d156
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 1
        cmp dl, 1
        je public_6d0d158
        public_6d0d156 : nop
        xor eax, eax
        public_6d0d158 : nop
        mov edx, dword ptr ss : [esp+0x114]
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x2C]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov esi, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [ecx+8], edx
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax+4]
        push 0
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ds : [public_6d64a5c]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push ecx
        call dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ss : [esp+0x110]
        mov eax, dword ptr ss : [ebp]
        push ecx
        push ebx
        mov ecx, ebp
        call dword ptr ds : [eax+0x170]
        lea esi, ds:[ebx+0x34]
        mov ecx, esi
        call public_6d11850
        mov edx, dword ptr ds : [esi+8]
        xor edi, edi
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+8], ebp
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_6d0d1cf
        mov dword ptr ds : [ecx], eax
        jmp public_6d0d1d2
        public_6d0d1cf : nop
        mov dword ptr ds : [esi+4], eax
        public_6d0d1d2 : nop
        mov dword ptr ds : [esi+8], eax
        lea eax, ss:[ebp+0xC]
        cmp eax, edi
        je public_6d0d1f8
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edi
        je public_6d0d1f8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_6d0d1f8
        mov esi, eax
        jmp public_6d0d1fa
        public_6d0d1f8 : nop
        xor esi, esi
        public_6d0d1fa : nop
        lea ecx, ss:[esp+0x1C]
        call public_6cf63f0
        mov dword ptr ss : [esp+0xC8], edi
        mov dword ptr ss : [esp+0xCC], edi
        mov dword ptr ss : [esp+0xD0], edi
        mov dword ptr ss : [esp+0xEC], 0
        mov dword ptr ss : [esp+0xF0], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xF4], edi
        mov byte ptr ss : [esp+0xF8], 0
        mov dword ptr ss : [esp+0x1C], offset public_6d65f78
        cmp esi, edi
        mov dword ptr ss : [esp+0x104], edi
        je public_6d0d25e
        lea edx, ss:[esp+0x1C]
        push esi
        push edx
        call public_6d07690
        add esp, 8
        public_6d0d25e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0d290
        public_6d0d267 : nop
        mov eax, dword ptr ds : [esi+0x40]
        push eax
        mov ecx, ebp
        call public_6cef450
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ds:[esi+8]
        mov byte ptr ss : [esp+0xCC], al
        call public_6cf6630
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d0d267
        xor edi, edi
        public_6d0d290 : nop
        mov dword ptr ss : [esp+0x1C], offset public_6d65f68
        mov eax, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0x110], 2
        call dword ptr ds : [public_6d64394]
        mov eax, dword ptr ss : [esp+0xAC]
        push eax
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0xA4]
        mov dword ptr ss : [esp+0xB0], edi
        mov dword ptr ss : [esp+0xB4], edi
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, eax
        mov byte ptr ss : [esp+0x104], 1
        mov esi, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d0d331
        lea esp, ss:[esp]
        public_6d0d300 : nop
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0xA4]
        call dword ptr ds : [public_6d643d0]
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6d0d300
        mov eax, dword ptr ss : [esp+0xA0]
        public_6d0d331 : nop
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x94]
        push ecx
        mov dword ptr ss : [esp+0xA8], edi
        mov dword ptr ss : [esp+0xAC], edi
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x104]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF8
        ret 0x10
        UNREACHABLE_TRAP(0x6d0d100)
    }
}

#undef public_6d0d156
#undef public_6d0d158
#undef public_6d0d1cf
#undef public_6d0d1d2
#undef public_6d0d1f8
#undef public_6d0d1fa
#undef public_6d0d25e
#undef public_6d0d267
#undef public_6d0d290
#undef public_6d0d300
#undef public_6d0d331
