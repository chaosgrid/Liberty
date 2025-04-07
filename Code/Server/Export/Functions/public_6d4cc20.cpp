#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4cc20);

#define public_6d4cc35 _public_6d4cc35
#define public_6d4cc3c _public_6d4cc3c
#define public_6d4cc60 _public_6d4cc60
#define public_6d4ccae _public_6d4ccae
#define public_6d4ccbb _public_6d4ccbb

PROC_DECLARE(0x6d4cc20, internal_6d4cc20, public_6d4cc20);
extern "C" NAKED register_t __cdecl internal_6d4cc20()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        push edi
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d4cc3c
        public_6d4cc35 : nop
        mov eax, dword ptr ds : [eax]
        inc edi
        test eax, eax
        jne public_6d4cc35
        public_6d4cc3c : nop
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ds : [public_6d64c74]
        push edi
        push eax
/*FIXUP push offset public_6d6b628 @0x6d4cc4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b628
        push ebx
        call ebp
        mov esi, dword ptr ds : [esi]
        add esp, 0x10
        test edi, edi
        jle public_6d4ccbb
        mov dword ptr ss : [esp+0x1C], edi
        public_6d4cc60 : nop
        movzx ecx, byte ptr ds : [esi+0xA]
        movzx edx, word ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push edx
        push eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        add ecx, ebx
/*FIXUP push offset public_6d6b618 @0x6d4cc7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b618
        push ecx
        call ebp
        add esp, 0x14
        cmp word ptr ds : [esi+8], 0x21
        jne public_6d4ccae
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        add ecx, ebx
        mov byte ptr ds : [ecx], 0x2C
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        push edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6d4cc20
        public_6d4ccae : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [esi]
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6d4cc60
        public_6d4ccbb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d4cc20)
    }
}

#undef public_6d4cc35
#undef public_6d4cc3c
#undef public_6d4cc60
#undef public_6d4ccae
#undef public_6d4ccbb
