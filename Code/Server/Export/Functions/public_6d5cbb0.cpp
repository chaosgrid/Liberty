#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6d5cbee _public_6d5cbee
#define public_6d5cc0f _public_6d5cc0f
#define public_6d5cc51 _public_6d5cc51
#define public_6d5cc53 _public_6d5cc53
#define public_6d5ccc3 _public_6d5ccc3
#define public_6d5cdd6 _public_6d5cdd6
#define public_6d5cebb _public_6d5cebb
#define public_6d5cfca _public_6d5cfca
#define public_6d5d0e2 _public_6d5d0e2
#define public_6d5d1cd _public_6d5d1cd
#define public_6d5d22e _public_6d5d22e
#define public_6d5d413 _public_6d5d413
#define public_6d5d43b _public_6d5d43b
#define public_6d5d48b _public_6d5d48b
#define public_6d5d4c9 _public_6d5d4c9
#define public_6d5d4fa _public_6d5d4fa
#define public_6d5d522 _public_6d5d522
#define public_6d5d54e _public_6d5d54e
#define public_6d5d57a _public_6d5d57a
#define public_6d5d5a6 _public_6d5d5a6
#define public_6d5d5d2 _public_6d5d5d2
#define public_6d5d5fe _public_6d5d5fe
#define public_6d5d62a _public_6d5d62a
#define public_6d5d656 _public_6d5d656
#define public_6d5d682 _public_6d5d682
#define public_6d5d6ae _public_6d5d6ae
#define public_6d5d6da _public_6d5d6da
#define public_6d5d6e9 _public_6d5d6e9
#define public_6d5d709 _public_6d5d709
#define public_6d5d723 _public_6d5d723
#define public_6d5d733 _public_6d5d733
#define public_6d5d755 _public_6d5d755

PROC_DECLARE(0x6d5cbb0, internal_6d5cbb0, public_6d5cbb0);
extern "C" NAKED register_t __cdecl internal_6d5cbb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xA8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xBC]
        test edi, 0x3FFFFFFF
        je public_6d5d755
        mov esi, dword ptr ss : [esp+0xC0]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        test al, al
        jne public_6d5cbee
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5cbee : nop
        push edi
        call public_6d00670
        mov edi, eax
        xor ebx, ebx
        add esp, 4
        cmp edi, ebx
        jne public_6d5cc0f
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5cc0f : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x150]
        cmp eax, ebx
        je public_6d5d723
        mov ecx, dword ptr ds : [eax+0x4C]
        mov ebp, 3
        and ecx, ebp
        cmp cl, 3
        jne public_6d5d723
        cmp dword ptr ds : [eax+0xAC], ebx
        je public_6d5d723
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebx
        je public_6d5cc51
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, ebp
        cmp dl, 3
        je public_6d5cc53
        public_6d5cc51 : nop
        xor eax, eax
        public_6d5cc53 : nop
        mov eax, dword ptr ds : [eax+0xB4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jbe public_6d5d43b
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[eax-1]
        cmp ecx, edx
        jae public_6d5d43b
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], ebx
        je public_6d5d43b
        mov ecx, dword ptr ss : [esp+0xBC]
        imul eax, 0x418
        cmp dword ptr ds : [eax+edx-0x34], ecx
        jne public_6d5d43b
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xFFFFFFFD
        cmp eax, 0x12
        ja public_6d5d723
