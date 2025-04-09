#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9e0);
CLANG_FORWARD_PROC_SYMBOL(public_4ddeb0);
CLANG_FORWARD_PROC_SYMBOL(public_58a580);

#define public_4dded3 _public_4dded3
#define public_4ddef2 _public_4ddef2
#define public_4ddefc _public_4ddefc
#define public_4ddf0a _public_4ddf0a
#define public_4ddf2b _public_4ddf2b
#define public_4ddf30 _public_4ddf30
#define public_4ddff3 _public_4ddff3
#define public_4ddfff _public_4ddfff
#define public_4de027 _public_4de027
#define public_4de02f _public_4de02f
#define public_4de060 _public_4de060
#define public_4de098 _public_4de098

PROC_DECLARE(0x4ddeb0, internal_4ddeb0, public_4ddeb0);
extern "C" NAKED register_t __cdecl internal_4ddeb0()
{
    __asm
    {
        sub esp, 0x4C
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_4dd9e0
        mov eax, dword ptr ss : [ebp+0x590]
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_4dded3
        mov dword ptr ss : [esp+0xC], eax
        jmp public_4ddef2
        public_4dded3 : nop
        mov ecx, dword ptr ss : [ebp+0x594]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0xC], edx
        mov eax, edx
        public_4ddef2 : nop
        xor ecx, ecx
        cmp eax, 0xA
        jle public_4ddefc
        lea ecx, ds:[eax-0xA]
        public_4ddefc : nop
        cmp dword ptr ss : [ebp+0x5C8], ecx
        jbe public_4ddf0a
        mov dword ptr ss : [ebp+0x5C8], ecx
        public_4ddf0a : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0x5C8]
        cmp ebx, eax
        jge public_4de02f
        lea eax, ds:[ebx+ebx*8]
        shl eax, 2
        mov dword ptr ss : [esp+0x18], eax
        lea edi, ss:[ebp+0x508]
        jmp public_4ddf30
        public_4ddf2b : nop
        mov eax, dword ptr ss : [esp+0x18]
        nop 
        public_4ddf30 : nop
        mov esi, dword ptr ss : [ebp+0x590]
        mov ecx, dword ptr ds : [public_6119f8]
        push ecx
        add esi, eax
        mov eax, dword ptr ds : [public_67eca8]
        mov word ptr ds : [public_66fc60], 0
        mov edx, dword ptr ds : [esi+8]
/*FIXUP push offset public_66fc60 @0x4ddf50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push edx
        push eax
        call public_4347e0
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x28]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push 0
/*FIXUP push offset public_66fc60 @0x4ddf86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        inc ebx
        push ebx
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_5d7c04 @0x4ddf99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7c04
        push eax
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [edi+0x28]
        call public_58a580
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ecx, dword ptr ds : [edi+0x50]
        push 0
        jl public_4ddff3
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+4]
        push eax
        lea ecx, ss:[esp+0x40]
/*FIXUP push offset public_5d7c04 @0x4ddfd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7c04
        push ecx
        call dword ptr ds : [public_5c71ec]
        mov ecx, dword ptr ds : [edi+0x50]
        add esp, 0xC
        lea edx, ss:[esp+0x3C]
        push edx
        call public_58a580
        jmp public_4ddfff
        public_4ddff3 : nop
        mov eax, dword ptr ds : [ecx]
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4ddfff : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        add edi, 4
        cmp eax, 0xA
        mov dword ptr ss : [esp+0x14], eax
        jge public_4de027
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        add ecx, 0x24
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jl public_4ddf2b
        public_4de027 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        public_4de02f : nop
        mov ecx, dword ptr ss : [ebp+0x5C4]
        mov edx, dword ptr ds : [ecx]
        dec eax
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        cmp esi, 0xA
        pop ebx
        jge public_4de098
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, 0xA
        lea esi, ss:[ebp+esi*4+0x558]
        sub edi, eax
        nop 
        lea esp, ss:[esp]
        public_4de060 : nop
        mov ecx, dword ptr ds : [esi-0x28]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi-0x50]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        add esi, 4
        call dword ptr ds : [eax+0xA8]
        dec edi
        jne public_4de060
        public_4de098 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x4ddeb0)
    }
}

#undef public_4dded3
#undef public_4ddef2
#undef public_4ddefc
#undef public_4ddf0a
#undef public_4ddf2b
#undef public_4ddf30
#undef public_4ddff3
#undef public_4ddfff
#undef public_4de027
#undef public_4de02f
#undef public_4de060
#undef public_4de098
