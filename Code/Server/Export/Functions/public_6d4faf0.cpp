#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d140f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4faf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);

#define public_6d4fb40 _public_6d4fb40
#define public_6d4fb7e _public_6d4fb7e
#define public_6d4fb99 _public_6d4fb99
#define public_6d4fbad _public_6d4fbad
#define public_6d4fbb2 _public_6d4fbb2
#define public_6d4fbbd _public_6d4fbbd
#define public_6d4fc06 _public_6d4fc06
#define public_6d4fc19 _public_6d4fc19
#define public_6d4fc25 _public_6d4fc25

PROC_DECLARE(0x6d4faf0, internal_6d4faf0, public_6d4faf0);
extern "C" NAKED register_t __cdecl internal_6d4faf0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x3EC]
        push esi
        xor esi, esi
        test eax, eax
        je public_6d4fc25
        call public_6d15650
        test eax, eax
        je public_6d4fc25
        mov ecx, dword ptr ds : [ebx+0x3EC]
        push ecx
        mov ecx, eax
        call public_6d140f0
        mov ebp, dword ptr ds : [ebx+0x31C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ebx+0x27C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d4fbbd
        push edi
        mov edi, edi
        public_6d4fb40 : nop
        mov edi, dword ptr ds : [esi+0xC]
        push edi
        call dword ptr ds : [public_6d644bc]
        add esp, 4
        test eax, eax
        je public_6d4fbb2
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        call public_6d12cd0
        fstp dword ptr ss : [esp+0x10]
        push edi
        call dword ptr ds : [public_6d64418]
        add esp, 4
        test al, al
        je public_6d4fb7e
        fld dword ptr ss : [esp+0x10]
        call public_6d60150
        mov ecx, dword ptr ds : [esi+0x1C]
        imul ecx, eax
        jmp public_6d4fb99
        public_6d4fb7e : nop
        fld dword ptr ds : [public_6d6ae7c]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_6d6b87c]
        call public_6d60150
        mov ecx, eax
        imul ecx, dword ptr ds : [esi+0x1C]
        public_6d4fb99 : nop
        cmp ecx, 0x3B9AC9FF
        jg public_6d4fbad
        cmp ebp, 0x3B9AC9FF
        jg public_6d4fbad
        add ebp, ecx
        jmp public_6d4fbb2
        public_6d4fbad : nop
        mov ebp, 0x3B9AC9FF
        public_6d4fbb2 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x27C]
        jne public_6d4fb40
        pop edi
        public_6d4fbbd : nop
        mov ebx, dword ptr ds : [ebx+0x264]
        xor esi, esi
        test ebx, 0x3FFFFFFF
        je public_6d4fc06
        push ebx
        call dword ptr ds : [public_6d64950]
        mov ecx, eax
        call dword ptr ds : [public_6d6494c]
        test eax, eax
        je public_6d4fc06
        mov eax, dword ptr ds : [eax+0x48]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call public_6d12cd0
        fld dword ptr ds : [public_6d6ae78]
        fmul st, st(1)
        call public_6d60150
        fstp st(0)
        mov esi, eax
        cmp esi, 0x3B9AC9FF
        jg public_6d4fc19
        public_6d4fc06 : nop
        cmp ebp, 0x3B9AC9FF
        jg public_6d4fc19
        add ebp, esi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6d4fc19 : nop
        pop esi
        pop ebp
        mov eax, 0x3B9AC9FF
        pop ebx
        add esp, 8
        ret 
        public_6d4fc25 : nop
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d4faf0)
    }
}

#undef public_6d4fb40
#undef public_6d4fb7e
#undef public_6d4fb99
#undef public_6d4fbad
#undef public_6d4fbb2
#undef public_6d4fbbd
#undef public_6d4fc06
#undef public_6d4fc19
#undef public_6d4fc25
