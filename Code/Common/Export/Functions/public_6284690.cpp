#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_6281630);
CLANG_FORWARD_PROC_SYMBOL(public_6284690);
CLANG_FORWARD_PROC_SYMBOL(public_62847e0);

#define public_62846c7 _public_62846c7
#define public_6284704 _public_6284704
#define public_6284706 _public_6284706
#define public_6284732 _public_6284732
#define public_628479b _public_628479b
#define public_62847aa _public_62847aa
#define public_62847d0 _public_62847d0

PROC_DECLARE(0x6284690, internal_6284690, public_6284690);
extern "C" NAKED register_t __cdecl internal_6284690()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x34
        cmp ecx, 0xFFFFFFFF
        push edi
        je public_62847d0
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_62847d0
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        push esi
        public_62846c7 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov esi, eax
        test esi, esi
        je public_628479b
        cmp esi, dword ptr ss : [esp+0x48]
        je public_628479b
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        mov dword ptr ss : [esp+0xC], esi
        je public_6284704
        mov ecx, dword ptr ds : [esi+0x84]
        call public_6281630
        jmp public_6284706
        public_6284704 : nop
        xor al, al
        public_6284706 : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov byte ptr ss : [esp+0x14], al
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_626b560
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_6284732
        mov ecx, dword ptr ds : [esi+0x84]
        push 1
        push 0
        call public_6281510
        public_6284732 : nop
        mov edx, dword ptr ds : [public_63fc0e8]
        mov ecx, dword ptr ds : [public_63eb360]
        mov eax, dword ptr ds : [public_63fc0ec]
        mov dword ptr ss : [esp+0x18], edx
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [public_63fc0f0]
        push edx
        push esi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov byte ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x2C], 0
        call public_62847e0
        push ebp
        push esi
        push edi
        call public_6284690
        add esp, 0x14
        jmp public_62847aa
        public_628479b : nop
        mov eax, dword ptr ss : [esp+0x48]
        push ebp
        push eax
        push edi
        call public_6284690
        add esp, 0xC
        public_62847aa : nop
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [eax]
        push edi
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_62846c7
        pop esi
        pop ebp
        public_62847d0 : nop
        pop edi
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6284690)
    }
}

#undef public_62846c7
#undef public_6284704
#undef public_6284706
#undef public_6284732
#undef public_628479b
#undef public_62847aa
#undef public_62847d0
