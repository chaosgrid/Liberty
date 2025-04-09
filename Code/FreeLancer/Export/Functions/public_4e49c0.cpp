#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45a7c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e49c0);

#define public_4e4a6c _public_4e4a6c
#define public_4e4abd _public_4e4abd
#define public_4e4ac6 _public_4e4ac6
#define public_4e4ad5 _public_4e4ad5

PROC_DECLARE(0x4e49c0, internal_4e49c0, public_4e49c0);
extern "C" NAKED register_t __cdecl internal_4e49c0()
{
    __asm
    {
        sub esp, 0x100
        push ebp
        mov ebp, dword ptr ss : [esp+0x108]
        push esi
        push edi
        mov word ptr ss : [ebp], 0
        mov eax, dword ptr ds : [public_5c6368]
        mov edi, ecx
        mov cx, word ptr ds : [edi+0x534]
        cmp cx, word ptr ds : [eax]
        je public_4e4ad5
        mov eax, dword ptr ds : [edi+0x398]
        test eax, eax
        je public_4e4ad5
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e4ad5
        add eax, 0xC
        test eax, eax
        je public_4e4ad5
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4e4ad5
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_4e4ad5
        push ecx
        lea ecx, ds:[esi+0x144]
        call dword ptr ds : [public_5c657c]
        test eax, eax
        je public_4e4a6c
        mov ecx, eax
        call dword ptr ds : [public_5c6578]
        push eax
        call public_45a7c0
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x14
        jmp public_4e4abd
        public_4e4a6c : nop
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0x534]
        push ecx
        lea ecx, ds:[esi+0xE4]
        call dword ptr ds : [public_5c6574]
        push eax
        call dword ptr ds : [public_5c6570]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_4e4ad5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        test al, al
        je public_4e4ad5
        mov eax, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        public_4e4abd : nop
        test eax, eax
        jne public_4e4ac6
        mov word ptr ss : [esp+0xC], ax
        public_4e4ac6 : nop
        lea eax, ss:[esp+0xC]
        push eax
        push ebp
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        public_4e4ad5 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x100
        ret 4
        UNREACHABLE_TRAP(0x4e49c0)
    }
}

#undef public_4e4a6c
#undef public_4e4abd
#undef public_4e4ac6
#undef public_4e4ad5
