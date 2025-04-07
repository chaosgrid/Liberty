#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ec81c0 _public_6ec81c0
#define public_6ec81e0 _public_6ec81e0
#define public_6ec81f8 _public_6ec81f8
#define public_6ec8215 _public_6ec8215
#define public_6ec822d _public_6ec822d
#define public_6ec824a _public_6ec824a
#define public_6ec8267 _public_6ec8267

PROC_DECLARE(0x6ec81a0, internal_6ec81a0, public_6ec81a0);
extern "C" NAKED register_t __cdecl internal_6ec81a0()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x40]
        xor ebx, ebx
        push ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ec8267
        push esi
        push edi
        mov edi, edi
        public_6ec81c0 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        push ebx
        call dword ptr ds : [public_6fb3048]
        mov esi, eax
        test esi, esi
        mov byte ptr ss : [esp+0x14], 0
        jne public_6ec81e0
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x14], al
        jmp public_6ec8215
        public_6ec81e0 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6ec81f8
        mov eax, 0x2F
        public_6ec81f8 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x14], 0
        mov dword ptr ss : [esp+0x10], eax
        public_6ec8215 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ds : [esi+4]
        push 0x3C
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ec822d
        mov edi, eax
        public_6ec822d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6ec824a
        mov ecx, 0xD
        lea esi, ss:[esp+0x10]
        rep movsd
        public_6ec824a : nop
        mov edi, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [esp+0x48]
        inc edi
        inc ebx
        push ebx
        mov dword ptr ss : [ebp+0x14], edi
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ec81c0
        pop edi
        pop esi
        public_6ec8267 : nop
        pop ebp
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x6ec81a0)
    }
}

#undef public_6ec81c0
#undef public_6ec81e0
#undef public_6ec81f8
#undef public_6ec8215
#undef public_6ec822d
#undef public_6ec824a
#undef public_6ec8267
