#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57a9c0);

#define public_57a9dd _public_57a9dd
#define public_57a9f1 _public_57a9f1
#define public_57aa38 _public_57aa38
#define public_57aa49 _public_57aa49
#define public_57aa64 _public_57aa64

PROC_DECLARE(0x57a9c0, internal_57a9c0, public_57a9c0);
extern "C" NAKED register_t __cdecl internal_57a9c0()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        cmp ebx, 1
        push ebp
        mov ebp, dword ptr ss : [esp+0x58]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        jne public_57a9dd
        mov esi, dword ptr ss : [ebp]
        jmp public_57a9f1
        public_57a9dd : nop
        push 0xFFFFFFEB
        push edi
        call dword ptr ds : [public_61642c]
        mov esi, eax
        test esi, esi
        je public_57aa64
        cmp dword ptr ds : [esi+8], edi
        jne public_57aa64
        public_57a9f1 : nop
        test esi, esi
        je public_57aa64
        mov eax, ebx
        dec eax
        je public_57aa49
        dec eax
        je public_57aa38
        sub eax, 0xD
        jne public_57aa64
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_5c7270]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call dword ptr ds : [public_5c7250]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x40
        ret 0x10
        public_57aa38 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0x10
        public_57aa49 : nop
        push esi
        push 0xFFFFFFEB
        push edi
        call dword ptr ds : [public_616434]
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0x10
        public_57aa64 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        push ebp
        push eax
        push ebx
        push edi
        call dword ptr ds : [public_5c7278]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 0x10
        UNREACHABLE_TRAP(0x57a9c0)
    }
}

#undef public_57a9dd
#undef public_57a9f1
#undef public_57aa38
#undef public_57aa49
#undef public_57aa64
