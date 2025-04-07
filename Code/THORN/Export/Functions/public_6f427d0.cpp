#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f427d0);

#define public_6f42831 _public_6f42831
#define public_6f4283e _public_6f4283e
#define public_6f42848 _public_6f42848
#define public_6f42852 _public_6f42852
#define public_6f42862 _public_6f42862
#define public_6f42895 _public_6f42895
#define public_6f428a6 _public_6f428a6

PROC_DECLARE(0x6f427d0, internal_6f427d0, public_6f427d0);
extern "C" NAKED register_t __cdecl internal_6f427d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        test edi, edi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+8], edi
        je public_6f42848
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        push ebx
        not ecx
        push ebp
        dec ecx
        mov ebp, ecx
        push 1
        lea ebx, ds:[esi+0xD4]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6f5a028]
        test al, al
        je public_6f42831
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_6f42831 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_6f4283e
        mov ebx, dword ptr ds : [public_6f5a020]
        public_6f4283e : nop
        pop ebp
        mov dword ptr ds : [esi+0xE4], ebx
        pop ebx
        jmp public_6f42852
        public_6f42848 : nop
        mov dword ptr ds : [esi+0xE4], 0
        public_6f42852 : nop
        mov eax, dword ptr ds : [esi+0xE8]
        test eax, eax
        je public_6f42862
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6f42862 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        mov dword ptr ds : [esi+0xE8], eax
        je public_6f428a6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+0xD0]
        test eax, eax
        lea edi, ds:[esi+0xD0]
        je public_6f42895
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi], 0
        public_6f42895 : nop
        mov esi, dword ptr ds : [esi+0xE8]
        mov eax, dword ptr ds : [esi]
        push edi
/*FIXUP push offset public_6f6002c @0x6f4289e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6002c
        push esi
        call dword ptr ds : [eax]
        public_6f428a6 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f427d0)
    }
}

#undef public_6f42831
#undef public_6f4283e
#undef public_6f42848
#undef public_6f42852
#undef public_6f42862
#undef public_6f42895
#undef public_6f428a6
