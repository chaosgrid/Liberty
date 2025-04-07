#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22f85);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d22fc3 _public_6d22fc3
#define public_6d2300f _public_6d2300f
#define public_6d23065 _public_6d23065
#define public_6d230ef _public_6d230ef
#define public_6d230f9 _public_6d230f9
#define public_6d2311a _public_6d2311a
#define public_6d23129 _public_6d23129
#define public_6d2313d _public_6d2313d
#define public_6d231bf _public_6d231bf
#define public_6d231c4 _public_6d231c4
#define public_6d231ea _public_6d231ea
#define public_6d2321f _public_6d2321f
#define public_6d23244 _public_6d23244
#define public_6d23277 _public_6d23277
#define public_6d23296 _public_6d23296
#define public_6d232b8 _public_6d232b8
#define public_6d232d2 _public_6d232d2
#define public_6d232db _public_6d232db
#define public_6d23301 _public_6d23301
#define public_6d23324 _public_6d23324
#define public_6d23351 _public_6d23351
#define public_6d23358 _public_6d23358
#define public_6d233cb _public_6d233cb
#define public_6d233d5 _public_6d233d5

PROC_DECLARE(0x6d22f85, internal_6d22f85, public_6d22f85);
extern "C" NAKED register_t __cdecl internal_6d22f85()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x170
        push esi
        push edi
        mov dword ptr ss : [ebp-0x160], ecx
        mov eax, dword ptr ss : [ebp-0x160]
        movzx ecx, byte ptr ds : [eax+0x1C]
        test ecx, ecx
        jne public_6d233d5
        lea edx, ss:[ebp-0x134]
        mov dword ptr ss : [ebp-0x108], edx
        mov eax, dword ptr ss : [ebp-0x160]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp-0x10C], ecx
        public_6d22fc3 : nop
        mov edx, dword ptr ss : [ebp-0x10C]
        movsx eax, byte ptr ds : [edx]
        cmp eax, 0xD
        je public_6d2300f
        lea ecx, ss:[ebp-0x110]
        cmp dword ptr ss : [ebp-0x108], ecx
        je public_6d2300f
        mov edx, dword ptr ss : [ebp-0x108]
        mov eax, dword ptr ss : [ebp-0x10C]
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx], cl
        mov edx, dword ptr ss : [ebp-0x108]
        add edx, 1
        mov dword ptr ss : [ebp-0x108], edx
        mov eax, dword ptr ss : [ebp-0x10C]
        add eax, 1
        mov dword ptr ss : [ebp-0x10C], eax
        jmp public_6d22fc3
        public_6d2300f : nop
        lea ecx, ss:[ebp-0x110]
        cmp dword ptr ss : [ebp-0x108], ecx
        jne public_6d23065
        mov edx, dword ptr ss : [ebp-0x108]
        mov byte ptr ds : [edx], 0x2E
        mov eax, dword ptr ss : [ebp-0x108]
        add eax, 1
        mov dword ptr ss : [ebp-0x108], eax
        mov ecx, dword ptr ss : [ebp-0x108]
        mov byte ptr ds : [ecx], 0x2E
        mov edx, dword ptr ss : [ebp-0x108]
        add edx, 1
        mov dword ptr ss : [ebp-0x108], edx
        mov eax, dword ptr ss : [ebp-0x108]
        mov byte ptr ds : [eax], 0x2E
        mov ecx, dword ptr ss : [ebp-0x108]
        add ecx, 1
        mov dword ptr ss : [ebp-0x108], ecx
        public_6d23065 : nop
        mov edx, dword ptr ss : [ebp-0x108]
        mov byte ptr ds : [edx], 0
        mov dword ptr ss : [ebp-0x104], 0x100
        lea eax, ss:[ebp-0x134]
        push eax
        mov ecx, dword ptr ss : [ebp-0x160]
        mov edx, dword ptr ds : [ecx+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+8]
        push eax
