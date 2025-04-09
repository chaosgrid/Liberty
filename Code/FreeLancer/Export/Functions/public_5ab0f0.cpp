#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ab0f0);
CLANG_FORWARD_PROC_SYMBOL(public_5ab250);

#define public_5ab103 _public_5ab103
#define public_5ab113 _public_5ab113
#define public_5ab115 _public_5ab115
#define public_5ab137 _public_5ab137
#define public_5ab14c _public_5ab14c
#define public_5ab14e _public_5ab14e
#define public_5ab169 _public_5ab169
#define public_5ab195 _public_5ab195
#define public_5ab1a6 _public_5ab1a6
#define public_5ab1db _public_5ab1db
#define public_5ab1e2 _public_5ab1e2

PROC_DECLARE(0x5ab0f0, internal_5ab0f0, public_5ab0f0);
extern "C" NAKED register_t __cdecl internal_5ab0f0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_5c7200]
        push ebp
        push esi
        xor esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        xor ebp, ebp
        public_5ab103 : nop
        test esi, esi
        jne public_5ab113
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x1B8]
        jmp public_5ab115
        public_5ab113 : nop
        mov esi, dword ptr ds : [esi]
        public_5ab115 : nop
        test esi, esi
        je public_5ab14e
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5ab169
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_5ab137
        mov eax, dword ptr ds : [public_5c700c]
        public_5ab137 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add ecx, 0x1E8
        push ecx
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_5ab103
        public_5ab14c : nop
        mov ebp, esi
        public_5ab14e : nop
        test ebp, ebp
        je public_5ab1e2
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call public_5ab250
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_5ab169 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea edi, ds:[edx+0x1E8]
/*FIXUP push offset public_5e65cc @0x5ab173*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e65cc
        push edi
        call ebx
        add esp, 8
        test eax, eax
        mov eax, dword ptr ds : [esi+8]
        jne public_5ab195
        mov cl, byte ptr ds : [eax+0x201]
        test cl, cl
        je public_5ab103
        jmp public_5ab14c
        public_5ab195 : nop
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_5ab1a6
        mov eax, dword ptr ds : [public_5c700c]
        public_5ab1a6 : nop
        push edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_5ab103
        test ebp, ebp
        je public_5ab1db
        mov ecx, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [ecx+0x201]
        test al, al
        je public_5ab103
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x201]
        test al, al
        jne public_5ab103
        public_5ab1db : nop
        mov ebp, esi
        jmp public_5ab103
        public_5ab1e2 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5ab0f0)
    }
}

#undef public_5ab103
#undef public_5ab113
#undef public_5ab115
#undef public_5ab137
#undef public_5ab14c
#undef public_5ab14e
#undef public_5ab169
#undef public_5ab195
#undef public_5ab1a6
#undef public_5ab1db
#undef public_5ab1e2
