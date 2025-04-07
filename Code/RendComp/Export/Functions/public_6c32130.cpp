#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21170);
CLANG_FORWARD_PROC_SYMBOL(public_6c2c5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c32130);
CLANG_FORWARD_PROC_SYMBOL(public_6c33bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34100);
CLANG_FORWARD_PROC_SYMBOL(public_6c34160);
CLANG_FORWARD_PROC_SYMBOL(public_6c34380);
CLANG_FORWARD_PROC_SYMBOL(public_6c34760);
CLANG_FORWARD_PROC_SYMBOL(public_6c34a40);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ec0);

#define public_6c32166 _public_6c32166
#define public_6c321aa _public_6c321aa
#define public_6c321b2 _public_6c321b2
#define public_6c321bc _public_6c321bc
#define public_6c321c1 _public_6c321c1
#define public_6c321c3 _public_6c321c3
#define public_6c321c9 _public_6c321c9
#define public_6c321d9 _public_6c321d9
#define public_6c321ee _public_6c321ee
#define public_6c32203 _public_6c32203
#define public_6c32218 _public_6c32218
#define public_6c3222d _public_6c3222d
#define public_6c32242 _public_6c32242
#define public_6c32257 _public_6c32257
#define public_6c32271 _public_6c32271
#define public_6c32286 _public_6c32286
#define public_6c322fe _public_6c322fe
#define public_6c32302 _public_6c32302
#define public_6c32326 _public_6c32326

PROC_DECLARE(0x6c32130, internal_6c32130, public_6c32130);
extern "C" NAKED register_t __cdecl internal_6c32130()
{
    __asm
    {
        mov eax, 0x2010
        call public_6c34ec0
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov dword ptr ss : [ebp], offset public_6c367ac
        mov dword ptr ss : [ebp+4], offset public_6c36750
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6c321c9
        mov edi, 0x100003
        public_6c32166 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        lea ecx, ss:[esp+0x24]
/*FIXUP push offset public_6c37a7c @0x6c3216e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a7c
        push ecx
        call public_6c21170
        mov edx, dword ptr ds : [public_6c36010]
        push eax
        push 0xBF
/*FIXUP push offset public_6c37a38 @0x6c32185*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c37a38
/*FIXUP push offset public_6c3702c @0x6c3218a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c3702c
        push edi
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x25]
        add esp, 0x20
        cmp cl, bl
        jne public_6c321aa
        push eax
        call public_6c34a40
        add esp, 4
        jmp public_6c321c1
        public_6c321aa : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c321bc
        public_6c321b2 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6c321b2
        public_6c321bc : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6c321c3
        public_6c321c1 : nop
        mov esi, eax
        public_6c321c3 : nop
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_6c32166
        public_6c321c9 : nop
        mov eax, dword ptr ss : [ebp+0x28]
        cmp eax, ebx
        je public_6c321d9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0x28], ebx
        public_6c321d9 : nop
        mov eax, dword ptr ds : [public_6c37d54]
        cmp eax, ebx
        je public_6c321ee
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6c37d54], ebx
        public_6c321ee : nop
        mov eax, dword ptr ds : [public_6c37d5c]
        cmp eax, ebx
        je public_6c32203
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6c37d5c], ebx
        public_6c32203 : nop
        mov eax, dword ptr ds : [public_6c37d58]
        cmp eax, ebx
        je public_6c32218
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6c37d58], ebx
        public_6c32218 : nop
        mov eax, dword ptr ds : [public_6c37d60]
        cmp eax, ebx
        je public_6c3222d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6c37d60], ebx
        public_6c3222d : nop
        mov eax, dword ptr ds : [public_6c37d50]
        cmp eax, ebx
        je public_6c32242
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6c37d50], ebx
        public_6c32242 : nop
        mov eax, dword ptr ds : [public_6c37d64]
        cmp eax, ebx
        je public_6c32257
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_6c37d64], ebx
        public_6c32257 : nop
        mov ecx, ebp
        mov dword ptr ds : [public_6c37d4c], ebx
        call public_6c33bf0
        lea edi, ss:[ebp+0x1C]
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        je public_6c32286
        public_6c32271 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_6c2c5c0
        cmp esi, ebp
        jne public_6c32271
        public_6c32286 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6c34ea0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [ecx+0xC]
        lea esi, ds:[ecx+8]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        add esp, 4
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6c322fe
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6c34160
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx]
        jne public_6c322fe
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_6c322fe
        mov eax, dword ptr ds : [ecx+4]
        push eax
        mov ecx, esi
        call public_6c34760
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6c34160
        jmp public_6c32326
        public_6c322fe : nop
        cmp eax, edi
        je public_6c32326
        public_6c32302 : nop
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6c34100
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_6c34380
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6c32302
        public_6c32326 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6c34ea0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6c34ea0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2010
        ret 
        UNREACHABLE_TRAP(0x6c32130)
    }
}

#undef public_6c32166
#undef public_6c321aa
#undef public_6c321b2
#undef public_6c321bc
#undef public_6c321c1
#undef public_6c321c3
#undef public_6c321c9
#undef public_6c321d9
#undef public_6c321ee
#undef public_6c32203
#undef public_6c32218
#undef public_6c3222d
#undef public_6c32242
#undef public_6c32257
#undef public_6c32271
#undef public_6c32286
#undef public_6c322fe
#undef public_6c32302
#undef public_6c32326
