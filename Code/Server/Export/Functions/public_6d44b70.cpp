#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfffd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d18840);
CLANG_FORWARD_PROC_SYMBOL(public_6d43340);
CLANG_FORWARD_PROC_SYMBOL(public_6d433c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d433d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43840);
CLANG_FORWARD_PROC_SYMBOL(public_6d448d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d44ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d510c0);

#define public_6d44bbd _public_6d44bbd
#define public_6d44c46 _public_6d44c46
#define public_6d44c70 _public_6d44c70

PROC_DECLARE(0x6d44b70, internal_6d44b70, public_6d44b70);
extern "C" NAKED register_t __cdecl internal_6d44b70()
{
    __asm
    {
        push ebp
        mov ecx, offset public_6d8f970
        mov dword ptr ds : [public_6d8fb20], 0
        mov dword ptr ds : [public_6d8fb24], 0
        call dword ptr ds : [public_6d64830]
        call dword ptr ds : [public_6d64cb8]
        push eax
        call dword ptr ds : [public_6d64bc8]
        mov ebp, dword ptr ds : [public_6d6481c]
        call ebp
/*FIXUP push offset public_6d6ad90 @0x6d44ba5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ad90
        call dword ptr ds : [public_6d643b4]
        add esp, 8
        test eax, eax
        jne public_6d44bbd
        xor al, al
        pop ebp
        ret 4
        public_6d44bbd : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x208]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x211]
        push edi
        push eax
        push ecx
        mov ecx, offset public_6d90260
        call public_6d510c0
        call ebp
        push esi
        call public_6d43340
        call public_6d433d0
        mov dword ptr ds : [public_6d8fb14], eax
        call public_6d433c0
        mov dword ptr ds : [public_6d8fb18], eax
        call ebp
        xor eax, eax
        push eax
        mov ecx, 0xB
        mov edi, offset public_6d8f998
        rep stosd
        push eax
        lea edi, ds:[esi+0x104]
        push edi
        call dword ptr ds : [public_6d64834]
        add esp, 0x10
        mov ebx, eax
        neg ebx
        sbb bl, bl
        inc bl
        je public_6d44c70
        push edi
        call public_6d448d0
        push edi
        call public_6d43840
        add esp, 8
        call ebp
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d44c46
        call public_6d44ca0
        public_6d44c46 : nop
        call ebp
        mov edx, dword ptr ds : [esi+0x208]
        push edx
        call public_6d18840
        call ebp
        mov ecx, dword ptr ds : [esi+0x208]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x210]
        push eax
        push ecx
        call public_6cfffd0
        add esp, 0xC
        call ebp
        public_6d44c70 : nop
        mov eax, dword ptr ds : [esi+0x20C]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x208]
        push eax
        call dword ptr ds : [edx+0x28]
        call ebp
        pop edi
        pop esi
        mov al, bl
        pop ebx
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d44b70)
    }
}

#undef public_6d44bbd
#undef public_6d44c46
#undef public_6d44c70
