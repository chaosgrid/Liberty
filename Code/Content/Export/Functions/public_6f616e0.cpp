#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f616e0);

#define public_6f616ed _public_6f616ed
#define public_6f61710 _public_6f61710
#define public_6f61779 _public_6f61779
#define public_6f6177a _public_6f6177a
#define public_6f61786 _public_6f61786
#define public_6f617a8 _public_6f617a8
#define public_6f617b7 _public_6f617b7
#define public_6f617c7 _public_6f617c7
#define public_6f617d6 _public_6f617d6
#define public_6f617e9 _public_6f617e9

PROC_DECLARE(0x6f616e0, internal_6f616e0, public_6f616e0);
extern "C" NAKED register_t __cdecl internal_6f616e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        jne public_6f616ed
        mov al, 1
        pop ecx
        ret 
        public_6f616ed : nop
        mov edx, dword ptr ds : [eax+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+4]
        push edi
        xor edi, edi
        mov ecx, esi
        xor ebx, ebx
        cmp ecx, edx
        mov dword ptr ss : [esp+0xC], edi
        je public_6f61786
        mov edi, dword ptr ss : [esp+0x14]
        push ebp
        lea ecx, ds:[ecx]
        public_6f61710 : nop
        fld dword ptr ds : [edi]
        mov ebp, 0x5F3759DF
        fsub dword ptr ds : [ecx]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        sar eax, 1
        sub ebp, eax
        mov dword ptr ss : [esp+0x1C], ebp
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6f61779
        inc dword ptr ss : [esp+0x10]
        jmp public_6f6177a
        public_6f61779 : nop
        inc ebx
        public_6f6177a : nop
        add ecx, 0x10
        cmp ecx, edx
        jne public_6f61710
        mov edi, dword ptr ss : [esp+0x10]
        pop ebp
        public_6f61786 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp byte ptr ds : [ecx], 0
        je public_6f617d6
        mov eax, dword ptr ss : [esp+0x20]
        cmp byte ptr ds : [eax], 0
        je public_6f617b7
        test esi, esi
        jne public_6f617a8
        xor edx, edx
        cmp edi, edx
        pop edi
        pop esi
        sete al
        pop ebx
        pop ecx
        ret 
        public_6f617a8 : nop
        sub edx, esi
        sar edx, 4
        cmp edi, edx
        pop edi
        pop esi
        sete al
        pop ebx
        pop ecx
        ret 
        public_6f617b7 : nop
        test esi, esi
        jne public_6f617c7
        pop edi
        xor edx, edx
        cmp ebx, edx
        pop esi
        sete al
        pop ebx
        pop ecx
        ret 
        public_6f617c7 : nop
        sub edx, esi
        pop edi
        sar edx, 4
        cmp ebx, edx
        pop esi
        sete al
        pop ebx
        pop ecx
        ret 
        public_6f617d6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp byte ptr ds : [ecx], 0
        je public_6f617e9
        test edi, edi
        pop edi
        pop esi
        setg al
        pop ebx
        pop ecx
        ret 
        public_6f617e9 : nop
        pop edi
        test ebx, ebx
        pop esi
        setg al
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f616e0)
    }
}

#undef public_6f616ed
#undef public_6f61710
#undef public_6f61779
#undef public_6f6177a
#undef public_6f61786
#undef public_6f617a8
#undef public_6f617b7
#undef public_6f617c7
#undef public_6f617d6
#undef public_6f617e9
