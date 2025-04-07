#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a8e0);

#define public_6f1a900 _public_6f1a900
#define public_6f1a97a _public_6f1a97a

PROC_DECLARE(0x6f1a8e0, internal_6f1a8e0, public_6f1a8e0);
extern "C" NAKED register_t __cdecl internal_6f1a8e0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1a97a
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        nop 
/*FIXUP public_6f1a900 : nop
        push offset public_6fb8db0 @0x6f1a900*/
  FIXUP public_6f1a900 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8db0
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
/*FIXUP push offset public_6fb8da0 @0x6f1a90f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8da0
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x14
        call dword ptr ds : [edx+0x10]
        push eax
/*FIXUP push offset public_6fb8d94 @0x6f1a923*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d94
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push edi
        call dword ptr ds : [eax+8]
/*FIXUP push offset public_6fb7758 @0x6f1a937*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+0x1C]
        push edx
/*FIXUP push offset public_6fb8d88 @0x6f1a946*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d88
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+8]
        mov dl, byte ptr ds : [eax+4]
        xor ecx, ecx
        test dl, dl
        setne cl
        push ecx
/*FIXUP push offset public_6fb8d78 @0x6f1a95c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d78
        push edi
        call ebx
/*FIXUP push offset public_6fb7758 @0x6f1a964*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push edi
        call ebx
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0x28
        cmp esi, eax
        jne public_6f1a900
        pop edi
        pop ebx
        public_6f1a97a : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f1a8e0)
    }
}

#undef public_6f1a900
#undef public_6f1a97a
