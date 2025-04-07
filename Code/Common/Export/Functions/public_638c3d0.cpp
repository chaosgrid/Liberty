#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_63857b0);
CLANG_FORWARD_PROC_SYMBOL(public_638c3d0);

#define public_638c447 _public_638c447
#define public_638c472 _public_638c472
#define public_638c492 _public_638c492

PROC_DECLARE(0x638c3d0, internal_638c3d0, public_638c3d0);
extern "C" NAKED register_t __cdecl internal_638c3d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        test ebx, ebx
        push esi
        push edi
        je public_638c492
        mov ecx, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0xC]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push edi
        push esi
        call public_63857b0
        mov edx, dword ptr ds : [edi+8]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6370570
        add esp, 0x14
        push eax
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6370570
        mov ecx, dword ptr ds : [public_658b24c]
        mov esi, dword ptr ds : [public_63991e8]
        add esp, 4
        push eax
        add ecx, 2
        push ecx
/*FIXUP push offset public_63f9e7c @0x638c42b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e7c
        push ebx
        call esi
        mov edx, dword ptr ds : [public_658b24c]
        add esp, 0x14
        xor edi, edi
        dec edx
        test edx, edx
        jle public_638c472
        mov esi, dword ptr ss : [esp+0xC]
        public_638c447 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
/*FIXUP push offset public_63f637c @0x638c44e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push ebx
        call dword ptr ds : [public_63991e8]
        mov edx, dword ptr ds : [public_658b24c]
        add esp, 0x10
        inc edi
        add esi, 8
        dec edx
        cmp edi, edx
        jl public_638c447
        mov esi, dword ptr ds : [public_63991e8]
        public_638c472 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
/*FIXUP push offset public_63f637c @0x638c47c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f637c
        push ebx
        call esi
        add esp, 0x10
/*FIXUP push offset public_63edccc @0x638c487*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call esi
        add esp, 8
        public_638c492 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638c3d0)
    }
}

#undef public_638c447
#undef public_638c472
#undef public_638c492
