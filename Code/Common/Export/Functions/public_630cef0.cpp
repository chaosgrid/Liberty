#include "Common-PCH.h"


#define public_630cf25 _public_630cf25
#define public_630cf4e _public_630cf4e
#define public_630cf52 _public_630cf52
#define public_630cf57 _public_630cf57
#define public_630cf64 _public_630cf64
#define public_630cf97 _public_630cf97
#define public_630cfad _public_630cfad

PROC_DECLARE(0x630cef0, internal_630cef0, public_630cef0);
extern "C" NAKED register_t __cdecl internal_630cef0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x80]
        push esi
        xor esi, esi
        test eax, eax
        push edi
        je public_630cfad
        mov ebp, dword ptr ss : [esp+0x14]
        test ebp, ebp
        je public_630cfad
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jle public_630cfad
        lea edi, ds:[eax-1]
        test edi, edi
        jle public_630cf4e
        public_630cf25 : nop
        mov eax, dword ptr ds : [ebx+0x80]
        push eax
        call dword ptr ds : [public_6399250]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        je public_630cf57
        cmp eax, 0xD
        je public_630cf52
        cmp eax, 0xA
        je public_630cf52
        mov byte ptr ds : [esi+ebp], al
        inc esi
        cmp esi, edi
        jl public_630cf25
        jmp public_630cf52
        public_630cf4e : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_630cf52 : nop
        cmp eax, 0xFFFFFFFF
        jne public_630cf64
        public_630cf57 : nop
        test esi, esi
        jne public_630cf64
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
        public_630cf64 : nop
        mov byte ptr ds : [esi+ebp], 0
        inc esi
        cmp eax, 0xD
        jne public_630cf97
        mov ecx, dword ptr ds : [ebx+0x80]
        push ecx
        call dword ptr ds : [public_6399250]
        add esp, 4
        cmp eax, 0xA
        je public_630cf97
        mov edx, dword ptr ds : [ebx+0x80]
        push 1
        push 0xFFFFFFFF
        push edx
        call dword ptr ds : [public_6399248]
        add esp, 0xC
        public_630cf97 : nop
        mov eax, dword ptr ds : [ebx+0x80]
        push eax
        call dword ptr ds : [public_639924c]
        add esp, 4
        mov dword ptr ds : [ebx+0x84], eax
        public_630cfad : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x630cef0)
    }
}

#undef public_630cf25
#undef public_630cf4e
#undef public_630cf52
#undef public_630cf57
#undef public_630cf64
#undef public_630cf97
#undef public_630cfad
