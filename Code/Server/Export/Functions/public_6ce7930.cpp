#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce10d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce7930);
CLANG_FORWARD_PROC_SYMBOL(public_6ce7c10);
CLANG_FORWARD_PROC_SYMBOL(public_6ce7c30);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c730);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c970);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d370);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce795a _public_6ce795a
#define public_6ce7962 _public_6ce7962
#define public_6ce7977 _public_6ce7977
#define public_6ce7980 _public_6ce7980
#define public_6ce79c8 _public_6ce79c8
#define public_6ce7a9a _public_6ce7a9a
#define public_6ce7b51 _public_6ce7b51
#define public_6ce7b62 _public_6ce7b62
#define public_6ce7b79 _public_6ce7b79
#define public_6ce7b7e _public_6ce7b7e
#define public_6ce7b96 _public_6ce7b96
#define public_6ce7b98 _public_6ce7b98
#define public_6ce7bad _public_6ce7bad
#define public_6ce7bdf _public_6ce7bdf
#define public_6ce7be9 _public_6ce7be9
#define public_6ce7bed _public_6ce7bed
#define public_6ce7bfc _public_6ce7bfc

PROC_DECLARE(0x6ce7930, internal_6ce7930, public_6ce7930);
extern "C" NAKED register_t __cdecl internal_6ce7930()
{
    __asm
    {
        sub esp, 0x128
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x14], edi
        je public_6ce795a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        mov dword ptr ss : [esp+0x10], eax
        je public_6ce7962
        public_6ce795a : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6ce7962 : nop
        mov eax, dword ptr ds : [edi+0x64]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0xC], esi
        je public_6ce7bfc
        push ebx
        push ebp
        jmp public_6ce7980
        public_6ce7977 : nop
        mov esi, dword ptr ss : [esp+0x14]
        nop 
        lea esp, ss:[esp]
        public_6ce7980 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edi+0x28]
        push 0x7F0000
        push edx
        call public_6d0c8d0
        mov ebp, eax
        test ebp, ebp
        jne public_6ce79c8
        mov ebx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [edi+0x68]
        add esp, 4
        dec ecx
        mov dword ptr ds : [edi+0x68], ecx
        mov ecx, dword ptr ds : [edi+0x28]
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d0c730
        jmp public_6ce7bed
        public_6ce79c8 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x88]
        mov esi, dword ptr ds : [edx+0x88]
        push eax
        mov ebx, eax
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        shl ebx, 4
        add ebx, esi
        call dword ptr ds : [public_6d6420c]
        lea edx, ss:[esp+0xC0]
        push edx
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x30]
        push eax
/*FIXUP push offset public_6d65524 @0x6ce7a07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65524
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        push eax
        call dword ptr ds : [public_6d64208]
        mov eax, dword ptr ss : [esp+0xD4]
        mov edx, dword ptr ss : [esp+0xDC]
        mov ecx, 9
        lea esi, ss:[esp+0xE0]
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xD8]
        mov dword ptr ss : [esp+0x94], eax
        mov eax, dword ptr ds : [public_6d64a5c]
        mov dword ptr ss : [esp+0x98], ecx
        mov dword ptr ss : [esp+0x9C], edx
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp]
        add esp, 0x10
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C]
        push eax
        mov eax, dword ptr ds : [public_6d64a5c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [esi+0xA0]
        push 0
        lea ecx, ss:[esp+0x10C]
        mov esi, eax
        call public_6ce10d0
        mov eax, dword ptr ds : [public_6d8d6d4]
        test eax, eax
        jne public_6ce7a9a
        call public_6d5ff70
        mov dword ptr ds : [public_6d8d6d4], eax
        public_6ce7a9a : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x60]
        push ecx
        push esi
        lea ecx, ss:[esp+0x110]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x108]
        push edx
        lea ecx, ss:[esp+0x94]
        call public_6ce7c30
        fld dword ptr ss : [esp+0xBC]
        fsub dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC4]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC0]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_6ce7c10
        fld dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6ce7bdf
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x154]
        mov ecx, eax
        and ecx, 0x440
        cmp eax, ecx
        jne public_6ce7b51
        mov ecx, dword ptr ds : [esi+0x28]
        push esi
        push ebp
        call public_6d0c970
        jmp public_6ce7bad
        public_6ce7b51 : nop
        test ah, 8
        je public_6ce7b62
        mov ecx, dword ptr ds : [esi+0x28]
        push esi
        push ebp
        call public_6d0c970
        jmp public_6ce7bad
        public_6ce7b62 : nop
        mov ebx, dword ptr ds : [ebx+0xC]
        cmp ebx, 3
        je public_6ce7b79
        cmp ebx, 4
        je public_6ce7b79
        cmp ebx, 5
        mov byte ptr ss : [esp+0x13], 1
        jne public_6ce7b7e
        public_6ce7b79 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6ce7b7e : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce7b96
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce7b98
        public_6ce7b96 : nop
        xor eax, eax
        public_6ce7b98 : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        mov ecx, dword ptr ds : [esi+0x28]
        add eax, 0x164
        push eax
        push esi
        push ebp
        call public_6d0d370
        public_6ce7bad : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+0x68]
        add esp, 4
        dec ecx
        mov dword ptr ds : [esi+0x68], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        push esi
        mov dword ptr ss : [esp+0x18], edi
        call public_6d0c730
        jmp public_6ce7be9
        public_6ce7bdf : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        public_6ce7be9 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_6ce7bed : nop
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [edi+0x64]
        jne public_6ce7977
        pop ebp
        pop ebx
        public_6ce7bfc : nop
        pop edi
        pop esi
        add esp, 0x128
        ret 4
        UNREACHABLE_TRAP(0x6ce7930)
    }
}

#undef public_6ce795a
#undef public_6ce7962
#undef public_6ce7977
#undef public_6ce7980
#undef public_6ce79c8
#undef public_6ce7a9a
#undef public_6ce7b51
#undef public_6ce7b62
#undef public_6ce7b79
#undef public_6ce7b7e
#undef public_6ce7b96
#undef public_6ce7b98
#undef public_6ce7bad
#undef public_6ce7bdf
#undef public_6ce7be9
#undef public_6ce7bed
#undef public_6ce7bfc
