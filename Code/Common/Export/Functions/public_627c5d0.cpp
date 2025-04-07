#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

#define public_627c600 _public_627c600
#define public_627c608 _public_627c608
#define public_627c617 _public_627c617
#define public_627c62a _public_627c62a
#define public_627c633 _public_627c633
#define public_627c637 _public_627c637
#define public_627c644 _public_627c644
#define public_627c655 _public_627c655
#define public_627c668 _public_627c668

PROC_DECLARE(0x627c5d0, internal_627c5d0, public_627c5d0);
extern "C" NAKED register_t __cdecl internal_627c5d0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        push edi
        mov esi, ecx
        je public_627c608
        mov eax, dword ptr ds : [esi-4]
/*FIXUP push offset _public_627c930 @0x627c5e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_627c930
        lea edi, ds:[esi-4]
        push eax
        push 0x14
        push esi
        call public_6391dfc
        test bl, 1
        je public_627c600
        push edi
        call public_6391d5a
        add esp, 4
        public_627c600 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_627c608 : nop
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_639b59c
        je public_627c637
        public_627c617 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_627c62a
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_627c633
        public_627c62a : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627c633 : nop
        cmp edi, ebx
        jne public_627c617
        public_627c637 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_627c655
        public_627c644 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6391d5a
        add esp, 4
        cmp edi, ebx
        jne public_627c644
        public_627c655 : nop
        test byte ptr ss : [esp+0x10], 1
        mov dword ptr ds : [esi+0x10], ebx
        je public_627c668
        push esi
        call public_6391d5a
        add esp, 4
        public_627c668 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627c5d0)
    }
}

#undef public_627c600
#undef public_627c608
#undef public_627c617
#undef public_627c62a
#undef public_627c633
#undef public_627c637
#undef public_627c644
#undef public_627c655
#undef public_627c668
