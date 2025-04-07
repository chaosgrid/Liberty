#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac12f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1550);
CLANG_FORWARD_PROC_SYMBOL(public_6ad970e);

#define public_6ac1326 _public_6ac1326
#define public_6ac134f _public_6ac134f
#define public_6ac135e _public_6ac135e
#define public_6ac136a _public_6ac136a
#define public_6ac1373 _public_6ac1373
#define public_6ac137b _public_6ac137b
#define public_6ac139c _public_6ac139c
#define public_6ac13e6 _public_6ac13e6

PROC_DECLARE(0x6ac12f0, internal_6ac12f0, public_6ac12f0);
extern "C" NAKED register_t __cdecl internal_6ac12f0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx]
        push edi
        call dword ptr ds : [eax+4]
        mov esi, dword ptr ss : [esp+0x1C]
        or ecx, 0xFFFFFFFF
        mov edi, esi
        xor eax, eax
        mov byte ptr ds : [ebx+0xC], 1
        mov byte ptr ds : [ebx+0xD], 0
        repne scasb
        not ecx
        dec ecx
        lea ebp, ds:[ebx+0x10]
        mov edi, ecx
        cmp edi, 0xFFFFFFFD
        mov dword ptr ss : [esp+0x1C], edi
        jbe public_6ac1326
        call public_6ad970e
        public_6ac1326 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_6ac134f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ac134f
        cmp cl, 0xFF
        je public_6ac134f
        cmp edi, edx
        jne public_6ac1373
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        jmp public_6ac139c
        public_6ac134f : nop
        cmp edi, edx
        jne public_6ac135e
        push 1
        mov ecx, ebp
        call public_6ac1500
        jmp public_6ac139c
        public_6ac135e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6ac136a
        cmp eax, edi
        jae public_6ac137b
        public_6ac136a : nop
        push 1
        mov ecx, ebp
        call public_6ac1500
        public_6ac1373 : nop
        mov ecx, ebp
        push edi
        call public_6ac1550
        public_6ac137b : nop
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+4]
        mov edx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_6ac139c : nop
        mov esi, dword ptr ss : [esp+0x18]
        push ebx
        push 0
        mov edi, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi]
        call dword ptr ds : [public_6ada064]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0xC]
        push 0
        sub eax, edi
        push edx
        sub ecx, ebp
        push eax
        push ecx
        push edi
        push ebp
        push 0x50000000
/*FIXUP push offset public_6ada23c @0x6ac13c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada23c
/*FIXUP push offset public_6ada1d4 @0x6ac13ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada1d4
        push 0
        call dword ptr ds : [public_6ada18c]
        test eax, eax
        mov dword ptr ds : [ebx+4], eax
        jne public_6ac13e6
        mov byte ptr ds : [ebx+0xD], 1
        public_6ac13e6 : nop
        xor edx, edx
        pop edi
        test eax, eax
        setne dl
        pop esi
        pop ebp
        mov al, dl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ac12f0)
    }
}

#undef public_6ac1326
#undef public_6ac134f
#undef public_6ac135e
#undef public_6ac136a
#undef public_6ac1373
#undef public_6ac137b
#undef public_6ac139c
#undef public_6ac13e6
