#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7580);
CLANG_FORWARD_PROC_SYMBOL(public_6ee7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee85e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee34f0 _public_6ee34f0
#define public_6ee3518 _public_6ee3518
#define public_6ee3571 _public_6ee3571
#define public_6ee3581 _public_6ee3581
#define public_6ee35cf _public_6ee35cf
#define public_6ee35e9 _public_6ee35e9
#define public_6ee35eb _public_6ee35eb
#define public_6ee35f3 _public_6ee35f3

PROC_DECLARE(0x6ee34d0, internal_6ee34d0, public_6ee34d0);
extern "C" NAKED register_t __cdecl internal_6ee34d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_6eeaf04]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, 1
        mov dword ptr ss : [esp+0xC], esi
        je public_6ee3571
        mov edi, edi
        public_6ee34f0 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+8]
        je public_6ee3518
        push 0
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x14]
        inc edi
        call public_6ee7580
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, dword ptr ds : [public_6eeaf04]
        jne public_6ee34f0
        jmp public_6ee3571
        public_6ee3518 : nop
        test edi, edi
        je public_6ee3571
/*FIXUP push offset public_6eeaf0c @0x6ee351c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9030]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        call public_6ee85e0
        push 1
        push esi
        mov ecx, offset public_6eeaf00
        call public_6ee7d10
        mov edx, dword ptr ds : [public_6eeaf08]
        mov eax, dword ptr ds : [public_6eeaf70]
        dec edx
        push eax
        mov dword ptr ds : [public_6eeaf08], edx
        call dword ptr ds : [public_6ee9020]
/*FIXUP push offset public_6eeaf0c @0x6ee3566*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeaf0c
        call dword ptr ds : [public_6ee9038]
        public_6ee3571 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+0x110]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ee35f3
        public_6ee3581 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_6ee35e9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov eax, edi
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        cmp dword ptr ds : [public_6eeaf58], 0x7FFFFFFF
        jge public_6ee35cf
        mov eax, dword ptr ds : [public_6eeaf4c]
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [public_6eeaf58]
        inc eax
        mov dword ptr ds : [public_6eeaf4c], esi
        mov dword ptr ds : [public_6eeaf58], eax
        dec dword ptr ds : [ebx+0x114]
        mov esi, edi
        jmp public_6ee35eb
        public_6ee35cf : nop
        push esi
        call public_6ee8ddc
        mov eax, dword ptr ds : [ebx+0x114]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x114], eax
        mov esi, edi
        jmp public_6ee35eb
        public_6ee35e9 : nop
        mov esi, dword ptr ds : [esi]
        public_6ee35eb : nop
        cmp esi, dword ptr ds : [ebx+0x110]
        jne public_6ee3581
        public_6ee35f3 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ee34d0)
    }
}

#undef public_6ee34f0
#undef public_6ee3518
#undef public_6ee3571
#undef public_6ee3581
#undef public_6ee35cf
#undef public_6ee35e9
#undef public_6ee35eb
#undef public_6ee35f3
