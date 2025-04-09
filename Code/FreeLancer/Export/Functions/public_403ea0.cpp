#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403200);
CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_4042c0);
CLANG_FORWARD_PROC_SYMBOL(public_404580);
CLANG_FORWARD_PROC_SYMBOL(public_4045b0);
CLANG_FORWARD_PROC_SYMBOL(public_4045d0);
CLANG_FORWARD_PROC_SYMBOL(public_404d90);
CLANG_FORWARD_PROC_SYMBOL(public_404e40);
CLANG_FORWARD_PROC_SYMBOL(public_404f00);
CLANG_FORWARD_PROC_SYMBOL(public_405840);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8401);

#define public_403f82 _public_403f82
#define public_403fa4 _public_403fa4
#define public_403fd3 _public_403fd3
#define public_403ff7 _public_403ff7
#define public_4040df _public_4040df
#define public_404111 _public_404111
#define public_40413b _public_40413b
#define public_40414f _public_40414f
#define public_40415f _public_40415f
#define public_4041c0 _public_4041c0
#define public_4041ee _public_4041ee
#define public_404200 _public_404200
#define public_404207 _public_404207
#define public_404211 _public_404211
#define public_404267 _public_404267

PROC_DECLARE(0x403ea0, internal_403ea0, public_403ea0);
extern "C" NAKED register_t __cdecl internal_403ea0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8401 @0x403ea2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8401
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xA8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC4]
        push edi
        lea ecx, ss:[esp+0x3C]
        push ecx
        push 0x88
        mov dword ptr ss : [esp+0x3C], esi
        mov dword ptr ss : [esp+0x40], 0x88
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xF4]
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        lea eax, ss:[esp+0x48]
        push eax
        push 0x8B
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], 0x8B
        mov edx, dword ptr ds : [esi]
        push esi
        mov dword ptr ss : [esp+0xCC], 0
        call dword ptr ds : [edx+0xF4]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0x16
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], 0x16
        mov eax, dword ptr ds : [esi]
        push esi
        mov byte ptr ss : [esp+0xCC], 1
        call dword ptr ds : [eax+0xF4]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax]
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        mov bl, 2
        mov byte ptr ss : [esp+0xC0], bl
        mov edi, offset public_5c7520
        mov eax, 0x89
        public_403f82 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_403f82
        mov edi, offset public_5c7540
        mov eax, 0x8D
        public_403fa4 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_403fa4
        mov edx, dword ptr ds : [esi]
        push eax
        push 0xB
        push eax
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edi, offset public_5c7568
        mov eax, 1
        public_403fd3 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_403fd3
        mov edi, offset public_5c75a0
        mov eax, 1
        public_403ff7 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push 1
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_403ff7
        mov eax, dword ptr ds : [esi]
        push 0
        push 0x18
        push 0
        push esi
        call dword ptr ds : [eax+0xF8]
        mov ecx, dword ptr ds : [esi]
        push 3
        push 0xD
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi]
        push 3
        push 0xE
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ss : [esp+0xCC]
        cmp eax, dword ptr ds : [public_61648c]
        jne public_40415f
        mov ecx, dword ptr ds : [public_616498]
        test ecx, ecx
        jne public_4040df
        lea ecx, ss:[esp+0x4C]
        call public_4045b0
        push eax
/*FIXUP push offset public_616474 @0x404069*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616474
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0xC8], 3
        call public_404f00
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, offset public_616478
        mov byte ptr ss : [esp+0xC8], 4
        call public_404e40
        lea ecx, ss:[esp+0x84]
        call public_403200
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0xC0], bl
        call public_403200
        mov edx, dword ptr ss : [esp+0x2C]
        mov al, byte ptr ss : [esp+0x30]
        test al, al
        lea ecx, ds:[edx+0x10]
        mov dword ptr ds : [public_616498], ecx
        je public_4040df
        push 1
        push 0
/*FIXUP push offset public_6101d8 @0x4040cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101d8
        call public_4045d0
        mov ecx, dword ptr ds : [public_616498]
        public_4040df : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov ebp, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d80]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_5c6dd0]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_5c6df8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], eax
        lea ebx, ds:[ecx+0xC]
        public_404111 : nop
        mov edi, dword ptr ds : [ebx]
        test edi, edi
        je public_40414f
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi+0x18]
        lea eax, ds:[edx+ecx*4]
        test eax, eax
        je public_40413b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        push ebp
        mov ecx, edi
        call public_4042c0
        public_40413b : nop
        push edi
        mov ecx, ebx
        call public_404d90
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_404580
        jmp public_404111
        public_40414f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x18], 0
        jmp public_404207
        public_40415f : nop
        lea edx, ss:[esp+0xCC]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, offset public_616478
        call public_432240
        mov ebp, dword ptr ss : [esp+0x18]
        cmp ebp, dword ptr ds : [public_61647c]
        je public_404207
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_5c6d80]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [public_5c6dd0]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [public_5c6df8]
        mov edx, dword ptr ds : [ecx]
        add ebp, 0x10
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], edx
        lea ebx, ss:[ebp+0xC]
        nop 
        lea esp, ss:[esp]
        public_4041c0 : nop
        mov edi, dword ptr ds : [ebx]
        test edi, edi
        je public_404200
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x18]
        lea edx, ds:[ecx+eax*4]
        test edx, edx
        je public_4041ee
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_4042c0
        public_4041ee : nop
        push edi
        mov ecx, ebx
        call public_404d90
        push edi
        mov ecx, ebp
        call public_404580
        jmp public_4041c0
        public_404200 : nop
        mov dword ptr ss : [ebp+0x18], 0
        public_404207 : nop
        mov edi, offset public_5c7558
        mov eax, 0x8D
        public_404211 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push esi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_404211
        mov eax, dword ptr ds : [esi]
        push 1
        push 0xD
        push 0
        push esi
        call dword ptr ds : [eax+0xF8]
        mov ecx, dword ptr ds : [esi]
        push 1
        push 0xE
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [public_616490]
        cmp dword ptr ds : [public_616474], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_404267
        mov dword ptr ds : [public_616474], eax
        mov dword ptr ds : [public_616498], 0
        public_404267 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push eax
        mov byte ptr ss : [esp+0xBC], 1
        call dword ptr ds : [edx+0xF0]
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0xB0], 0
        call public_405840
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xB0], 0xFFFFFFFF
        call public_405840
        mov ecx, dword ptr ss : [esp+0xA8]
        mov dword ptr fs : [0], ecx
        add esp, 0xB4
        ret 
        UNREACHABLE_TRAP(0x403ea0)
    }
}

#undef public_403f82
#undef public_403fa4
#undef public_403fd3
#undef public_403ff7
#undef public_4040df
#undef public_404111
#undef public_40413b
#undef public_40414f
#undef public_40415f
#undef public_4041c0
#undef public_4041ee
#undef public_404200
#undef public_404207
#undef public_404211
#undef public_404267
