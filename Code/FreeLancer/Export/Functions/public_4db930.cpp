#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4db930);
CLANG_FORWARD_PROC_SYMBOL(public_4e7e20);
CLANG_FORWARD_PROC_SYMBOL(public_4f5580);
CLANG_FORWARD_PROC_SYMBOL(public_4f6170);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4db9cb _public_4db9cb
#define public_4db9cd _public_4db9cd
#define public_4db9fe _public_4db9fe
#define public_4dba00 _public_4dba00
#define public_4dba2e _public_4dba2e
#define public_4dba44 _public_4dba44

PROC_DECLARE(0x4db930, internal_4db930, public_4db930);
extern "C" NAKED register_t __cdecl internal_4db930()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov ebx, dword ptr ss : [esp+0x30]
        push ebp
        push esi
        push ebx
        mov esi, ecx
        call public_4e7e20
        mov ebp, eax
        test ebp, ebp
        je public_4dba44
        push ebp
        call dword ptr ds : [public_5c6538]
        add esp, 4
        test eax, eax
        je public_4dba44
        push edi
        push 0x17
        call public_5645c0
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x14]
        rep stosd
        xor eax, eax
        mov ax, bx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov byte ptr ss : [esp+0x3E], 1
        mov dword ptr ss : [esp+0x18], 0x19
        mov dword ptr ss : [esp+0x2C], 2
        mov dword ptr ss : [esp+0x28], eax
        call public_54bcb0
        mov esi, dword ptr ds : [esi+0x28]
        add esp, 8
        test esi, esi
        je public_4db9cb
        lea eax, ds:[esi-8]
        test eax, eax
        je public_4db9cb
        add eax, 0xC
        test eax, eax
        je public_4db9cb
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_4db9cb
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_4db9cd
        public_4db9cb : nop
        xor esi, esi
        public_4db9cd : nop
        mov ebx, dword ptr ds : [public_5c6348]
        mov ecx, esi
        xor edi, edi
        call ebx
        test eax, eax
        je public_4dba00
        mov ecx, esi
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4db9fe
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_4db9fe
        mov edi, eax
        jmp public_4dba00
        public_4db9fe : nop
        xor edi, edi
        public_4dba00 : nop
        push ebp
        call dword ptr ds : [public_5c6544]
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        mov ecx, ebp
        mov ebx, eax
        call dword ptr ds : [edx+4]
        test al, al
        je public_4dba2e
        test ebx, ebx
        je public_4dba2e
        mov ecx, esi
        call dword ptr ds : [public_5c6540]
        mov ecx, ebx
        push eax
        push edi
        call dword ptr ds : [public_5c653c]
        public_4dba2e : nop
        mov ecx, offset public_674c0c
        call public_4f6170
        push eax
        mov ecx, offset public_674c0c
        call public_4f5580
        pop edi
        public_4dba44 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x4db930)
    }
}

#undef public_4db9cb
#undef public_4db9cd
#undef public_4db9fe
#undef public_4dba00
#undef public_4dba2e
#undef public_4dba44
