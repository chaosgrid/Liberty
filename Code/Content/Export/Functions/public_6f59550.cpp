#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f59550);

#define public_6f59564 _public_6f59564
#define public_6f59579 _public_6f59579
#define public_6f59581 _public_6f59581
#define public_6f5958a _public_6f5958a

PROC_DECLARE(0x6f59550, internal_6f59550, public_6f59550);
extern "C" NAKED register_t __cdecl internal_6f59550()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        jbe public_6f59581
        mov ebp, dword ptr ss : [esp+0x14]
        mov esi, ecx
        public_6f59564 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6f59579
        push eax
        push ebp
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6f5958a
        public_6f59579 : nop
        inc edi
        add esi, 8
        cmp edi, ebx
        jb public_6f59564
        public_6f59581 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_6f5958a : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        mov al, 1
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f59550)
    }
}

#undef public_6f59564
#undef public_6f59579
#undef public_6f59581
#undef public_6f5958a
