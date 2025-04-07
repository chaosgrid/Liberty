#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b640);

#define public_629b670 _public_629b670
#define public_629b6ac _public_629b6ac

PROC_DECLARE(0x629b640, internal_629b640, public_629b640);
extern "C" NAKED register_t __cdecl internal_629b640()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ds : [public_639902c]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], 0x1FE3
        mov byte ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        lea ebx, ds:[ebx]
        public_629b670 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push eax
        call public_629b440
        mov esi, eax
        test esi, esi
        je public_629b6ac
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [eax]
        push edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_629b670
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        public_629b6ac : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x629b640)
    }
}

#undef public_629b670
#undef public_629b6ac
