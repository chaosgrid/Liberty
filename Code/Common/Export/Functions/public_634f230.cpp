#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ded0);
CLANG_FORWARD_PROC_SYMBOL(public_634f230);
CLANG_FORWARD_PROC_SYMBOL(public_634fd10);
CLANG_FORWARD_PROC_SYMBOL(public_6350460);

#define public_634f24c _public_634f24c
#define public_634f250 _public_634f250
#define public_634f29d _public_634f29d
#define public_634f2e9 _public_634f2e9
#define public_634f2f6 _public_634f2f6

PROC_DECLARE(0x634f230, internal_634f230, public_634f230);
extern "C" NAKED register_t __cdecl internal_634f230()
{
    __asm
    {
        sub esp, 8
        push ebx
        xor eax, eax
        mov ebx, ecx
        mov ax, word ptr ds : [ebx+0xE]
        dec eax
        mov dword ptr ss : [esp+4], eax
        js public_634f2f6
        push ebp
        push esi
        push edi
        jmp public_634f250
        public_634f24c : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_634f250 : nop
        mov ecx, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ds : [ecx+eax*4]
        push esi
        mov ecx, ebx
        call public_6350460
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, eax
        shr ecx, 8
        mov edx, 3
        and ecx, edx
        xor eax, 0x100
        lea edi, ds:[ecx*8]
        shr eax, 8
        sub edi, ecx
        and eax, edx
        lea ecx, ds:[eax*8]
        lea edi, ds:[esi+edi*4+0x18]
        sub ecx, eax
        cmp word ptr ds : [edi+0x1A], dx
        lea ebp, ds:[esi+ecx*4+0x18]
        je public_634f29d
        mov eax, edi
        mov edi, ebp
        mov ebp, eax
        public_634f29d : nop
        mov eax, dword ptr ss : [ebp+0x14]
        cmp eax, dword ptr ds : [esi+0x7C]
        je public_634f2e9
        cmp word ptr ss : [ebp+0x1A], 2
        jne public_634f2e9
        cmp word ptr ds : [edi+0x1A], dx
        jne public_634f2e9
        fld dword ptr ds : [esi+0x54]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_658ab2c]
        fnstsw ax
        test ah, 1
        je public_634f2e9
        mov ecx, ebp
        call public_634ded0
        test byte ptr ds : [eax+8], 3
        jne public_634f2e9
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi+0x10]
        push ecx
        push edx
        mov ecx, esi
        call public_634fd10
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [esi+0x7C], eax
        public_634f2e9 : nop
        dec dword ptr ss : [esp+0x10]
        jns public_634f24c
        pop edi
        pop esi
        pop ebp
        public_634f2f6 : nop
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x634f230)
    }
}

#undef public_634f24c
#undef public_634f250
#undef public_634f29d
#undef public_634f2e9
#undef public_634f2f6
