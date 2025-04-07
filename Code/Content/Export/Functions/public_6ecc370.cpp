#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6ecc3a4 _public_6ecc3a4
#define public_6ecc3ac _public_6ecc3ac
#define public_6ecc3c6 _public_6ecc3c6
#define public_6ecc3da _public_6ecc3da

PROC_DECLARE(0x6ecc370, internal_6ecc370, public_6ecc370);
extern "C" NAKED register_t __cdecl internal_6ecc370()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        lea ebx, ds:[edi+0xC]
        add esi, 0x204
        push ebx
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6ecc3a4
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6ecc3a4
        lea eax, ss:[esp+0xC]
        jmp public_6ecc3ac
        public_6ecc3a4 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6ecc3ac : nop
        mov esi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edx+0x208]
        je public_6ecc3da
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_6ecc3c6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6ecc3c6 : nop
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        add ecx, 0x204
        call public_6f20e00
        public_6ecc3da : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ecc370)
    }
}

#undef public_6ecc3a4
#undef public_6ecc3ac
#undef public_6ecc3c6
#undef public_6ecc3da
