#include "Server-PCH.h"


#define public_6ceaaa2 _public_6ceaaa2
#define public_6ceaab3 _public_6ceaab3
#define public_6ceaabd _public_6ceaabd
#define public_6ceaadc _public_6ceaadc
#define public_6ceab0f _public_6ceab0f
#define public_6ceab48 _public_6ceab48
#define public_6ceab4a _public_6ceab4a
#define public_6ceab70 _public_6ceab70
#define public_6ceab74 _public_6ceab74
#define public_6ceab86 _public_6ceab86
#define public_6ceab88 _public_6ceab88
#define public_6ceabbf _public_6ceabbf
#define public_6ceabc1 _public_6ceabc1
#define public_6ceac09 _public_6ceac09
#define public_6ceac0b _public_6ceac0b
#define public_6ceac21 _public_6ceac21
#define public_6ceac25 _public_6ceac25
#define public_6ceac29 _public_6ceac29
#define public_6ceac40 _public_6ceac40
#define public_6ceac44 _public_6ceac44
#define public_6ceac51 _public_6ceac51
#define public_6ceac59 _public_6ceac59
#define public_6ceaca3 _public_6ceaca3
#define public_6ceaca9 _public_6ceaca9
#define public_6ceacbe _public_6ceacbe
#define public_6ceacd9 _public_6ceacd9
#define public_6ceacdf _public_6ceacdf
#define public_6ceacf6 _public_6ceacf6
#define public_6cead1d _public_6cead1d
#define public_6cead1f _public_6cead1f
#define public_6cead48 _public_6cead48
#define public_6cead76 _public_6cead76
#define public_6cead78 _public_6cead78
#define public_6cead98 _public_6cead98
#define public_6ceada8 _public_6ceada8

