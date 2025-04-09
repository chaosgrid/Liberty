#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_463630);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_468bf0);
CLANG_FORWARD_PROC_SYMBOL(public_46a150);
CLANG_FORWARD_PROC_SYMBOL(public_46a300);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46c5f0);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5556b0);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_46a180 _public_46a180
#define public_46a1ae _public_46a1ae
#define public_46a1c6 _public_46a1c6
#define public_46a228 _public_46a228
#define public_46a22d _public_46a22d
#define public_46a267 _public_46a267
#define public_46a27a _public_46a27a
#define public_46a2ab _public_46a2ab
#define public_46a2d5 _public_46a2d5
#define public_46a2ed _public_46a2ed

PROC_DECLARE(0x46a150, internal_46a150, public_46a150);
extern "C" NAKED register_t __cdecl internal_46a150()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_66da34]
        push esi
        push edi
        jne public_46a180
        mov ecx, dword ptr ds : [public_66da84]
        test ecx, ecx
        je public_46a2ed
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call public_463630
        pop edi
        pop esi
        pop ecx
        ret 
        public_46a180 : nop
        mov cl, byte ptr ds : [public_66d44c]
        mov al, 1
        test al, cl
        jne public_46a1ae
        mov dl, cl
        or dl, al
        mov ecx, offset public_66d440
        mov byte ptr ds : [public_66d44c], dl
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_468bf0 @0x46a1a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468bf0
        call public_5b7e6c
        add esp, 4
        public_46a1ae : nop
        mov ecx, dword ptr ds : [public_66da60]
        test ecx, ecx
        je public_46a228
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        mov esi, ecx
        jne public_46a1c6
        call public_46a300
        public_46a1c6 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ecx
        call public_46bb50
        mov dword ptr ds : [edi+0xC], 0
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        mov ecx, dword ptr ss : [esp+0x10]
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        imul edx, 0x3E8
        mov dword ptr ds : [ecx+0xC], edx
        lea ecx, ds:[esi+0xC]
        call public_46c5f0
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_5556b0
        mov edi, dword ptr ss : [esp+0x10]
        jmp public_46a22d
        public_46a228 : nop
        mov edi, offset public_66d440
        public_46a22d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_5c6318]
        push ecx
        push edx
        push edi
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_5c6314]
        test al, al
        jne public_46a2d5
        push ebx
        mov ebx, dword ptr ds : [public_66da60]
        test ebx, ebx
        je public_46a2ab
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_46a2ab
        public_46a267 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        je public_46a27a
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_46a267
        jmp public_46a2ab
        public_46a27a : nop
        mov edi, ecx
        call public_46bb50
        lea ecx, ds:[ebx+0xC]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ds : [edi+0xC], 0
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_5947a0
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call public_516f70
        public_46a2ab : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cfe80 @0x46a2b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfe80
        push 0x1249
/*FIXUP push offset public_5cf0b0 @0x46a2bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf0b0
        mov eax, 0x100003
/*FIXUP push offset public_5cf094 @0x46a2c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop ebx
        pop edi
        pop esi
        pop ecx
        ret 
        public_46a2d5 : nop
        mov ecx, dword ptr ds : [public_66da60]
        test ecx, ecx
        je public_46a2ed
        mov esi, ecx
        call public_4686e0
        mov ecx, esi
        call public_4684e0
        public_46a2ed : nop
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x46a150)
    }
}

#undef public_46a180
#undef public_46a1ae
#undef public_46a1c6
#undef public_46a228
#undef public_46a22d
#undef public_46a267
#undef public_46a27a
#undef public_46a2ab
#undef public_46a2d5
#undef public_46a2ed
