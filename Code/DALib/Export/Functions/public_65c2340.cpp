#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3510);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);
CLANG_FORWARD_JUMP_SYMBOL(public_65c6e0a);

#define public_65c2376 _public_65c2376
#define public_65c23e0 _public_65c23e0
#define public_65c23ef _public_65c23ef
#define public_65c23fd _public_65c23fd
#define public_65c240a _public_65c240a
#define public_65c2430 _public_65c2430
#define public_65c243f _public_65c243f
#define public_65c244d _public_65c244d
#define public_65c246e _public_65c246e
#define public_65c24da _public_65c24da
#define public_65c24e6 _public_65c24e6

PROC_DECLARE(0x65c2340, internal_65c2340, public_65c2340);
extern "C" NAKED register_t __cdecl internal_65c2340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_65c6e0a @0x65c2342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_65c6e0a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        mov al, byte ptr ds : [ecx+8]
        test al, al
        mov dword ptr ss : [esp], ecx
        je public_65c2376
        xor al, al
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        public_65c2376 : nop
        mov al, byte ptr ss : [esp+0x34]
        push ebx
        push esi
        push edi
        push 0
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x14], al
        call dword ptr ds : [public_65c7064]
        mov cl, byte ptr ss : [esp+0x40]
        mov byte ptr ss : [esp+0x20], cl
        push 0
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [public_65c7064]
        mov edi, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ds : [public_65c70a8]
        push edi
        mov dword ptr ss : [esp+0x3C], 1
        call ebx
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_65c7068]
        test al, al
        je public_65c23fd
        test esi, esi
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, edi
        jbe public_65c23ef
        mov edx, esi
        public_65c23e0 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_65c23e0
        public_65c23ef : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], esi
        mov word ptr ds : [edx+esi*2], 0
        public_65c23fd : nop
        mov edi, dword ptr ss : [esp+0x44]
        test edi, edi
        jne public_65c240a
        mov edi, offset public_65c7470
        public_65c240a : nop
        push edi
        call ebx
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_65c7068]
        test al, al
        je public_65c244d
        test esi, esi
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, edi
        jbe public_65c243f
        mov edx, esi
        nop 
        public_65c2430 : nop
        mov di, word ptr ds : [ecx]
        mov word ptr ds : [eax], di
        add eax, 2
        add ecx, 2
        dec edx
        jne public_65c2430
        public_65c243f : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], esi
        mov word ptr ds : [eax+esi*2], 0
        public_65c244d : nop
        mov ebx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [ebx+0x84]
        mov edi, dword ptr ds : [esi+4]
        push 0x28
        call public_65c6a66
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        mov ecx, edi
        jne public_65c246e
        mov ecx, eax
        public_65c246e : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_65c3510
        mov esi, dword ptr ds : [ebx+0x88]
        add esp, 8
        inc esi
        mov dword ptr ds : [ebx+0x88], esi
        push 1
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x3C], 2
        call dword ptr ds : [public_65c7064]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        pop edi
        pop esi
        pop ebx
        je public_65c24e6
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65c24da
        cmp cl, 0xFF
        je public_65c24da
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov al, 1
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        public_65c24da : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_65c6a60
        add esp, 4
        public_65c24e6 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov al, 1
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x65c2340)
    }
}

#undef public_65c2376
#undef public_65c23e0
#undef public_65c23ef
#undef public_65c23fd
#undef public_65c240a
#undef public_65c2430
#undef public_65c243f
#undef public_65c244d
#undef public_65c246e
#undef public_65c24da
#undef public_65c24e6
