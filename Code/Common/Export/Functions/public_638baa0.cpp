#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_638baa0);

#define public_638bad4 _public_638bad4
#define public_638bb13 _public_638bb13
#define public_638bb3d _public_638bb3d
#define public_638bb54 _public_638bb54
#define public_638bb68 _public_638bb68
#define public_638bb98 _public_638bb98
#define public_638bbb0 _public_638bbb0
#define public_638bbbb _public_638bbbb

PROC_DECLARE(0x638baa0, internal_638baa0, public_638baa0);
extern "C" NAKED register_t __cdecl internal_638baa0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_638bbbb
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        jne public_638bad4
/*FIXUP push offset public_63f9db4 @0x638babe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9db4
        push edi
        call dword ptr ds : [public_63991e8]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638bad4 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        and eax, 0xFFFFFF
        push eax
        push ecx
        call public_6370570
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 4
        push eax
/*FIXUP push offset public_63f9da4 @0x638baf0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9da4
        push edi
        call ebx
        mov esi, dword ptr ds : [esi+8]
        add esp, 0x10
        test esi, esi
        je public_638bb3d
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, eax
        dec eax
        test edx, edx
        je public_638bb3d
        inc eax
        mov dword ptr ss : [esp+0xC], eax
        public_638bb13 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edx, ecx
        push edx
        push eax
/*FIXUP push offset public_63f9d9c @0x638bb1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9d9c
        push edi
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        add esi, 8
        call ebx
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        dec eax
        mov dword ptr ss : [esp+0xC], eax
        jne public_638bb13
        public_638bb3d : nop
        mov esi, dword ptr ss : [ebp+0xC]
        test dword ptr ds : [esi+0x14], 0x8000000
        je public_638bb54
/*FIXUP push offset public_63f9d90 @0x638bb49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9d90
        push edi
        call ebx
        add esp, 8
        public_638bb54 : nop
        test dword ptr ds : [esi+0x14], 0x4000000
        je public_638bb68
/*FIXUP push offset public_63f9d80 @0x638bb5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9d80
        push edi
        call ebx
        add esp, 8
/*FIXUP public_638bb68 : nop
        push offset public_63edccc @0x638bb68*/
  FIXUP public_638bb68 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_638bbbb
/*FIXUP push offset public_63f9d70 @0x638bb7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9d70
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        test eax, eax
        je public_638bbb0
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638bbb0
        public_638bb98 : nop
        mov ecx, dword ptr ds : [eax+0x4C]
        push ecx
/*FIXUP push offset public_63f83cc @0x638bb9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f83cc
        push edi
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638bb98
/*FIXUP public_638bbb0 : nop
        push offset public_63edccc @0x638bbb0*/
  FIXUP public_638bbb0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        add esp, 8
        public_638bbbb : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638baa0)
    }
}

#undef public_638bad4
#undef public_638bb13
#undef public_638bb3d
#undef public_638bb54
#undef public_638bb68
#undef public_638bb98
#undef public_638bbb0
#undef public_638bbbb