PROC_DECLARE(0x6ceaa80, internal_6ceaa80, public_6ceaa80);
extern "C" NAKED register_t __cdecl internal_6ceaa80()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        fcomp dword ptr ds : [public_6d65188]
        push ebp
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 0x44
        jp public_6ceaaa2
        pop esi
        xor al, al
        pop ebp
        add esp, 8
        ret 0xC
        public_6ceaaa2 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+0x14]
        cmp eax, 2
        je public_6ceaab3
        cmp eax, 3
        jne public_6ceaabd
        public_6ceaab3 : nop
        pop esi
        xor al, al
        pop ebp
        add esp, 8
        ret 0xC
        public_6ceaabd : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d64210]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6ceaadc
        pop esi
        xor al, al
        pop ebp
        add esp, 8
        ret 0xC
        public_6ceaadc : nop
        mov eax, dword ptr ss : [ebp+4]
        movzx eax, word ptr ds : [eax+4]
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d642a0]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6ceab0f
        mov ecx, ebp
        call dword ptr ds : [public_6d64210]
        fstp dword ptr ss : [esp+0x10]
        public_6ceab0f : nop
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        fcom dword ptr ds : [public_6d65188]
        mov dword ptr ss : [esp+0x1C], ecx
        fnstsw ax
        test ah, 0x41
        jne public_6ceac44
        mov eax, dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6ceab48
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ceab4a
        public_6ceab48 : nop
        xor eax, eax
        public_6ceab4a : nop
        push 0x1000000
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64024]
        test eax, eax
        je public_6ceab70
        mov ecx, eax
        call dword ptr ds : [public_6d64294]
        fld dword ptr ds : [eax+0x70]
        fdivr dword ptr ss : [esp+0x20]
        jmp public_6ceab74
        public_6ceab70 : nop
        fld dword ptr ss : [esp+0x14]
        public_6ceab74 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ceab86
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ceab88
        public_6ceab86 : nop
        xor eax, eax
        public_6ceab88 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        je public_6ceac29
        mov edx, dword ptr ds : [public_6d642b0]
        fdiv dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [eax+0x20]
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        je public_6ceabbf
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6ceabbf
        mov ecx, edi
        jmp public_6ceabc1
        public_6ceabbf : nop
        xor ecx, ecx
        public_6ceabc1 : nop
        mov ecx, dword ptr ds : [ecx+0xB4]
        test ecx, ecx
        jbe public_6ceac21
        mov ebx, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, ebx
        jae public_6ceac21
        mov ebx, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        cmp dword ptr ds : [edx+ebx+0x348], 0
        je public_6ceac21
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+ebx-0x34], eax
        jne public_6ceac21
        test edi, edi
        je public_6ceac09
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6ceac0b
        public_6ceac09 : nop
        xor edi, edi
        public_6ceac0b : nop
        mov eax, dword ptr ds : [edi+0xB4]
        imul eax, 0x418
        fld dword ptr ds : [eax+ebx-0x54]
        fmul dword ptr ss : [esp+0x14]
        jmp public_6ceac25
        public_6ceac21 : nop
        fld dword ptr ss : [esp+0x14]
        public_6ceac25 : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_6ceac29 : nop
        fsubr dword ptr ss : [esp+0x10]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ceac40
        fstp dword ptr ss : [esp+0x1C]
        jmp public_6ceac59
        public_6ceac40 : nop
        fstp st(0)
        jmp public_6ceac51
        public_6ceac44 : nop
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6ceac59
        public_6ceac51 : nop
        mov dword ptr ss : [esp+0x1C], 0
        public_6ceac59 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x1B8]
        test al, al
        je public_6ceacf6
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1A0]
        fsubr dword ptr ds : [public_6d65520]
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x14]
        call dword ptr ds : [public_6d642ac]
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6ceaca3
        fld dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+0x24]
        jmp public_6ceaca9
        public_6ceaca3 : nop
        fld dword ptr ds : [public_6d65188]
        public_6ceaca9 : nop
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6ceacbe
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_6ceacf6
        public_6ceacbe : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6ceacd9
        fld dword ptr ss : [esp+0x1C]
        fdiv dword ptr ss : [esp+0x24]
        jmp public_6ceacdf
        public_6ceacd9 : nop
        fld dword ptr ds : [public_6d65188]
        public_6ceacdf : nop
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6ceacf6
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        public_6ceacf6 : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_6cead76
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1EC]
        test al, al
        je public_6cead1d
        cmp dword ptr ds : [edi+0x10], 0x10
        jge public_6cead1d
        mov cl, 1
        jmp public_6cead1f
        public_6cead1d : nop
        xor cl, cl
        public_6cead1f : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        je public_6cead48
        test cl, cl
        jne public_6cead48
        mov eax, dword ptr ds : [esi]
        push 1
        push edi
        push 2
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x220]
        mov bl, 1
        jmp public_6cead78
        public_6cead48 : nop
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [edx+4]
        push 0
        push ecx
        mov ecx, edi
        push eax
        call dword ptr ds : [public_6d641ec]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6cead76
        mov bl, 1
        jmp public_6cead78
        public_6cead76 : nop
        xor bl, bl
        public_6cead78 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6d642a8]
        test al, al
        je public_6cead98
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        push edi
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1B0]
        test al, al
        jne public_6ceada8
        public_6cead98 : nop
        test bl, bl
        jne public_6ceada8
        pop edi
        pop ebx
        pop esi
        xor eax, eax
        pop ebp
        add esp, 8
        ret 0xC
        public_6ceada8 : nop
        pop edi
        pop ebx
        pop esi
        mov eax, 1
        pop ebp
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ceaa80)
    }
}

#undef public_6ceaaa2
#undef public_6ceaab3
#undef public_6ceaabd
#undef public_6ceaadc
#undef public_6ceab0f
#undef public_6ceab48
#undef public_6ceab4a
#undef public_6ceab70
#undef public_6ceab74
#undef public_6ceab86
#undef public_6ceab88
#undef public_6ceabbf
#undef public_6ceabc1
#undef public_6ceac09
#undef public_6ceac0b
#undef public_6ceac21
#undef public_6ceac25
#undef public_6ceac29
#undef public_6ceac40
#undef public_6ceac44
#undef public_6ceac51
#undef public_6ceac59
#undef public_6ceaca3
#undef public_6ceaca9
#undef public_6ceacbe
#undef public_6ceacd9
#undef public_6ceacdf
#undef public_6ceacf6
#undef public_6cead1d
#undef public_6cead1f
#undef public_6cead48
#undef public_6cead76
#undef public_6cead78
#undef public_6cead98
#undef public_6ceada8
