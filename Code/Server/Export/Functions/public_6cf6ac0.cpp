#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf6afe _public_6cf6afe
#define public_6cf6b12 _public_6cf6b12
#define public_6cf6b3f _public_6cf6b3f
#define public_6cf6b4f _public_6cf6b4f
#define public_6cf6bad _public_6cf6bad

PROC_DECLARE(0x6cf6ac0, internal_6cf6ac0, public_6cf6ac0);
extern "C" NAKED register_t __cdecl internal_6cf6ac0()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_6d641c0]
        mov esi, ecx
        mov dword ptr ss : [esp+0x14], eax
        call edi
        xor ebx, ebx
        test al, al
        jne public_6cf6b12
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf6afe
        mov dword ptr ss : [esp+0x10], ebx
        public_6cf6afe : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        call public_6cf73d0
        cmp al, bl
        je public_6cf6bad
        public_6cf6b12 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], ebp
        call edi
        test al, al
        jne public_6cf6b4f
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf6b3f
        mov dword ptr ss : [esp+0x24], ebx
        public_6cf6b3f : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        mov ecx, esi
        call public_6cf73d0
        cmp al, bl
        je public_6cf6bad
        public_6cf6b4f : nop
        mov eax, dword ptr ds : [esi+0x38]
        mov esi, dword ptr ds : [public_6d90260]
        mov ecx, eax
        imul ecx, 0x418
        cmp ebp, dword ptr ds : [ecx+esi-0x34]
        sete cl
        mov edx, dword ptr ds : [public_6d8fb14]
        mov ebx, dword ptr ds : [edx]
        lea esi, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        sub esp, 0x34
        mov edi, esp
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ss : [esp+0x74]
        push ecx
        mov ecx, dword ptr ss : [esp+0x70]
        push ebp
        push ecx
        push eax
        mov ecx, edx
        call dword ptr ds : [ebx+0x110]
        public_6cf6bad : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0x54
        UNREACHABLE_TRAP(0x6cf6ac0)
    }
}

#undef public_6cf6afe
#undef public_6cf6b12
#undef public_6cf6b3f
#undef public_6cf6b4f
#undef public_6cf6bad
