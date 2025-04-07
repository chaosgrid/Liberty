#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5af6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c58cd);

#define public_5af6e0 _public_5af6e0
#define public_5af6f6 _public_5af6f6
#define public_5af725 _public_5af725
#define public_5af74a _public_5af74a
#define public_5af779 _public_5af779
#define public_5af785 _public_5af785
#define public_5af7b4 _public_5af7b4
#define public_5af7c0 _public_5af7c0

PROC_DECLARE(0x5af6a0, internal_5af6a0, public_5af6a0);
extern "C" NAKED register_t __cdecl internal_5af6a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c58cd @0x5af6a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c58cd
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
        je public_5af6f6
        lea esp, ss:[esp]
        public_5af6e0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c63ac]
        cmp esi, ebx
        jne public_5af6e0
        public_5af6f6 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
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
        je public_5af74a
        public_5af725 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_53ab20
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6188]
        cmp dword ptr ss : [esp+0x10], edi
        jne public_5af725
        public_5af74a : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ss : [ebp+0x218]
        add esp, 4
        cmp eax, ebx
        je public_5af785
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5af779
        cmp cl, 0xFF
        je public_5af779
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_5af785
        public_5af779 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5af785 : nop
        mov dword ptr ss : [ebp+0x218], ebx
        mov dword ptr ss : [ebp+0x21C], ebx
        mov dword ptr ss : [ebp+0x220], ebx
        mov eax, dword ptr ss : [ebp+0x208]
        cmp eax, ebx
        je public_5af7c0
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5af7b4
        cmp cl, 0xFF
        je public_5af7b4
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_5af7c0
        public_5af7b4 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5af7c0 : nop
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
        UNREACHABLE_TRAP(0x5af6a0)
    }
}

#undef public_5af6e0
#undef public_5af6f6
#undef public_5af725
#undef public_5af74a
#undef public_5af779
#undef public_5af785
#undef public_5af7b4
#undef public_5af7c0
