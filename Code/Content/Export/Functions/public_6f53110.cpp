#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f53110);
CLANG_FORWARD_PROC_SYMBOL(public_6f53fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55060);
CLANG_FORWARD_PROC_SYMBOL(public_6f55090);
CLANG_FORWARD_PROC_SYMBOL(public_6f55330);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f53130 _public_6f53130
#define public_6f53143 _public_6f53143
#define public_6f53146 _public_6f53146
#define public_6f5314a _public_6f5314a
#define public_6f531a9 _public_6f531a9
#define public_6f531c1 _public_6f531c1
#define public_6f531cb _public_6f531cb
#define public_6f531cf _public_6f531cf
#define public_6f531e0 _public_6f531e0
#define public_6f5322d _public_6f5322d
#define public_6f5323c _public_6f5323c
#define public_6f53263 _public_6f53263
#define public_6f53290 _public_6f53290
#define public_6f5329e _public_6f5329e
#define public_6f532c3 _public_6f532c3
#define public_6f532cf _public_6f532cf
#define public_6f532ee _public_6f532ee
#define public_6f53309 _public_6f53309
#define public_6f53310 _public_6f53310
#define public_6f53333 _public_6f53333

PROC_DECLARE(0x6f53110, internal_6f53110, public_6f53110);
extern "C" NAKED register_t __cdecl internal_6f53110()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6f5314a
        lea esp, ss:[esp]
        public_6f53130 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f53143
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f53146
        public_6f53143 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f53146 : nop
        cmp ebp, edx
        jne public_6f53130
        public_6f5314a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f532ee
        push 0
        push esi
        mov ecx, edi
        call public_6f55060
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f55330
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f531a9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f531a9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f531a9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f531cf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f531cf
        public_6f531a9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f531c1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f531cb
        public_6f531c1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f531cb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f531cb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f531cf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f532cf
        lea ecx, ds:[ecx]
        public_6f531e0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0xE4]
        test cl, cl
        jne public_6f532cf
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f53263
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xE4]
        test dl, dl
        jne public_6f5322d
        mov byte ptr ds : [eax+0xE4], 1
        mov byte ptr ds : [ecx+0xE4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE4], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f532c3
        public_6f5322d : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f5323c
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f5323c : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0xE4], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xE4], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f532c3
        public_6f53263 : nop
        mov dl, byte ptr ds : [ecx+0xE4]
        test dl, dl
        jne public_6f53290
        mov byte ptr ds : [eax+0xE4], 1
        mov byte ptr ds : [ecx+0xE4], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0xE4], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f532c3
        public_6f53290 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f5329e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f5329e : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0xE4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE4], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f532c3 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f531e0
        public_6f532cf : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xE4], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f532ee : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f53309
        cmp esi, dword ptr ds : [ecx]
        je public_6f53310
        lea ecx, ss:[esp+0x10]
        call public_6f55090
        mov edx, dword ptr ss : [esp+0x10]
        public_6f53309 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f53333
        public_6f53310 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f53fd0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6f53333 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f53110)
    }
}

#undef public_6f53130
#undef public_6f53143
#undef public_6f53146
#undef public_6f5314a
#undef public_6f531a9
#undef public_6f531c1
#undef public_6f531cb
#undef public_6f531cf
#undef public_6f531e0
#undef public_6f5322d
#undef public_6f5323c
#undef public_6f53263
#undef public_6f53290
#undef public_6f5329e
#undef public_6f532c3
#undef public_6f532cf
#undef public_6f532ee
#undef public_6f53309
#undef public_6f53310
#undef public_6f53333
