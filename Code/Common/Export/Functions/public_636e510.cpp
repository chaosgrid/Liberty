#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e510);
CLANG_FORWARD_PROC_SYMBOL(public_636eb20);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636e52e _public_636e52e
#define public_636e532 _public_636e532
#define public_636e55c _public_636e55c
#define public_636e575 _public_636e575
#define public_636e583 _public_636e583
#define public_636e598 _public_636e598

PROC_DECLARE(0x636e510, internal_636e510, public_636e510);
extern "C" NAKED register_t __cdecl internal_636e510()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        jl public_636e532
        mov eax, dword ptr ds : [esi+ebx*4+4]
        test eax, eax
        je public_636e52e
        dec eax
        cmp edi, eax
        jge public_636e532
        public_636e52e : nop
        cmp edi, ebx
        jl public_636e55c
        public_636e532 : nop
        push edi
/*FIXUP push offset public_63ee904 @0x636e533*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee904
        call public_6356960
        mov eax, dword ptr ds : [public_658b994]
        push esi
/*FIXUP push offset public_63997b0 @0x636e543*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63997b0
        push eax
        call public_636eb20
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x20
        public_636e55c : nop
        mov edx, dword ptr ds : [esi+edi*4+8]
        mov eax, dword ptr ds : [esi+edi*4+4]
        lea ecx, ds:[esi+edi*4+8]
        mov dword ptr ds : [esi+edi*4+4], edx
        mov edi, ecx
        add ecx, 4
        test edx, edx
        je public_636e583
        public_636e575 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        add ecx, 4
        test edx, edx
        jne public_636e575
        public_636e583 : nop
        mov ecx, dword ptr ds : [esi+ebx*4+4]
        test ecx, ecx
        lea edx, ds:[ecx-1]
        mov dword ptr ds : [esi+ebx*4+4], edx
        jne public_636e598
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+ebx*4+4], ecx
        public_636e598 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e510)
    }
}

#undef public_636e52e
#undef public_636e532
#undef public_636e55c
#undef public_636e575
#undef public_636e583
#undef public_636e598
