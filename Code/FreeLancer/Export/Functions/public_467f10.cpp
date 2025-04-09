#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eaf0);
CLANG_FORWARD_PROC_SYMBOL(public_465110);
CLANG_FORWARD_PROC_SYMBOL(public_4669c0);
CLANG_FORWARD_PROC_SYMBOL(public_468310);
CLANG_FORWARD_PROC_SYMBOL(public_579a10);
CLANG_FORWARD_PROC_SYMBOL(public_57a680);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d540);
CLANG_FORWARD_PROC_SYMBOL(public_58f730);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5a0840);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);

#define public_467f53 _public_467f53
#define public_467feb _public_467feb
#define public_467fff _public_467fff
#define public_46802c _public_46802c
#define public_468068 _public_468068
#define public_4680b9 _public_4680b9
#define public_4680c1 _public_4680c1
#define public_4680d3 _public_4680d3
#define public_468103 _public_468103
#define public_46811a _public_46811a
#define public_468142 _public_468142
#define public_468152 _public_468152
#define public_468165 _public_468165
#define public_4681b0 _public_4681b0
#define public_4681b6 _public_4681b6
#define public_4681d1 _public_4681d1
#define public_4681dc _public_4681dc
#define public_4681fe _public_4681fe
#define public_468209 _public_468209
#define public_468217 _public_468217

PROC_DECLARE(0x467f10, internal_467f10, public_467f10);
extern "C" NAKED register_t __cdecl internal_467f10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xEF02
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        jg public_46811a
        je public_4680c1
        cmp eax, 0x300D
        je public_467feb
        cmp eax, 0xEF01
        jne public_468152
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_467f53
        mov edx, dword ptr ds : [esi]
        add eax, 0x60
        push eax
        call dword ptr ds : [edx+0x14]
        public_467f53 : nop
        mov ecx, esi
        call public_468310
        mov eax, dword ptr ds : [esi+0x3C8]
        lea ecx, ds:[eax+0x4A0]
        call public_5ad970
        mov ecx, dword ptr ds : [esi+0x3C8]
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_4669c0
        mov eax, dword ptr ds : [esi+0x3C4]
        lea ecx, ds:[eax+0x4A0]
        call public_5ad970
        mov ecx, dword ptr ds : [esi+0x3C4]
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_465110
        mov dl, byte ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [esi+0x3B4]
        or dl, 3
        mov byte ptr ds : [esi+0x6C], dl
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        mov ecx, dword ptr ds : [esi+0x3B4]
        call public_57a680
        mov ecx, dword ptr ds : [esi+0x3B4]
        call public_579a10
        mov eax, dword ptr ds : [public_66da80]
        test eax, eax
        je public_468217
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        pop edi
        mov byte ptr ds : [eax+0x6C], cl
        mov al, 1
        pop esi
        ret 0xC
        public_467feb : nop
        cmp edi, dword ptr ds : [esi+0x3C4]
        je public_467fff
        cmp edi, dword ptr ds : [esi+0x3C8]
        jne public_468152
        public_467fff : nop
        push ebx
        mov ebx, dword ptr ds : [public_66da40]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_58d540
        test al, al
        je public_46802c
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        mov ecx, edi
        call public_58d0b0
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_46802c
        mov ebx, dword ptr ds : [eax+8]
        public_46802c : nop
        cmp ebx, dword ptr ds : [public_66d3fc]
        je public_4680b9
/*FIXUP push offset public_5cf04c @0x468038*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf04c
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [public_66d3fc], ebx
        call public_59da10
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_468068
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_45eaf0
        mov ecx, edi
        call public_57d330
        public_468068 : nop
        mov ecx, esi
        call public_468310
        mov eax, dword ptr ds : [esi+0x3C8]
        lea ecx, ds:[eax+0x4A0]
        call public_5ad970
        mov ecx, dword ptr ds : [esi+0x3C8]
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_4669c0
        mov eax, dword ptr ds : [esi+0x3C4]
        lea ecx, ds:[eax+0x4A0]
        call public_5ad970
        mov ecx, dword ptr ds : [esi+0x3C4]
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_465110
        public_4680b9 : nop
        pop ebx
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_4680c1 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4680d3
        push 0
        push esi
        call public_59dd00
        add esp, 8
        public_4680d3 : nop
        mov dl, byte ptr ds : [esi+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [esi+0x6C], dl
        mov al, byte ptr ds : [public_66da88]
        test al, al
        mov eax, dword ptr ds : [public_66da80]
        je public_468103
        test eax, eax
        je public_468217
        mov cl, byte ptr ds : [eax+0x6C]
        or cl, 3
        pop edi
        mov byte ptr ds : [eax+0x6C], cl
        mov al, 1
        pop esi
        ret 0xC
        public_468103 : nop
        test eax, eax
        je public_468217
        mov dl, byte ptr ds : [eax+0x6C]
        and dl, cl
        pop edi
        mov byte ptr ds : [eax+0x6C], dl
        mov al, 1
        pop esi
        ret 0xC
        public_46811a : nop
        mov ecx, eax
        sub ecx, 0xF001
        je public_468142
        dec ecx
        jne public_468152
        cmp edi, dword ptr ds : [esi+0x3C4]
        je public_468217
        cmp edi, dword ptr ds : [esi+0x3C8]
        jne public_468152
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_468142 : nop
        cmp edi, dword ptr ds : [esi+0x3C4]
        je public_468165
        cmp edi, dword ptr ds : [esi+0x3C8]
        je public_468165
        public_468152 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push edi
        push eax
        mov ecx, esi
        call public_5a0840
        pop edi
        pop esi
        ret 0xC
        public_468165 : nop
        cmp edi, dword ptr ds : [esi+0x3C8]
        jne public_468217
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, eax
        and ecx, 0xFFFF
        test eax, 0xFFFF0000
        jne public_468217
        cmp ecx, 4
        jae public_468217
        mov eax, dword ptr ds : [esi+0x3A8]
        cmp ecx, eax
        jne public_4681b0
        mov cl, byte ptr ds : [eax+esi+0x3AC]
        test cl, cl
        sete dl
        mov byte ptr ds : [eax+esi+0x3AC], dl
        jmp public_4681b6
        public_4681b0 : nop
        mov dword ptr ds : [esi+0x3A8], ecx
        public_4681b6 : nop
        mov ecx, esi
        call public_468310
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        jne public_4681d1
        xor eax, eax
        jmp public_4681dc
        public_4681d1 : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        public_4681dc : nop
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_4669c0
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx+0x4A4]
        test edx, edx
        jne public_4681fe
        xor eax, eax
        jmp public_468209
        public_4681fe : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        public_468209 : nop
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_465110
        public_468217 : nop
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x467f10)
    }
}

#undef public_467f53
#undef public_467feb
#undef public_467fff
#undef public_46802c
#undef public_468068
#undef public_4680b9
#undef public_4680c1
#undef public_4680d3
#undef public_468103
#undef public_46811a
#undef public_468142
#undef public_468152
#undef public_468165
#undef public_4681b0
#undef public_4681b6
#undef public_4681d1
#undef public_4681dc
#undef public_4681fe
#undef public_468209
#undef public_468217
