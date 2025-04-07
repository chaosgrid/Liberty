#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6389ac0);

#define public_6389ae8 _public_6389ae8
#define public_6389b11 _public_6389b11
#define public_6389b15 _public_6389b15
#define public_6389b2d _public_6389b2d
#define public_6389b57 _public_6389b57
#define public_6389b7a _public_6389b7a
#define public_6389b89 _public_6389b89
#define public_6389baf _public_6389baf
#define public_6389bbb _public_6389bbb
#define public_6389bbe _public_6389bbe
#define public_6389bc4 _public_6389bc4
#define public_6389be5 _public_6389be5

PROC_DECLARE(0x6389ac0, internal_6389ac0, public_6389ac0);
extern "C" NAKED register_t __cdecl internal_6389ac0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        push esi
        push edi
        je public_6389be5
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 4
        je public_6389ae8
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_6389be5
        public_6389ae8 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6389be5
        mov edi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test edi, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6389be5
        push ebx
        mov ebx, dword ptr ds : [public_63991e8]
        jmp public_6389b15
        public_6389b11 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_6389b15 : nop
        cmp dword ptr ss : [esp+0x20], 0x18
        jne public_6389b2d
        mov eax, dword ptr ds : [public_658b24c]
        push eax
/*FIXUP push offset public_63ee77c @0x6389b22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push ebp
        call ebx
        add esp, 0xC
        public_6389b2d : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
/*FIXUP push offset public_63ee77c @0x6389b32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi+4]
        add esp, 0xC
        cmp eax, esi
        jne public_6389b7a
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_6389bc4
        mov eax, dword ptr ds : [edi+4]
        lea esi, ds:[edi+4]
        add esi, 4
        test eax, eax
        je public_6389bc4
        public_6389b57 : nop
        mov edx, dword ptr ds : [eax+8]
        push edx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63ee77c @0x6389b64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push ebp
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_6389b57
        jmp public_6389bc4
        public_6389b7a : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6389bc4
        lea esi, ds:[eax+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6389bc4
        public_6389b89 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63ee77c @0x6389b96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push ebp
        call ebx
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[eax+4]
        add esp, 0xC
        cmp esi, ecx
        jne public_6389baf
        add esi, 8
        jmp public_6389bbe
        public_6389baf : nop
        add eax, 8
        cmp esi, eax
        jne public_6389bbb
        sub esi, 4
        jmp public_6389bbe
        public_6389bbb : nop
        add esi, 4
        public_6389bbe : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_6389b89
/*FIXUP public_6389bc4 : nop
        push offset public_63edccc @0x6389bc4*/
  FIXUP public_6389bc4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebp
        call ebx
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax]
        add eax, 4
        add esp, 8
        test edi, edi
        mov dword ptr ss : [esp+0x14], eax
        jne public_6389b11
        pop ebx
        public_6389be5 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6389ac0)
    }
}

#undef public_6389ae8
#undef public_6389b11
#undef public_6389b15
#undef public_6389b2d
#undef public_6389b57
#undef public_6389b7a
#undef public_6389b89
#undef public_6389baf
#undef public_6389bbb
#undef public_6389bbe
#undef public_6389bc4
#undef public_6389be5
