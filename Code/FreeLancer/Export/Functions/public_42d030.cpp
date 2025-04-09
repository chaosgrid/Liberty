#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d030);

#define public_42d055 _public_42d055
#define public_42d080 _public_42d080
#define public_42d08a _public_42d08a

PROC_DECLARE(0x42d030, internal_42d030, public_42d030);
extern "C" NAKED register_t __cdecl internal_42d030()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_5c6f80]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_42d055
        push eax
        push 0
        call ebp
        push eax
        call dword ptr ds : [public_5c6ed4]
        mov dword ptr ds : [esi+4], 0
        public_42d055 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_42d08a
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call ebp
        push eax
        call dword ptr ds : [public_5c6edc]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebx
        mov edx, eax
        pop edi
        lea esp, ss:[esp]
        public_42d080 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_42d080
        public_42d08a : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x42d030)
    }
}

#undef public_42d055
#undef public_42d080
#undef public_42d08a
