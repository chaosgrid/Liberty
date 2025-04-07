#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6710);
CLANG_FORWARD_PROC_SYMBOL(public_6cece50);
CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d604a9);

#define public_6ce6760 _public_6ce6760
#define public_6ce6775 _public_6ce6775
#define public_6ce6796 _public_6ce6796
#define public_6ce67ad _public_6ce67ad
#define public_6ce67d2 _public_6ce67d2
#define public_6ce67e7 _public_6ce67e7
#define public_6ce6810 _public_6ce6810
#define public_6ce6834 _public_6ce6834

PROC_DECLARE(0x6ce6710, internal_6ce6710, public_6ce6710);
extern "C" NAKED register_t __cdecl internal_6ce6710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d604a9 @0x6ce6712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d604a9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [ebx-0xC], offset public_6d65244
        mov dword ptr ds : [ebx-8], offset public_6d651c4
        mov dword ptr ds : [ebx], offset public_6d651b8
        mov edi, dword ptr ds : [ebx+0x58]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        lea ebp, ds:[ebx+0x54]
        mov dword ptr ss : [esp+0x28], 3
        je public_6ce6775
        lea ebx, ds:[ebx]
        public_6ce6760 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_6d0f620
        cmp esi, edi
        jne public_6ce6760
        public_6ce6775 : nop
        mov edx, dword ptr ds : [ebx-0xC]
        lea ecx, ds:[ebx-0xC]
        call dword ptr ds : [edx+0x1E0]
        mov eax, dword ptr ds : [ebx+0x74]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        lea edi, ds:[ebx+0x70]
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce67ad
        public_6ce6796 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6cece50
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_6ce6796
        public_6ce67ad : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        lea edi, ds:[ebx+0x64]
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        add esp, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x28], 1
        je public_6ce67e7
        public_6ce67d2 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6d0f620
        cmp esi, ebx
        jne public_6ce67d2
        public_6ce67e7 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, esi
        mov byte ptr ss : [esp+0x28], bl
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce6834
        lea esp, ss:[esp]
        public_6ce6810 : nop
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebp
        call public_6d0f620
        cmp dword ptr ss : [esp+0x10], esi
        jne public_6ce6810
        public_6ce6834 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call public_6cee4a0
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6ce6710)
    }
}

#undef public_6ce6760
#undef public_6ce6775
#undef public_6ce6796
#undef public_6ce67ad
#undef public_6ce67d2
#undef public_6ce67e7
#undef public_6ce6810
#undef public_6ce6834
