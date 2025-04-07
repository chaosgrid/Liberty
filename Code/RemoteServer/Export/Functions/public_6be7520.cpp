#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5710);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6be7520);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a80a);

#define public_6be7557 _public_6be7557
#define public_6be756a _public_6be756a
#define public_6be7590 _public_6be7590
#define public_6be75b5 _public_6be75b5
#define public_6be75d8 _public_6be75d8
#define public_6be75ee _public_6be75ee
#define public_6be761f _public_6be761f

PROC_DECLARE(0x6be7520, internal_6be7520, public_6be7520);
extern "C" NAKED register_t __cdecl internal_6be7520()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a80a @0x6be7522*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a80a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xAC]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        je public_6be7557
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be7557 : nop
        mov eax, dword ptr ss : [ebp+0xA4]
        cmp eax, ebx
        je public_6be756a
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be756a : nop
        mov dword ptr ss : [ebp], offset public_6c0cc28
        mov edi, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea esi, ss:[ebp+0x80]
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x10], eax
        je public_6be75b5
        nop 
        public_6be7590 : nop
        push ebx
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
        jne public_6be7590
        public_6be75b5 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c09aaa
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov ebx, dword ptr ss : [ebp+0x78]
        mov esi, dword ptr ds : [ebx]
        lea edi, ss:[ebp+0x74]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 2
        je public_6be75ee
        public_6be75d8 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6c0b0c4]
        cmp esi, ebx
        jne public_6be75d8
        public_6be75ee : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        xor esi, esi
        add esp, 4
        lea ecx, ss:[ebp+0x70]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], esi
        mov byte ptr ss : [esp+0x28], 1
        call public_6bdc790
        mov eax, dword ptr ss : [ebp+0x44]
        cmp eax, esi
        je public_6be761f
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be761f : nop
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6bebe40
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6be7520)
    }
}

#undef public_6be7557
#undef public_6be756a
#undef public_6be7590
#undef public_6be75b5
#undef public_6be75d8
#undef public_6be75ee
#undef public_6be761f
