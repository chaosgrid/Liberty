#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5710);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bf0c10);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a94a);

#define public_6bf0c51 _public_6bf0c51
#define public_6bf0c64 _public_6bf0c64
#define public_6bf0c77 _public_6bf0c77
#define public_6bf0ca0 _public_6bf0ca0
#define public_6bf0cc5 _public_6bf0cc5
#define public_6bf0cf0 _public_6bf0cf0
#define public_6bf0d06 _public_6bf0d06
#define public_6bf0d39 _public_6bf0d39

PROC_DECLARE(0x6bf0c10, internal_6bf0c10, public_6bf0c10);
extern "C" NAKED register_t __cdecl internal_6bf0c10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a94a @0x6bf0c12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a94a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xDC]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ds : [ebx], offset public_6c0c968
        je public_6bf0c51
        push eax
        call public_6c09aaa
        add esp, 4
        mov dword ptr ds : [ebx+0xDC], ebp
        public_6bf0c51 : nop
        mov eax, dword ptr ds : [ebx+0xD4]
        cmp eax, ebp
        je public_6bf0c64
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bf0c64 : nop
        mov eax, dword ptr ds : [ebx+0xCC]
        cmp eax, ebp
        je public_6bf0c77
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bf0c77 : nop
        push esi
        push edi
        mov dword ptr ds : [ebx], offset public_6c0cc28
        mov edi, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ds:[ebx+0x80]
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_6bf0cc5
        lea ecx, ds:[ecx]
        public_6bf0ca0 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6bd5710
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6c0b0c8]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6bf0ca0
        public_6bf0cc5 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c09aaa
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov ebp, dword ptr ds : [ebx+0x78]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+0x74]
        add esp, 4
        cmp esi, ebp
        mov byte ptr ss : [esp+0x28], 2
        je public_6bf0d06
        lea esp, ss:[esp]
        public_6bf0cf0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6c0b0c4]
        cmp esi, ebp
        jne public_6bf0cf0
        public_6bf0d06 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        xor esi, esi
        add esp, 4
        lea ecx, ds:[ebx+0x70]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6bdc790
        mov eax, dword ptr ds : [ebx+0x44]
        pop edi
        cmp eax, esi
        pop esi
        je public_6bf0d39
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bf0d39 : nop
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_6bebe40
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6bf0c10)
    }
}

#undef public_6bf0c51
#undef public_6bf0c64
#undef public_6bf0c77
#undef public_6bf0ca0
#undef public_6bf0cc5
#undef public_6bf0cf0
#undef public_6bf0d06
#undef public_6bf0d39
