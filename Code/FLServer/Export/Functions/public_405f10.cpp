#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405f10);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_419c90);

#define public_405f4b _public_405f4b
#define public_405f5b _public_405f5b
#define public_405f78 _public_405f78
#define public_405f8a _public_405f8a
#define public_405f90 _public_405f90
#define public_405f9d _public_405f9d
#define public_405fb9 _public_405fb9
#define public_405fd6 _public_405fd6
#define public_405fdf _public_405fdf
#define public_405ffa _public_405ffa

PROC_DECLARE(0x405f10, internal_405f10, public_405f10);
extern "C" NAKED register_t __cdecl internal_405f10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_419c90 @0x405f15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_419c90
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, eax
        or esi, 0x1F
        cmp esi, 0xFFFFFFFD
        push edi
        mov ebx, ecx
        mov dword ptr ss : [ebp-0x10], esp
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_405f4b
        mov dword ptr ss : [ebp-0x14], eax
        mov esi, eax
        public_405f4b : nop
        lea eax, ds:[esi+2]
        test eax, eax
        mov dword ptr ss : [ebp-4], 0
        jge public_405f5b
        xor eax, eax
        public_405f5b : nop
        push eax
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_405f90
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], eax
        add eax, 2
        test eax, eax
        jge public_405f78
        xor eax, eax
        public_405f78 : nop
        push eax
        call public_418a9e
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_405f8a @0x405f84*/
  FIXUP lea eax, ds : [public_405f8a]
        ret 
        public_405f8a : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x14]
        public_405f90 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_405fb9
        cmp eax, esi
        jbe public_405f9d
        mov eax, esi
        public_405f9d : nop
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        mov edx, ecx
        shr ecx, 2
        lea edi, ds:[eax+1]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [ebp-0x14]
        public_405fb9 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov edi, dword ptr ds : [ebx+8]
        je public_405fdf
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_405fd6
        cmp cl, 0xFF
        je public_405fd6
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_405fdf
        public_405fd6 : nop
        push eax
        call public_418978
        add esp, 4
        public_405fdf : nop
        mov eax, dword ptr ss : [ebp+8]
        inc eax
        cmp edi, esi
        mov dword ptr ds : [ebx+8], 0
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [ebx+0xC], esi
        ja public_405ffa
        mov esi, edi
        public_405ffa : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], esi
        mov byte ptr ds : [esi+ecx], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x405f10)
    }
}

#undef public_405f4b
#undef public_405f5b
#undef public_405f78
#undef public_405f8a
#undef public_405f90
#undef public_405f9d
#undef public_405fb9
#undef public_405fd6
#undef public_405fdf
#undef public_405ffa