/*FIXUP movzx edx, byte ptr ds : [eax+public_6d5d784] @0x6d5ccb5*/
/*FIXUP jmp dword ptr ds : [edx*4+public_6d5d768] @0x6d5ccbc*/
  JMPTB cmp eax, 0
  JMPTB mov edx, 0
  JMPTB je public_6d5d22e
  JMPTB cmp eax, 1
  JMPTB mov edx, 1
  JMPTB je public_6d5cfca
  JMPTB cmp eax, 2
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 3
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 4
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 5
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 6
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 7
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 8
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 9
  JMPTB mov edx, 2
  JMPTB je public_6d5cdd6
  JMPTB cmp eax, 0xA
  JMPTB mov edx, 3
  JMPTB je public_6d5cebb
  JMPTB cmp eax, 0xB
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 0xC
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 0xD
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 0xE
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 0xF
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 0x10
  JMPTB mov edx, 6
  JMPTB je public_6d5d723
  JMPTB cmp eax, 0x11
  JMPTB mov edx, 4
  JMPTB je public_6d5d0e2
  JMPTB cmp eax, 0x12
  JMPTB mov edx, 5
  JMPTB je public_6d5ccc3
  JMPTB int 3
        public_6d5ccc3 : nop
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x9C]
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xA8]
        call public_6ce7c10
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0xAC], 0
        mov byte ptr ss : [esp+0xB0], bl
        mov byte ptr ss : [esp+0xB1], bl
        mov byte ptr ss : [esp+0xB2], bl
        mov byte ptr ss : [esp+0xB3], bl
        mov byte ptr ss : [esp+0xB4], bl
        mov dword ptr ss : [esp+0x24], ebx
        jmp public_6d5d413
        public_6d5cdd6 : nop
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x9C]
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xA8]
        call public_6ce7c10
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x24], 1
        mov dword ptr ss : [esp+0x30], eax
        jmp public_6d5d1cd
        public_6d5cebb : nop
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x9C]
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xA8]
        call public_6ce7c10
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        mov al, byte ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [esi+0x1C]
        mov byte ptr ss : [esp+0x2C], al
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x24], 2
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        jmp public_6d5d1cd
        public_6d5cfca : nop
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], 0
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xA8]
        call public_6ce7c10
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        lea eax, ds:[esi+0x14]
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x58], edx
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x60], ecx
        jmp public_6d5d1cd
        public_6d5d0e2 : nop
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], 0
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xA8]
        call public_6ce7c10
        mov dword ptr ss : [esp+0x24], 5
        public_6d5d1cd : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        lea eax, ss:[esp+0x24]
        push eax
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xAC], 0
        mov dword ptr ss : [esp+0xB0], 0
        mov byte ptr ss : [esp+0xB4], bl
        mov byte ptr ss : [esp+0xB5], bl
        mov byte ptr ss : [esp+0xB6], bl
        mov byte ptr ss : [esp+0xB7], bl
        mov byte ptr ss : [esp+0xB8], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x190]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5d22e : nop
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], bl
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x70], ebp
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0
        mov dword ptr ss : [esp+0x7C], 0
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x8C], 0
        mov dword ptr ss : [esp+0x90], 0
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], 0
        call public_6ce7c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0xA8]
        call public_6ce7c10
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x64], ecx
        lea edx, ds:[esi+0x10]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x6C], ecx
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x70], edx
        mov dword ptr ss : [esp+0x74], eax
        lea ecx, ds:[esi+0x38]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x90], edx
        mov dword ptr ss : [esp+0x94], eax
        mov dword ptr ss : [esp+0x98], ecx
        lea edx, ds:[esi+0x20]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x78], eax
        mov dword ptr ss : [esp+0x7C], ecx
        lea eax, ds:[esi+0x2C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0x80], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ds:[esi+0x44]
        mov dword ptr ss : [esp+0x88], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x8C], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x9C], edx
        mov edx, dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0xA0], eax
        mov eax, dword ptr ds : [esi+0x54]
        mov dword ptr ss : [esp+0xA4], ecx
        mov cl, byte ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x24], 4
        mov dword ptr ss : [esp+0xA8], edx
        mov dword ptr ss : [esp+0xAC], eax
        mov dl, byte ptr ds : [esi+0x59]
        mov al, byte ptr ds : [esi+0x5A]
        mov byte ptr ss : [esp+0xB0], cl
        mov cl, byte ptr ds : [esi+0x5B]
        mov byte ptr ss : [esp+0xB1], dl
        mov edx, dword ptr ds : [esi+0x5C]
        mov byte ptr ss : [esp+0xB2], al
        mov eax, dword ptr ds : [esi+0x60]
        mov byte ptr ss : [esp+0xB3], cl
        mov ecx, dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0x40], edx
        mov dl, byte ptr ds : [esi+0x6C]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        mov byte ptr ss : [esp+0xB4], dl
        public_6d5d413 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [eax+0x190]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5d43b : nop
        push edi
        call dword ptr ds : [public_6d644dc]
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        sub eax, 0x13
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_6d5d709
        sub eax, 2
        mov ecx, edi
        je public_6d5d6e9
        call dword ptr ds : [public_6d649b8]
        cmp dword ptr ds : [eax], ebx
        je public_6d5d48b
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5d48b : nop
        cmp dword ptr ds : [esi+4], ebp
        mov ebx, dword ptr ds : [public_6d649b4]
        mov dword ptr ss : [esp+0x1C], 5
        jne public_6d5d4c9
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 2
        call ebx
        test al, al
        mov ebp, 3
        je public_6d5d4c9
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d4c9 : nop
        cmp dword ptr ds : [esi+4], 4
        jne public_6d5d4fa
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 0x11
        call ebx
        test al, al
        mov ebp, 3
        je public_6d5d4fa
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d4fa : nop
        cmp dword ptr ds : [esi+4], 5
        jne public_6d5d522
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], ebp
        call ebx
        test al, al
        je public_6d5d522
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d522 : nop
        cmp dword ptr ds : [esi+4], 0xD
        jne public_6d5d54e
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 7
        call ebx
        test al, al
        je public_6d5d54e
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d54e : nop
        cmp dword ptr ds : [esi+4], 0xC
        jne public_6d5d57a
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 0x14
        call ebx
        test al, al
        je public_6d5d57a
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d57a : nop
        cmp dword ptr ds : [esi+4], 0x14
        jne public_6d5d5a6
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 6
        call ebx
        test al, al
        je public_6d5d5a6
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d5a6 : nop
        cmp dword ptr ds : [esi+4], 0xE
        jne public_6d5d5d2
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 8
        call ebx
        test al, al
        je public_6d5d5d2
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d5d2 : nop
        cmp dword ptr ds : [esi+4], 0xF
        jne public_6d5d5fe
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 9
        call ebx
        test al, al
        je public_6d5d5fe
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d5fe : nop
        cmp dword ptr ds : [esi+4], 0x11
        jne public_6d5d62a
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 0xE
        call ebx
        test al, al
        je public_6d5d62a
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d62a : nop
        cmp dword ptr ds : [esi+4], 7
        jne public_6d5d656
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 0xF
        call ebx
        test al, al
        je public_6d5d656
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d656 : nop
        cmp dword ptr ds : [esi+4], 0xA
        jne public_6d5d682
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 5
        call ebx
        test al, al
        je public_6d5d682
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d682 : nop
        cmp dword ptr ds : [esi+4], 0xB
        jne public_6d5d6ae
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 0x12
        call ebx
        test al, al
        je public_6d5d6ae
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d6ae : nop
        cmp dword ptr ds : [esi+4], 9
        jne public_6d5d6da
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 0x10
        call ebx
        test al, al
        je public_6d5d6da
        mov dword ptr ss : [esp+0x1C], 1
        public_6d5d6da : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5d6e9 : nop
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_6d649b4]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5d709 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov dword ptr ss : [esp+0x14], 2
        call dword ptr ds : [public_6d649b0]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        jne public_6d5d733
        public_6d5d723 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5d733 : nop
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6d649b4]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xA8
        ret 
        public_6d5d755 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0xA8
        ret 
        UNREACHABLE_TRAP(0x6d5cbb0)
        ASM_EXPORT_ENTRY_FIRST(0x6d5ccc3, public_6d5ccc3)
        ASM_EXPORT_ENTRY(0x6d5cdd6, public_6d5cdd6)
        ASM_EXPORT_ENTRY(0x6d5cebb, public_6d5cebb)
        ASM_EXPORT_ENTRY(0x6d5cfca, public_6d5cfca)
        ASM_EXPORT_ENTRY(0x6d5d0e2, public_6d5d0e2)
        ASM_EXPORT_ENTRY(0x6d5d22e, public_6d5d22e)
        ASM_EXPORT_ENTRY_LAST(0x6d5d723, public_6d5d723)
    }
}

