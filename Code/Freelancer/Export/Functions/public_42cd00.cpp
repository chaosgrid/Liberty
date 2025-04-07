#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cd00);
CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_42d030);
CLANG_FORWARD_PROC_SYMBOL(public_42d090);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8d2c);

#define public_42cd44 _public_42cd44
#define public_42cda9 _public_42cda9
#define public_42cdab _public_42cdab
#define public_42cdc4 _public_42cdc4
#define public_42cde6 _public_42cde6
#define public_42ceac _public_42ceac
#define public_42cec2 _public_42cec2
#define public_42cee0 _public_42cee0
#define public_42cee4 _public_42cee4
#define public_42cf21 _public_42cf21
#define public_42cf2d _public_42cf2d
#define public_42cf39 _public_42cf39
#define public_42cf43 _public_42cf43
#define public_42cf61 _public_42cf61
#define public_42cf6b _public_42cf6b
#define public_42cf8a _public_42cf8a
#define public_42cfb1 _public_42cfb1
#define public_42cfbf _public_42cfbf

PROC_DECLARE(0x42cd00, internal_42cd00, public_42cd00);
extern "C" NAKED register_t __cdecl internal_42cd00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8d2c @0x42cd02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8d2c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x480
        mov eax, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        xor ebx, ebx
        push ebx
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x24]
        xor ebp, ebp
        cmp eax, ebx
        jbe public_42cda9
        public_42cd44 : nop
        mov eax, dword ptr ds : [public_5c6d38]
        lea edx, ss:[esp+0x14]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push 0x3FF
        lea edx, ss:[esp+0x94]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea eax, ss:[esp+0x94]
        push esi
        push eax
        call dword ptr ds : [public_5c70e8]
        add esp, 0xC
        test eax, eax
        je public_42cdc4
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x24]
        inc ebp
        cmp ebp, eax
        jb public_42cd44
        public_42cda9 : nop
        xor al, al
        public_42cdab : nop
        mov ecx, dword ptr ss : [esp+0x490]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48C
        ret 
        public_42cdc4 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        call dword ptr ds : [edx+0x40]
        cmp dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x13], bl
        mov dword ptr ss : [esp+0x18], ebx
        jbe public_42cf8a
        public_42cde6 : nop
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x7C], ebx
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x4A4], ebx
        call dword ptr ds : [ecx+0x44]
        mov esi, dword ptr ss : [esp+0x48]
        mov edi, offset public_5ca818
        mov ecx, 8
        xor edx, edx
        repe cmpsb
        jne public_42cee4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        push ebp
        mov byte ptr ss : [esp+0x4A4], 1
        call dword ptr ds : [eax+0x48]
        cmp dword ptr ss : [esp+0x28], 7
        jne public_42ceac
        mov eax, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x20]
        push eax
        lea esi, ds:[edi+4]
        push esi
        call dword ptr ds : [public_5c60cc]
        mov esi, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0x48], esi
        call dword ptr ds : [public_5c6d14]
        mov ecx, dword ptr ds : [public_5c6d4c]
        add esp, 0xC
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        add edi, 8
        push edi
        lea ecx, ss:[esp+0x40]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov byte ptr ss : [esp+0x13], 1
        public_42ceac : nop
        mov eax, dword ptr ss : [esp+0x28]
        sub eax, 5
        mov byte ptr ss : [esp+0x498], bl
        je public_42cec2
        dec eax
        je public_42cf21
        dec eax
        jne public_42cee0
        public_42cec2 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_42cee0
        push eax
        push ebx
        call dword ptr ds : [public_5c6f80]
        push eax
        call dword ptr ds : [public_5c6ed4]
        lea esp, ss:[esp]
        public_42cee0 : nop
        mov dword ptr ss : [esp+0x2C], ebx
        public_42cee4 : nop
        lea ecx, ss:[esp+0x7C]
        mov dword ptr ss : [esp+0x498], 3
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        call public_42cfd0
        mov eax, dword ptr ss : [esp+0x68]
        sub eax, 5
        mov byte ptr ss : [esp+0x498], 2
        je public_42cf39
        dec eax
        je public_42cf2d
        dec eax
        je public_42cf39
        jmp public_42cf43
        public_42cf21 : nop
        push ebx
        lea ecx, ss:[esp+0x2C]
        call public_42d090
        jmp public_42cee0
        public_42cf2d : nop
        push ebx
        lea ecx, ss:[esp+0x6C]
        call public_42d090
        jmp public_42cf43
        public_42cf39 : nop
        push ebx
        lea ecx, ss:[esp+0x6C]
        call public_42d030
        public_42cf43 : nop
        mov eax, dword ptr ss : [esp+0x54]
        sub eax, 5
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x498], 0xFFFFFFFF
        je public_42cf61
        dec eax
        je public_42cfbf
        dec eax
        jne public_42cf6b
        public_42cf61 : nop
        push ebx
        lea ecx, ss:[esp+0x58]
        call public_42d030
        public_42cf6b : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x18], eax
        jb public_42cde6
        cmp byte ptr ss : [esp+0x13], bl
        jne public_42cfb1
        public_42cf8a : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x9C
/*FIXUP push offset public_5ca7e4 @0x42cf9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca7e4
        mov eax, 0x100001
/*FIXUP push offset public_5ca7a0 @0x42cfa6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca7a0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_42cfb1 : nop
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+8]
        mov al, 1
        jmp public_42cdab
        public_42cfbf : nop
        push ebx
        lea ecx, ss:[esp+0x58]
        call public_42d090
        jmp public_42cf6b
        UNREACHABLE_TRAP(0x42cd00)
    }
}

#undef public_42cd44
#undef public_42cda9
#undef public_42cdab
#undef public_42cdc4
#undef public_42cde6
#undef public_42ceac
#undef public_42cec2
#undef public_42cee0
#undef public_42cee4
#undef public_42cf21
#undef public_42cf2d
#undef public_42cf39
#undef public_42cf43
#undef public_42cf61
#undef public_42cf6b
#undef public_42cf8a
#undef public_42cfb1
#undef public_42cfbf
