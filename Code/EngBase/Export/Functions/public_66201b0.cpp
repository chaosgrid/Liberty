#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e50);
CLANG_FORWARD_PROC_SYMBOL(public_66201b0);
CLANG_FORWARD_PROC_SYMBOL(public_66204b0);

#define public_662028c _public_662028c
#define public_66202c0 _public_66202c0
#define public_66202c7 _public_66202c7
#define public_662031e _public_662031e
#define public_6620345 _public_6620345
#define public_662034c _public_662034c
#define public_6620350 _public_6620350
#define public_6620355 _public_6620355
#define public_662035c _public_662035c
#define public_662036e _public_662036e
#define public_6620399 _public_6620399
#define public_66203cb _public_66203cb
#define public_6620404 _public_6620404
#define public_6620459 _public_6620459
#define public_662047a _public_662047a
#define public_6620489 _public_6620489
#define public_6620492 _public_6620492

PROC_DECLARE(0x66201b0, internal_66201b0, public_66201b0);
extern "C" NAKED register_t __cdecl internal_66201b0()
{
    __asm
    {
        sub esp, 0xBC
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], offset public_662a030
        xor esi, esi
        rep stosd
        mov ecx, dword ptr ss : [esp+0xD8]
        mov eax, dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x54], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], esi
        or ebx, 0xFFFFFFFF
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x34], 0x80000000
        mov dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+0x40], 3
        mov dword ptr ss : [esp+0x44], 0x8000080
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x24], 0x34
        call public_6612e50
        mov eax, dword ptr ss : [esp+0xD4]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_662036e
        mov edi, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_662a030 @0x662024d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a030
/*FIXUP push offset public_66295b8 @0x6620252*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66295b8
        lea ecx, ss:[esp+0xA0]
        call public_66204b0
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x98]
        push eax
        push edi
        call dword ptr ds : [edx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_66202c7
        mov ecx, dword ptr ds : [edi]
        push esi
        push ebp
        push edi
        call dword ptr ds : [ecx+0x28]
        cmp eax, 0x3F
        mov esi, eax
        jb public_662028c
        mov esi, 0x3F
        public_662028c : nop
        mov ebx, dword ptr ss : [esp+0xE0]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x18]
        push 0
        push eax
        push esi
        push ebx
        push ebp
        push edi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_6620345
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        jne public_6620345
        mov esi, 1
        mov byte ptr ds : [eax+ebx], 0
        public_66202c0 : nop
        mov ecx, dword ptr ds : [edi]
        push ebp
        push edi
        call dword ptr ds : [ecx+0x10]
        public_66202c7 : nop
        neg esi
        mov edi, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_662a030 @0x66202cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a030
        sbb esi, esi
/*FIXUP push offset public_66295c4 @0x66202d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66295c4
        and esi, 0x7FFFBFFB
        lea ecx, ss:[esp+0xA0]
        add esi, 0x80004005
        mov ebx, esi
        call public_66204b0
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x98]
        push eax
        push edi
        xor ebp, ebp
        call dword ptr ds : [edx+0x7C]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_662035c
        mov ecx, dword ptr ds : [edi]
        push ebp
        push esi
        push edi
        call dword ptr ds : [ecx+0x28]
        cmp eax, 0x3F
        mov ebp, eax
        jb public_662031e
        mov ebp, 0x3F
        public_662031e : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x18]
        push 0
        push eax
        lea ecx, ss:[esp+0x60]
        push ebp
        push ecx
        push esi
        push edi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_662034c
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        jne public_662034c
        mov ebp, 1
        jmp public_6620350
        public_6620345 : nop
        xor esi, esi
        jmp public_66202c0
        public_662034c : nop
        xor ebp, ebp
        jmp public_6620355
        public_6620350 : nop
        mov byte ptr ss : [esp+eax+0x58], 0
        public_6620355 : nop
        mov edx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [edx+0x10]
        public_662035c : nop
        neg ebp
        sbb ebp, ebp
        and ebp, 0x7FFFBFFB
        add ebp, 0x80004005
        xor esi, esi
        public_662036e : nop
        lea ecx, ss:[esp+0x14]
        call public_6612e50
        cmp ebx, esi
        jl public_6620489
        cmp ebp, esi
        jl public_6620489
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        je public_6620399
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], esi
        public_6620399 : nop
        mov eax, dword ptr ss : [esp+0xDC]
        mov edi, dword ptr ss : [esp+0x20]
        push eax
        lea ecx, ss:[esp+0x14]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x5C]
        push ecx
        push eax
        push edi
        call dword ptr ds : [edx+0x28]
        test eax, eax
        je public_6620404
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        je public_66203cb
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], esi
        public_66203cb : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push esi
        lea ecx, ss:[esp+0x5C]
        push eax
        push ecx
        push edi
        call dword ptr ds : [edx+0x28]
        test eax, eax
        je public_6620404
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        je public_6620492
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xBC
        ret 0x14
        public_6620404 : nop
        mov esi, dword ptr ds : [public_662900c]
        lea ecx, ss:[esp+0x58]
        lea eax, ss:[esp+0x58]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        call esi
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        cmp eax, 0xFFFFFFFF
        jne public_6620459
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6620492
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xBC
        ret 0x14
        public_6620459 : nop
        mov edi, dword ptr ss : [esp+0xE0]
        push edi
        mov dword ptr ds : [edi+0x44], eax
        call esi
        mov dword ptr ds : [edi+0x40], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 4
        test eax, eax
        je public_662047a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_662047a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xBC
        ret 0x14
        public_6620489 : nop
        lea ecx, ss:[esp+0x10]
        call public_6612e50
        public_6620492 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0xBC
        ret 0x14
        UNREACHABLE_TRAP(0x66201b0)
    }
}

#undef public_662028c
#undef public_66202c0
#undef public_66202c7
#undef public_662031e
#undef public_6620345
#undef public_662034c
#undef public_6620350
#undef public_6620355
#undef public_662035c
#undef public_662036e
#undef public_6620399
#undef public_66203cb
#undef public_6620404
#undef public_6620459
#undef public_662047a
#undef public_6620489
#undef public_6620492
