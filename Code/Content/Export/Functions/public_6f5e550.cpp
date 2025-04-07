#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f575d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5e550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f5e584 _public_6f5e584
#define public_6f5e595 _public_6f5e595
#define public_6f5e5ab _public_6f5e5ab
#define public_6f5e5db _public_6f5e5db
#define public_6f5e5e9 _public_6f5e5e9
#define public_6f5e609 _public_6f5e609
#define public_6f5e60d _public_6f5e60d
#define public_6f5e61c _public_6f5e61c
#define public_6f5e652 _public_6f5e652
#define public_6f5e666 _public_6f5e666

PROC_DECLARE(0x6f5e550, internal_6f5e550, public_6f5e550);
extern "C" NAKED register_t __cdecl internal_6f5e550()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset public_6fb8440 @0x6f5e557*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8440
        call dword ptr ds : [public_6fb3000]
        mov esi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        xor ebp, ebp
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], ebp
        je public_6f5e61c
        public_6f5e584 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx]
        xor esi, esi
        call dword ptr ds : [eax+4]
        test al, al
        je public_6f5e595
        mov esi, dword ptr ds : [edi+8]
        public_6f5e595 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        jne public_6f5e5ab
        test esi, esi
        je public_6f5e60d
        mov ebp, esi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, edi
        jmp public_6f5e60d
        public_6f5e5ab : nop
        test esi, esi
        je public_6f5e60d
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6f575d0
        test al, al
        mov ecx, dword ptr ss : [esp+0x10]
        je public_6f5e5db
        lea edx, ss:[esp+0x14]
        push edx
        call public_6f575d0
        test al, al
        jne public_6f5e5e9
        mov ebp, esi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, edi
        jmp public_6f5e60d
        public_6f5e5db : nop
        lea eax, ss:[esp+0x14]
        push eax
        call public_6f575d0
        test al, al
        jne public_6f5e609
        public_6f5e5e9 : nop
        mov ecx, esi
        call public_6f33e40
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, eax
        call public_6f33e40
        cmp eax, ebp
        jge public_6f5e609
        mov ebp, esi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, edi
        jmp public_6f5e60d
        public_6f5e609 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f5e60d : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+4]
        jne public_6f5e584
        public_6f5e61c : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        push ebx
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        dec ecx
        mov dword ptr ds : [esi+8], ecx
        mov edi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 8
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6f5e652
        mov ebx, eax
        public_6f5e652 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f5e666
        mov dword ptr ds : [eax], ebp
        public_6f5e666 : nop
        mov eax, dword ptr ds : [esi+8]
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f5e550)
    }
}

#undef public_6f5e584
#undef public_6f5e595
#undef public_6f5e5ab
#undef public_6f5e5db
#undef public_6f5e5e9
#undef public_6f5e609
#undef public_6f5e60d
#undef public_6f5e61c
#undef public_6f5e652
#undef public_6f5e666
