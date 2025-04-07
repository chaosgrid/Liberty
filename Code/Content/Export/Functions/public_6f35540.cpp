#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f35540);
CLANG_FORWARD_PROC_SYMBOL(public_6f35640);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f50760);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f35560 _public_6f35560
#define public_6f3556e _public_6f3556e
#define public_6f35590 _public_6f35590
#define public_6f355a5 _public_6f355a5
#define public_6f355d2 _public_6f355d2
#define public_6f355e3 _public_6f355e3
#define public_6f355ee _public_6f355ee
#define public_6f355f0 _public_6f355f0
#define public_6f35610 _public_6f35610
#define public_6f3561b _public_6f3561b
#define public_6f35631 _public_6f35631

PROC_DECLARE(0x6f35540, internal_6f35540, public_6f35540);
extern "C" NAKED register_t __cdecl internal_6f35540()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        call public_6f50760
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        mov edi, eax
        mov eax, ecx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], edi
        je public_6f3556e
        public_6f35560 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        add eax, 4
        add esi, 4
        cmp eax, ecx
        jne public_6f35560
        public_6f3556e : nop
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push esi
        mov ecx, ebx
        call public_6ea1490
        mov dword ptr ds : [ebx+8], esi
        mov ebp, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6f35631
        lea ecx, ds:[ecx]
        public_6f35590 : nop
        push ebp
        call public_6f50650
        mov edi, eax
        mov esi, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [edi+0x50]
        add esp, 4
        cmp esi, eax
        je public_6f3561b
/*FIXUP public_6f355a5 : nop
        push offset public_6fd0830 @0x6f355a5*/
  FIXUP public_6f355a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push esi
        call public_6f32480
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        call public_6f35640
        add esp, 0x10
        test al, al
        jne public_6f355d2
        mov eax, dword ptr ds : [edi+0x50]
        add esi, 4
        cmp esi, eax
        jne public_6f355a5
        mov ebp, dword ptr ss : [esp+0x1C]
        jmp public_6f3561b
        public_6f355d2 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        mov ebp, dword ptr ss : [esp+0x1C]
        je public_6f355ee
        mov edx, dword ptr ss : [ebp]
        public_6f355e3 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f355f0
        add eax, 4
        cmp eax, ecx
        jne public_6f355e3
        public_6f355ee : nop
        mov eax, ecx
        public_6f355f0 : nop
        cmp eax, ecx
        jne public_6f3561b
        push ebp
        push 1
        push ecx
        mov ecx, ebx
        call public_6f937c0
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        je public_6f3561b
        mov edx, dword ptr ss : [ebp]
        lea esp, ss:[esp]
        public_6f35610 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f3561b
        add eax, 4
        cmp eax, ecx
        jne public_6f35610
        public_6f3561b : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        add ebp, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ebp
        jne public_6f35590
        public_6f35631 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f35540)
    }
}

#undef public_6f35560
#undef public_6f3556e
#undef public_6f35590
#undef public_6f355a5
#undef public_6f355d2
#undef public_6f355e3
#undef public_6f355ee
#undef public_6f355f0
#undef public_6f35610
#undef public_6f3561b
#undef public_6f35631
