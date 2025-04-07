#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);

#define public_6f0a05a _public_6f0a05a
#define public_6f0a072 _public_6f0a072

PROC_DECLARE(0x6f0a030, internal_6f0a030, public_6f0a030);
extern "C" NAKED register_t __cdecl internal_6f0a030()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        mov ebp, dword ptr ds : [public_6fb3048]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, ecx
        push 0
        mov ecx, edi
        call ebp
        test eax, eax
        jne public_6f0a05a
        mov dword ptr ds : [esi+0x140], eax
        mov byte ptr ds : [esi+0x144], al
        jmp public_6f0a072
        public_6f0a05a : nop
        push eax
        lea eax, ds:[esi+0x144]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [esi+0x140], eax
        public_6f0a072 : nop
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp qword ptr ss : [esp+0xC]
        push 1
        mov ecx, edi
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0xC]
        push 3
        mov ecx, edi
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [public_6fb3044]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+0x124]
        mov dword ptr ds : [ecx], edx
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        push 4
        mov ecx, edi
        call ebp
        push eax
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        push 5
        mov ecx, edi
        mov dword ptr ds : [esi+0x178], eax
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [esi+0x13C]
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6f0a030)
    }
}

#undef public_6f0a05a
#undef public_6f0a072
