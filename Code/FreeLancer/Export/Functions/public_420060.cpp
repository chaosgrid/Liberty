#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420060);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b82d0);

#define public_4200e7 _public_4200e7
#define public_420100 _public_420100
#define public_420127 _public_420127
#define public_420188 _public_420188

PROC_DECLARE(0x420060, internal_420060, public_420060);
extern "C" NAKED register_t __cdecl internal_420060()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c72c4]
        push 0
        lea edi, ds:[esi+0xC]
        push edi
/*FIXUP push offset public_5e752c @0x420075*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e752c
        push 0x800
        push 0
        mov dword ptr ds : [esi+0x40], eax
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b82d0
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi]
        push 0
        lea ebx, ds:[esi+0x10]
        push ebx
/*FIXUP push offset public_5e74ec @0x42009a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74ec
        push edi
        call dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_5e772c @0x4200a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e772c
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov cl, byte ptr ds : [esi+0x14]
        mov al, byte ptr ss : [esp+0x2C]
        shl al, 6
        or cl, 0x20
        xor al, cl
        and al, 0x40
        xor al, cl
        test al, 0x40
        mov byte ptr ds : [esi+0x14], al
        je public_420188
        cmp dword ptr ds : [esi+0x24], 0x80
        je public_420188
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        je public_4200e7
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x20]
        public_4200e7 : nop
        mov cl, byte ptr ds : [esi+0x14]
        mov ebp, dword ptr ds : [esi+4]
        and cl, 0xF3
        mov byte ptr ds : [esi+0x14], cl
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_420127
        lea ebx, ds:[ebx]
        public_420100 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+8], ecx
        jne public_420100
        public_420127 : nop
        mov ebx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        xor edi, edi
        mov ebp, 0x80
        push 1
        mov dword ptr ss : [esp+0x18], 0x14
        mov dword ptr ss : [esp+0x1C], 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], ebp
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0x18]
        test eax, eax
        jl public_420188
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        mov dword ptr ds : [esi+0x24], ebp
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+0x24]
        add esp, 4
        cmp eax, edi
        mov dword ptr ds : [esi+0x28], edi
        je public_420188
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+0x28], eax
        public_420188 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x420060)
    }
}

#undef public_4200e7
#undef public_420100
#undef public_420127
#undef public_420188
