#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);
CLANG_FORWARD_PROC_SYMBOL(public_420f70);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c8b80);
CLANG_FORWARD_PROC_SYMBOL(public_4c8bc0);
CLANG_FORWARD_PROC_SYMBOL(public_4c9a30);
CLANG_FORWARD_PROC_SYMBOL(public_59b020);
CLANG_FORWARD_PROC_SYMBOL(public_59b220);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_59b055 _public_59b055
#define public_59b078 _public_59b078
#define public_59b07c _public_59b07c
#define public_59b125 _public_59b125
#define public_59b1cd _public_59b1cd
#define public_59b211 _public_59b211

PROC_DECLARE(0x59b020, internal_59b020, public_59b020);
extern "C" NAKED register_t __cdecl internal_59b020()
{
    __asm
    {
        mov eax, 0x2068
        call public_5b7e90
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x8C]
        push esi
        lea esi, ds:[ebx+0x8C]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_59b07c
        mov ecx, esi
        call public_4c9a30
        lea edi, ds:[esi+4]
        mov ebx, 4
        public_59b055 : nop
        mov ecx, edi
        call public_420f70
        add edi, 0x10
        dec ebx
        jne public_59b055
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebp
        je public_59b078
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        mov dword ptr ds : [esi], ebp
        public_59b078 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_59b07c : nop
        call dword ptr ds : [public_5c60e4]
        mov edi, eax
        cmp edi, ebp
        je public_59b211
        mov eax, dword ptr ss : [esp+0x207C]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6c70]
        cmp eax, ebp
        je public_59b211
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_59b211
        lea ecx, ss:[esp+0x44]
        push ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x58], ebp
        mov dword ptr ss : [esp+0x7C], ebp
        call dword ptr ds : [public_5c6c6c]
        lea edx, ss:[esp+0x44]
        push edx
        mov ecx, esi
        call public_59b220
        test al, al
        jne public_59b125
        mov eax, dword ptr ss : [esp+0x207C]
        push eax
        lea ecx, ss:[esp+0x7C]
/*FIXUP push offset public_5e58a4 @0x59b0ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e58a4
        push ecx
        call public_402180
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x210
/*FIXUP push offset public_5e5874 @0x59b103*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5874
        mov ecx, 0x100003
/*FIXUP push offset public_5cf094 @0x59b10d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf094
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2068
        ret 4
        public_59b125 : nop
        cmp dword ptr ds : [esi], ebp
        je public_59b211
        push 0x40490FDB
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        call public_4c8b40
        push ebp
        lea ecx, ss:[esp+0x18]
        call public_4c8b80
        push ebp
        lea ecx, ss:[esp+0x18]
        call public_4c8bc0
        mov ecx, dword ptr ds : [esi]
        cmp ecx, ebp
        je public_59b1cd
        fld dword ptr ds : [ebx+0x3F0]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        fstp dword ptr ss : [esp]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        public_59b1cd : nop
        fld dword ptr ds : [ebx+0x3EC]
        mov eax, dword ptr ds : [public_5c6d58]
        lea edx, ss:[esp+0x38]
        push edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        fstp dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [esi]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        public_59b211 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2068
        ret 4
        UNREACHABLE_TRAP(0x59b020)
    }
}

#undef public_59b055
#undef public_59b078
#undef public_59b07c
#undef public_59b125
#undef public_59b1cd
#undef public_59b211
