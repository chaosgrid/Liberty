#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403e90);
CLANG_FORWARD_PROC_SYMBOL(public_4055b0);
CLANG_FORWARD_PROC_SYMBOL(public_4056d0);

#define public_40572a _public_40572a
#define public_405752 _public_405752
#define public_405763 _public_405763
#define public_40576f _public_40576f
#define public_405778 _public_405778
#define public_405780 _public_405780
#define public_405790 _public_405790
#define public_40579f _public_40579f
#define public_4057ab _public_4057ab

PROC_DECLARE(0x4056d0, internal_4056d0, public_4056d0);
extern "C" NAKED register_t __cdecl internal_4056d0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_4057ab
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4057ab
        cmp cl, 0xFF
        je public_4057ab
        mov ebp, eax
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        call dword ptr ds : [public_41b8f4]
        mov edi, eax
        add esp, 4
        cmp edi, 0x7FFFFFFD
        jbe public_40572a
        call dword ptr ds : [public_41b8a0]
        public_40572a : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_405752
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_405752
        cmp cl, 0xFF
        je public_405752
        test edi, edi
        jne public_405778
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, esi
        call public_403e90
        pop edi
        pop esi
        pop ebp
        ret 
        public_405752 : nop
        test edi, edi
        jne public_405763
        push 1
        mov ecx, esi
        call public_403e90
        pop edi
        pop esi
        pop ebp
        ret 
        public_405763 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_40576f
        cmp eax, edi
        jae public_405780
        public_40576f : nop
        push 1
        mov ecx, esi
        call public_403e90
        public_405778 : nop
        mov ecx, esi
        push edi
        call public_4055b0
        public_405780 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, ebp
        jbe public_40579f
        mov edx, edi
        nop 
        lea esp, ss:[esp]
        public_405790 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_405790
        public_40579f : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        public_4057ab : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x4056d0)
    }
}

#undef public_40572a
#undef public_405752
#undef public_405763
#undef public_40576f
#undef public_405778
#undef public_405780
#undef public_405790
#undef public_40579f
#undef public_4057ab