#undef public_6d5cbee
#undef public_6d5cc0f
#undef public_6d5cc51
#undef public_6d5cc53
#undef public_6d5ccc3
#undef public_6d5cdd6
#undef public_6d5cebb
#undef public_6d5cfca
#undef public_6d5d0e2
#undef public_6d5d1cd
#undef public_6d5d22e
#undef public_6d5d413
#undef public_6d5d43b
#undef public_6d5d48b
#undef public_6d5d4c9
#undef public_6d5d4fa
#undef public_6d5d522
#undef public_6d5d54e
#undef public_6d5d57a
#undef public_6d5d5a6
#undef public_6d5d5d2
#undef public_6d5d5fe
#undef public_6d5d62a
#undef public_6d5d656
#undef public_6d5d682
#undef public_6d5d6ae
#undef public_6d5d6da
#undef public_6d5d6e9
#undef public_6d5d709
#undef public_6d5d723
#undef public_6d5d733
#undef public_6d5d755

#pragma init_seg(compiler)
extern "C" void const* const public_6d5ccc3 = __AsmFindLabelExport(&internal_6d5cbb0, 0x6d5ccc3);
extern "C" void const* const public_6d5cdd6 = __AsmFindLabelExport(&internal_6d5cbb0, 0x6d5cdd6);
extern "C" void const* const public_6d5cebb = __AsmFindLabelExport(&internal_6d5cbb0, 0x6d5cebb);
extern "C" void const* const public_6d5cfca = __AsmFindLabelExport(&internal_6d5cbb0, 0x6d5cfca);
extern "C" void const* const public_6d5d0e2 = __AsmFindLabelExport(&internal_6d5cbb0, 0x6d5d0e2);
extern "C" void const* const public_6d5d22e = __AsmFindLabelExport(&internal_6d5cbb0, 0x6d5d22e);
extern "C" void const* const public_6d5d723 = __AsmFindLabelExport(&internal_6d5cbb0, 0x6d5d723);
