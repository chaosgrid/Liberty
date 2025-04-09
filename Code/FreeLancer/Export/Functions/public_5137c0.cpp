#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_5137c0);
CLANG_FORWARD_PROC_SYMBOL(public_5379b0);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5137e9 _public_5137e9
#define public_5137f0 _public_5137f0
#define public_51382a _public_51382a
#define public_51386b _public_51386b
#define public_51387f _public_51387f
#define public_513898 _public_513898
#define public_5138b6 _public_5138b6
#define public_5138c4 _public_5138c4
#define public_5138f5 _public_5138f5
#define public_513901 _public_513901
#define public_51397f _public_51397f
#define public_513993 _public_513993
#define public_5139a2 _public_5139a2
#define public_5139b2 _public_5139b2
#define public_5139c1 _public_5139c1

PROC_DECLARE(0x5137c0, internal_5137c0, public_5137c0);
extern "C" NAKED register_t __cdecl internal_5137c0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        je public_5138f5
        mov eax, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0xC], esi
        je public_5138f5
        push edi
        jmp public_5137f0
        public_5137e9 : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_5137f0 : nop
        mov eax, dword ptr ds : [esi+8]
        push 1
        push eax
        call public_5416c0
        mov edi, eax
        add esp, 8
        cmp edi, ebx
        je public_5138c4
        call public_54baf0
        cmp edi, eax
        jne public_513898
        mov ecx, dword ptr ds : [edi+0x17C]
        cmp ecx, ebx
        lea esi, ds:[edi+0x174]
        je public_51382a
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_51382a : nop
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_51386b
        lea ecx, ss:[esp+0x14]
        call public_4215b0
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov eax, dword ptr ds : [ebx]
        push 0xFFFFFFFF
        mov ecx, ebx
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x60]
        public_51386b : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_51387f
        call public_5379b0
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        public_51387f : nop
        mov ecx, esi
        call public_502d90
        mov al, byte ptr ds : [edi+0x184]
        mov esi, dword ptr ss : [esp+0x10]
        and al, 0xBF
        mov byte ptr ds : [edi+0x184], al
        public_513898 : nop
        lea ecx, ds:[edi+0x164]
        call public_503330
        test al, al
        je public_5138b6
        lea eax, ds:[edi+0x164]
        push eax
        lea ecx, ds:[edi+0x28]
        call public_4fcef0
        public_5138b6 : nop
        xor ebx, ebx
        mov dword ptr ds : [edi+0x184], ebx
        mov dword ptr ds : [edi+0x160], ebx
        public_5138c4 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_5b7e1d
        mov esi, dword ptr ss : [ebp+0x10]
        add esp, 4
        dec esi
        mov dword ptr ss : [ebp+0x10], esi
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_5137e9
        pop edi
        public_5138f5 : nop
        mov ecx, dword ptr ss : [ebp+0x38]
        cmp ecx, ebx
        je public_513901
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_513901 : nop
        mov ecx, dword ptr ss : [ebp+0x34]
        cmp ecx, ebx
        je public_51397f
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        call dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ss : [ebp+0x34]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        public_51397f : nop
        mov ecx, dword ptr ss : [ebp+0x3C]
        cmp ecx, ebx
        je public_513993
        call public_5379b0
        mov ecx, dword ptr ss : [ebp+0x3C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        public_513993 : nop
        mov ecx, dword ptr ss : [ebp+0x38]
        cmp ecx, ebx
        je public_5139a2
        call public_4f7a90
        mov dword ptr ss : [ebp+0x38], ebx
        public_5139a2 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        cmp eax, ebx
        je public_5139b2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0x34], ebx
        public_5139b2 : nop
        mov ecx, dword ptr ss : [ebp+0x3C]
        cmp ecx, ebx
        je public_5139c1
        call public_537ad0
        mov dword ptr ss : [ebp+0x3C], ebx
        public_5139c1 : nop
        pop esi
        mov dword ptr ss : [ebp+0x30], ebx
        pop ebp
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x5137c0)
    }
}

#undef public_5137e9
#undef public_5137f0
#undef public_51382a
#undef public_51386b
#undef public_51387f
#undef public_513898
#undef public_5138b6
#undef public_5138c4
#undef public_5138f5
#undef public_513901
#undef public_51397f
#undef public_513993
#undef public_5139a2
#undef public_5139b2
#undef public_5139c1
