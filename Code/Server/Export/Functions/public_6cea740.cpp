#include "Server-PCH.h"


#define public_6cea762 _public_6cea762
#define public_6cea77c _public_6cea77c
#define public_6cea7aa _public_6cea7aa
#define public_6cea7e5 _public_6cea7e5
#define public_6cea7e7 _public_6cea7e7
#define public_6cea82f _public_6cea82f
#define public_6cea831 _public_6cea831
#define public_6cea847 _public_6cea847
#define public_6cea84b _public_6cea84b
#define public_6cea863 _public_6cea863
#define public_6cea867 _public_6cea867
#define public_6cea878 _public_6cea878
#define public_6cea880 _public_6cea880
#define public_6cea8d9 _public_6cea8d9
#define public_6cea8df _public_6cea8df
#define public_6cea8fe _public_6cea8fe
#define public_6cea906 _public_6cea906
#define public_6cea940 _public_6cea940
#define public_6cea948 _public_6cea948
#define public_6cea990 _public_6cea990
#define public_6cea998 _public_6cea998
#define public_6cea9c3 _public_6cea9c3
#define public_6cea9c5 _public_6cea9c5
#define public_6cea9d0 _public_6cea9d0
#define public_6cea9d5 _public_6cea9d5

PROC_DECLARE(0x6cea740, internal_6cea740, public_6cea740);
extern "C" NAKED register_t __cdecl internal_6cea740()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 8
        fcomp dword ptr ds : [public_6d65188]
        push ebp
        push edi
        mov edi, ecx
        fnstsw ax
        test ah, 0x44
        jp public_6cea762
        pop edi
        xor al, al
        pop ebp
        add esp, 8
        ret 0xC
        public_6cea762 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+8]
        test al, al
        je public_6cea77c
        pop edi
        xor al, al
        pop ebp
        add esp, 8
        ret 0xC
        public_6cea77c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        mov ax, word ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [public_6d642a0]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6cea7aa
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x3C]
        fstp dword ptr ss : [esp+8]
        public_6cea7aa : nop
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6d65188]
        mov dword ptr ss : [esp+0x14], eax
        push esi
        fnstsw ax
        test ah, 0x41
        jne public_6cea867
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ds : [edi+0x10]
        test edx, edx
        je public_6cea7e5
        mov ecx, dword ptr ds : [edx+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6cea7e5
        mov ecx, edx
        jmp public_6cea7e7
        public_6cea7e5 : nop
        xor ecx, ecx
        public_6cea7e7 : nop
        mov ecx, dword ptr ds : [ecx+0xB4]
        test ecx, ecx
        push ebx
        jbe public_6cea847
        mov ebx, dword ptr ds : [public_6d90264]
        lea esi, ds:[ecx-1]
        cmp esi, ebx
        jae public_6cea847
        mov ebx, dword ptr ds : [public_6d90260]
        imul esi, 0x418
        cmp dword ptr ds : [esi+ebx+0x348], 0
        je public_6cea847
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+ebx-0x34], eax
        jne public_6cea847
        test edx, edx
        je public_6cea82f
        mov eax, dword ptr ds : [edx+0x4C]
        and eax, 3
        cmp al, 3
        je public_6cea831
        public_6cea82f : nop
        xor edx, edx
        public_6cea831 : nop
        mov ecx, dword ptr ds : [edx+0xB4]
        imul ecx, 0x418
        fld dword ptr ds : [ecx+ebx-0x54]
        fmul dword ptr ss : [esp+0x20]
        jmp public_6cea84b
        public_6cea847 : nop
        fld dword ptr ss : [esp+0x20]
        public_6cea84b : nop
        fsubr dword ptr ss : [esp+0x10]
        pop ebx
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cea863
        fstp dword ptr ss : [esp+0x18]
        jmp public_6cea880
        public_6cea863 : nop
        fstp st(0)
        jmp public_6cea878
        public_6cea867 : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 5
        jp public_6cea880
        public_6cea878 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_6cea880 : nop
        mov esi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x1B8]
        test al, al
        je public_6cea948
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x1A0]
        fst dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cea940
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x38]
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6cea8d9
        fld dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0x1C]
        jmp public_6cea8df
        public_6cea8d9 : nop
        fld dword ptr ds : [public_6d65188]
        public_6cea8df : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6cea8fe
        fld dword ptr ss : [esp+0xC]
        fdiv dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x10]
        jmp public_6cea906
        public_6cea8fe : nop
        mov dword ptr ss : [esp+0x10], 0
        public_6cea906 : nop
        fld dword ptr ds : [public_6d65520]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_6cea948
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jnp public_6cea940
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x38]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x18]
        jmp public_6cea948
        public_6cea940 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        public_6cea948 : nop
        fld dword ptr ss : [esp+0x18]
        xor cl, cl
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x44
        jnp public_6cea9c5
        mov ecx, dword ptr ss : [esp+0x18]
        xor edx, edx
        mov dx, word ptr ss : [ebp+8]
        push 0
        push ecx
        mov ecx, esi
        push edx
        call dword ptr ds : [public_6d641ec]
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x38]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6cea990
        fld dword ptr ss : [esp+0x18]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        jmp public_6cea998
        public_6cea990 : nop
        mov dword ptr ss : [esp+0x1C], 0
        public_6cea998 : nop
        mov ecx, dword ptr ss : [ebp+0x74]
        fstp st(0)
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fnstsw ax
        fcomp dword ptr ss : [esp+0x20]
        test ah, 0x41
        fnstsw ax
        jne public_6cea9d0
        test ah, 5
        jnp public_6cea9d5
        public_6cea9c3 : nop
        xor cl, cl
        public_6cea9c5 : nop
        pop esi
        pop edi
        mov al, cl
        pop ebp
        add esp, 8
        ret 0xC
        public_6cea9d0 : nop
        test ah, 0x41
        jne public_6cea9c3
        public_6cea9d5 : nop
        pop esi
        mov cl, 1
        pop edi
        mov al, cl
        pop ebp
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6cea740)
    }
}

#undef public_6cea762
#undef public_6cea77c
#undef public_6cea7aa
#undef public_6cea7e5
#undef public_6cea7e7
#undef public_6cea82f
#undef public_6cea831
#undef public_6cea847
#undef public_6cea84b
#undef public_6cea863
#undef public_6cea867
#undef public_6cea878
#undef public_6cea880
#undef public_6cea8d9
#undef public_6cea8df
#undef public_6cea8fe
#undef public_6cea906
#undef public_6cea940
#undef public_6cea948
#undef public_6cea990
#undef public_6cea998
#undef public_6cea9c3
#undef public_6cea9c5
#undef public_6cea9d0
#undef public_6cea9d5
