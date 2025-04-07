#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd5bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a30d);

#define public_6bd5ae0 _public_6bd5ae0
#define public_6bd5af6 _public_6bd5af6
#define public_6bd5b25 _public_6bd5b25
#define public_6bd5b4a _public_6bd5b4a
#define public_6bd5b79 _public_6bd5b79
#define public_6bd5b85 _public_6bd5b85
#define public_6bd5bb4 _public_6bd5bb4
#define public_6bd5bc0 _public_6bd5bc0

PROC_DECLARE(0x6bd5aa0, internal_6bd5aa0, public_6bd5aa0);
extern "C" NAKED register_t __cdecl internal_6bd5aa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a30d @0x6bd5aa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a30d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov ebx, dword ptr ss : [ebp+0x258]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x254]
        mov dword ptr ss : [esp+0x28], 2
        je public_6bd5af6
        lea esp, ss:[esp]
        public_6bd5ae0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6c0b0c4]
        cmp esi, ebx
        jne public_6bd5ae0
        public_6bd5af6 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c09aaa
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov edi, dword ptr ss : [ebp+0x24C]
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x248]
        add esp, 4
        cmp eax, edi
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x10], eax
        je public_6bd5b4a
        public_6bd5b25 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6bd5bf0
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6c0b08c]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6bd5b25
        public_6bd5b4a : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6c09aaa
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+0x218]
        add esp, 4
        cmp eax, ebx
        je public_6bd5b85
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6bd5b79
        cmp cl, 0xFF
        je public_6bd5b79
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6bd5b85
        public_6bd5b79 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd5b85 : nop
        mov dword ptr ss : [ebp+0x218], ebx
        mov dword ptr ss : [ebp+0x21C], ebx
        mov dword ptr ss : [ebp+0x220], ebx
        mov eax, dword ptr ss : [ebp+0x208]
        cmp eax, ebx
        je public_6bd5bc0
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6bd5bb4
        cmp cl, 0xFF
        je public_6bd5bb4
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6bd5bc0
        public_6bd5bb4 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd5bc0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov dword ptr ss : [ebp+0x208], ebx
        mov dword ptr ss : [ebp+0x20C], ebx
        mov dword ptr ss : [ebp+0x210], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6bd5aa0)
    }
}

#undef public_6bd5ae0
#undef public_6bd5af6
#undef public_6bd5b25
#undef public_6bd5b4a
#undef public_6bd5b79
#undef public_6bd5b85
#undef public_6bd5bb4
#undef public_6bd5bc0
