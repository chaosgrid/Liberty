#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ee71c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8dd0);

#define public_6ee6b9d _public_6ee6b9d
#define public_6ee6bac _public_6ee6bac
#define public_6ee6bbb _public_6ee6bbb
#define public_6ee6bc7 _public_6ee6bc7
#define public_6ee6bd6 _public_6ee6bd6
#define public_6ee6c22 _public_6ee6c22
#define public_6ee6c2f _public_6ee6c2f
#define public_6ee6c4a _public_6ee6c4a
#define public_6ee6c9b _public_6ee6c9b
#define public_6ee6d00 _public_6ee6d00

PROC_DECLARE(0x6ee6b70, internal_6ee6b70, public_6ee6b70);
extern "C" NAKED register_t __cdecl internal_6ee6b70()
{
    __asm
    {
        mov eax, 0x2010
        call public_6ee8da0
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2020]
        mov al, byte ptr ds : [esi+0x1C]
        push edi
        test al, 0x40
        mov eax, dword ptr ds : [esi]
        mov edi, ecx
        push eax
        je public_6ee6bac
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        mov ebx, eax
        cmp dword ptr ds : [esi+0x54], ebx
        jne public_6ee6bbb
        public_6ee6b9d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x2010
        ret 4
        public_6ee6bac : nop
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x10]
        mov ebx, eax
        public_6ee6bbb : nop
        mov dword ptr ds : [esi+0x54], ebx
        mov eax, dword ptr ds : [public_6eeaf64]
        test eax, eax
        je public_6ee6bd6
        public_6ee6bc7 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x2010
        ret 4
        public_6ee6bd6 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, edi
        call public_6ee31d0
        test al, al
        je public_6ee6b9d
        mov edi, dword ptr ds : [edi+0x4C]
        mov al, byte ptr ds : [esi+0x1C]
        sub edi, ebx
        test al, 0x20
        je public_6ee6c4a
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_6ee6c22
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6ee1670
        add esp, 4
        jmp public_6ee6c2f
        public_6ee6c22 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        fld dword ptr ss : [esp+0x14]
        and eax, 0xFFFFFFDF
        mov dword ptr ds : [esi+0x1C], eax
        public_6ee6c2f : nop
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], 0
        fild qword ptr ss : [esp+0x14]
        fmul st, st(1)
        call public_6ee8dd0
        fstp st(0)
        mov edi, eax
        public_6ee6c4a : nop
        mov dword ptr ss : [esp+0x14], edi
        mov edi, dword ptr ss : [esp+0x1C]
        movzx ecx, word ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], ecx
        fild qword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6ee949c]
        fimul dword ptr ss : [esp+0x1C]
        call public_6ee8dd0
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        test al, al
        je public_6ee6c9b
        mov ecx, dword ptr ds : [edi+0x10]
        cmp ebx, ecx
        jbe public_6ee6c9b
        mov ebp, dword ptr ds : [edi+0xC]
        mov eax, ebx
        sub eax, ebp
        sub ecx, ebp
        xor edx, edx
        div ecx
        add edx, ebp
        mov ebx, edx
        public_6ee6c9b : nop
        movzx eax, word ptr ds : [edi+0xA]
        mov ecx, dword ptr ds : [edi+0x14]
        mov ebp, eax
        imul ecx, eax
        imul ebp, ebx
        cmp ecx, ebp
        jbe public_6ee6b9d
        mov eax, dword ptr ds : [public_6eeaf68]
        test eax, eax
        je public_6ee6d00
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x1C]
        test al, al
        jne public_6ee6d00
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        push eax
        push ebp
        lea ecx, ss:[esp+0x28]
/*FIXUP push offset public_6eeacac @0x6ee6cd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeacac
        push ecx
        call public_6ee71c0
        mov edx, dword ptr ds : [public_6ee9008]
        push eax
        push 0xEAC
/*FIXUP push offset public_6eea070 @0x6ee6ceb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov ecx, 0x100003
/*FIXUP push offset public_6eea644 @0x6ee6cf5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea644
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x24
        public_6ee6d00 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        test byte ptr ds : [esi+0x1C], 0x40
        je public_6ee6bc7
        mov esi, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x24]
        mov al, byte ptr ss : [esp+0x10]
        pop edi
        pop esi
        not al
        pop ebp
        and al, 1
        pop ebx
        add esp, 0x2010
        ret 4
        UNREACHABLE_TRAP(0x6ee6b70)
    }
}

#undef public_6ee6b9d
#undef public_6ee6bac
#undef public_6ee6bbb
#undef public_6ee6bc7
#undef public_6ee6bd6
#undef public_6ee6c22
#undef public_6ee6c2f
#undef public_6ee6c4a
#undef public_6ee6c9b
#undef public_6ee6d00
