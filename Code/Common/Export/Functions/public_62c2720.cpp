#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2720);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_62c27d6 _public_62c27d6
#define public_62c27de _public_62c27de
#define public_62c27e0 _public_62c27e0
#define public_62c2817 _public_62c2817
#define public_62c2819 _public_62c2819
#define public_62c2823 _public_62c2823
#define public_62c2827 _public_62c2827
#define public_62c2842 _public_62c2842
#define public_62c2849 _public_62c2849
#define public_62c2873 _public_62c2873
#define public_62c28ee _public_62c28ee
#define public_62c28f2 _public_62c28f2
#define public_62c2908 _public_62c2908

PROC_DECLARE(0x62c2720, internal_62c2720, public_62c2720);
extern "C" NAKED register_t __cdecl internal_62c2720()
{
    __asm
    {
        mov eax, 0x2030
        call public_6391dc0
        fld dword ptr ss : [esp+0x2038]
        fmul dword ptr ss : [esp+0x2038]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2044]
        push esi
        fstp dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x204C]
        xor ebx, ebx
        test esi, 0xFDFF
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], ebx
        je public_62c2849
        mov eax, dword ptr ss : [ebp]
        push 0xFDFF
        mov ecx, ebp
        call dword ptr ds : [eax+0xC]
        cmp eax, ebx
        je public_62c2849
        mov ecx, dword ptr ss : [esp+0x2044]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ss : [esp+0x204C]
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x40], 0x800
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_62c2849
        mov eax, dword ptr ss : [esp+0x3C]
        test eax, eax
        jbe public_62c2842
        cmp ebx, eax
        lea edx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x14], edx
        jae public_62c27de
        public_62c27d6 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [eax]
        jmp public_62c27e0
        public_62c27de : nop
        xor esi, esi
        public_62c27e0 : nop
        mov ecx, dword ptr ds : [edi+0x800]
        cmp ecx, dword ptr ds : [edi+0x804]
        jge public_62c2842
        mov ecx, dword ptr ss : [esp+0x2054]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx]
        test al, al
        je public_62c2827
        mov eax, dword ptr ds : [edi+0x800]
        lea ecx, ds:[edi+eax*8]
        inc eax
        test esi, esi
        mov dword ptr ds : [edi+0x800], eax
        je public_62c2817
        lea eax, ds:[esi+8]
        jmp public_62c2819
        public_62c2817 : nop
        xor eax, eax
        public_62c2819 : nop
        cmp eax, dword ptr ds : [ecx]
        je public_62c2823
        push eax
        call public_6341610
        public_62c2823 : nop
        inc dword ptr ss : [esp+0x10]
        public_62c2827 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ebp, dword ptr ss : [esp+0x204C]
        inc ebx
        add edx, 4
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], edx
        jb public_62c27d6
        public_62c2842 : nop
        mov esi, dword ptr ss : [esp+0x2050]
        public_62c2849 : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x1C]
        xor ebx, ebx
        push ecx
        and esi, 0xFFFF0200
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x28], esi
        call dword ptr ds : [eax]
        mov esi, eax
        cmp esi, ebx
        je public_62c2908
        public_62c2873 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x2044]
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fld st(2)
        fmul st, st(3)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fcomp dword ptr ss : [esp+0x18]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_62c28f2
        mov eax, dword ptr ds : [edi+0x800]
        cmp eax, dword ptr ds : [edi+0x804]
        jge public_62c2908
        mov ecx, dword ptr ss : [esp+0x2054]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx]
        test al, al
        je public_62c28f2
        mov eax, dword ptr ds : [edi+0x800]
        lea ecx, ds:[edi+eax*8]
        inc eax
        mov dword ptr ds : [edi+0x800], eax
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        cmp eax, edx
        je public_62c28ee
        push eax
        call public_6341610
        public_62c28ee : nop
        inc dword ptr ss : [esp+0x10]
        public_62c28f2 : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov esi, eax
        test esi, esi
        jne public_62c2873
        public_62c2908 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2030
        ret 0x14
        UNREACHABLE_TRAP(0x62c2720)
    }
}

#undef public_62c27d6
#undef public_62c27de
#undef public_62c27e0
#undef public_62c2817
#undef public_62c2819
#undef public_62c2823
#undef public_62c2827
#undef public_62c2842
#undef public_62c2849
#undef public_62c2873
#undef public_62c28ee
#undef public_62c28f2
#undef public_62c2908