/*FIXUP push offset public_6d6bd08 @0x6d2308d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bd08
        push 0x100
        lea ecx, ss:[ebp-0x100]
        push ecx
        call dword ptr ds : [public_6d5e100]
        add esp, 0x18
        mov edx, dword ptr ss : [ebp-0x160]
        add edx, 0x20
        mov dword ptr ss : [ebp-0x15C], edx
        lea edi, ss:[ebp-0x100]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        add ecx, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x158], ecx
        mov dword ptr ss : [ebp-0x13C], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x13C], 0
        jbe public_6d230ef
        mov eax, dword ptr ss : [ebp-0x13C]
        mov dword ptr ss : [ebp-0x164], eax
        jmp public_6d230f9
        public_6d230ef : nop
        mov dword ptr ss : [ebp-0x164], 1
        public_6d230f9 : nop
        mov ecx, dword ptr ss : [ebp-0x164]
        mov dword ptr ss : [ebp-0x138], ecx
        cmp dword ptr ss : [ebp-0x138], 2
        ja public_6d2311a
        mov dword ptr ss : [ebp-0x168], 1
        jmp public_6d23129
        public_6d2311a : nop
        mov edx, dword ptr ss : [ebp-0x138]
        sub edx, 2
        mov dword ptr ss : [ebp-0x168], edx
        public_6d23129 : nop
        mov eax, dword ptr ss : [ebp-0x168]
        cmp eax, dword ptr ss : [ebp-0x158]
        jae public_6d2313d
        call dword ptr ds : [public_6d5e09c]
        public_6d2313d : nop
        mov ecx, dword ptr ss : [ebp-0x15C]
        cmp dword ptr ds : [ecx+4], 0
        je public_6d23296
        mov edx, dword ptr ss : [ebp-0x15C]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        test ecx, ecx
        je public_6d23296
        mov edx, dword ptr ss : [ebp-0x15C]
        mov eax, dword ptr ds : [edx+4]
        movzx ecx, byte ptr ds : [eax-1]
        cmp ecx, 0xFF
        je public_6d23296
        cmp dword ptr ss : [ebp-0x158], 0
        jne public_6d23277
        mov edx, dword ptr ss : [ebp-0x15C]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x16C], eax
        mov ecx, dword ptr ss : [ebp-0x16C]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x16C]
        mov byte ptr ds : [eax], dl
        xor ecx, ecx
        test ecx, ecx
        je public_6d231bf
        mov edx, dword ptr ss : [ebp-0x15C]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d231c4
        public_6d231bf : nop
        jmp public_6d23244
        public_6d231c4 : nop
        mov eax, dword ptr ss : [ebp-0x15C]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        test edx, edx
        je public_6d231ea
        mov eax, dword ptr ss : [ebp-0x15C]
        mov ecx, dword ptr ds : [eax+4]
        movzx edx, byte ptr ds : [ecx-1]
        cmp edx, 0xFF
        jne public_6d2321f
        public_6d231ea : nop
        mov eax, dword ptr ss : [ebp-0x15C]
        mov ecx, dword ptr ds : [eax+0xC]
        add ecx, 2
        mov dword ptr ss : [ebp-0x144], ecx
        mov edx, dword ptr ss : [ebp-0x15C]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x140], eax
        mov ecx, dword ptr ss : [ebp-0x140]
        push ecx
        call public_6d2f249
        add esp, 4
        jmp public_6d23244
        public_6d2321f : nop
        mov edx, dword ptr ss : [ebp-0x15C]
        mov eax, dword ptr ds : [edx+4]
        sub eax, 1
        mov dword ptr ss : [ebp-0x170], eax
        mov ecx, dword ptr ss : [ebp-0x170]
        mov dl, byte ptr ds : [ecx]
        sub dl, 1
        mov eax, dword ptr ss : [ebp-0x170]
        mov byte ptr ds : [eax], dl
        public_6d23244 : nop
        mov ecx, dword ptr ss : [ebp-0x15C]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x15C]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x15C]
        mov dword ptr ds : [eax+0xC], 0
        mov byte ptr ss : [ebp-0x145], 0
        jmp public_6d23358
        public_6d23277 : nop
        mov ecx, dword ptr ss : [ebp-0x158]
        push ecx
        mov ecx, dword ptr ss : [ebp-0x15C]
        call dword ptr ds : [public_6d5e088]
        mov byte ptr ss : [ebp-0x145], 1
        jmp public_6d23358
        public_6d23296 : nop
        cmp dword ptr ss : [ebp-0x158], 0
        jne public_6d232db
        mov edx, 1
        test edx, edx
        je public_6d232b8
        push 1
        mov ecx, dword ptr ss : [ebp-0x15C]
        call dword ptr ds : [public_6d5e0a4]
        jmp public_6d232d2
        public_6d232b8 : nop
        mov eax, dword ptr ss : [ebp-0x15C]
        cmp dword ptr ds : [eax+4], 0
        je public_6d232d2
        push 0
        mov ecx, dword ptr ss : [ebp-0x15C]
        call dword ptr ds : [public_6d5e098]
        public_6d232d2 : nop
        mov byte ptr ss : [ebp-0x145], 0
        jmp public_6d23358
        public_6d232db : nop
        mov ecx, 1
        test ecx, ecx
        je public_6d23324
        mov edx, dword ptr ss : [ebp-0x15C]
        cmp dword ptr ds : [edx+0xC], 0x1F
        ja public_6d23301
        mov eax, dword ptr ss : [ebp-0x15C]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [ebp-0x158]
        jae public_6d23324
        public_6d23301 : nop
        push 1
        mov ecx, dword ptr ss : [ebp-0x15C]
        call dword ptr ds : [public_6d5e0a4]
        mov edx, dword ptr ss : [ebp-0x158]
        push edx
        mov ecx, dword ptr ss : [ebp-0x15C]
        call dword ptr ds : [public_6d5e088]
        jmp public_6d23351
        public_6d23324 : nop
        mov eax, 1
        test eax, eax
        jne public_6d23351
        mov ecx, dword ptr ss : [ebp-0x15C]
        mov edx, dword ptr ds : [ecx+0xC]
        cmp edx, dword ptr ss : [ebp-0x158]
        jae public_6d23351
        mov eax, dword ptr ss : [ebp-0x158]
        push eax
        mov ecx, dword ptr ss : [ebp-0x15C]
        call dword ptr ds : [public_6d5e088]
        public_6d23351 : nop
        mov byte ptr ss : [ebp-0x145], 1
        public_6d23358 : nop
        movzx ecx, byte ptr ss : [ebp-0x145]
        test ecx, ecx
        je public_6d233cb
        mov edx, dword ptr ss : [ebp-0x15C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x14C], eax
        mov ecx, dword ptr ss : [ebp-0x158]
        lea esi, ss:[ebp-0x100]
        mov edi, dword ptr ss : [ebp-0x14C]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [ebp-0x14D], 0
        mov eax, dword ptr ss : [ebp-0x15C]
        mov ecx, dword ptr ss : [ebp-0x158]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [ebp-0x15C]
        mov eax, dword ptr ds : [edx+4]
        add eax, dword ptr ss : [ebp-0x158]
        mov dword ptr ss : [ebp-0x154], eax
        mov ecx, dword ptr ss : [ebp-0x154]
        mov dl, byte ptr ss : [ebp-0x14D]
        mov byte ptr ds : [ecx], dl
        public_6d233cb : nop
        mov eax, dword ptr ss : [ebp-0x160]
        mov byte ptr ds : [eax+0x1C], 1
        public_6d233d5 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d22f85)
    }
}

#undef public_6d22fc3
#undef public_6d2300f
#undef public_6d23065
#undef public_6d230ef
#undef public_6d230f9
#undef public_6d2311a
#undef public_6d23129
#undef public_6d2313d
#undef public_6d231bf
#undef public_6d231c4
#undef public_6d231ea
#undef public_6d2321f
#undef public_6d23244
#undef public_6d23277
#undef public_6d23296
#undef public_6d232b8
#undef public_6d232d2
#undef public_6d232db
#undef public_6d23301
#undef public_6d23324
#undef public_6d23351
#undef public_6d23358
#undef public_6d233cb
#undef public_6d233d5
