#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4978c0);

#define public_497910 _public_497910
#define public_49793e _public_49793e
#define public_497943 _public_497943
#define public_497952 _public_497952

PROC_DECLARE(0x4978c0, internal_4978c0, public_4978c0);
extern "C" NAKED register_t __cdecl internal_4978c0()
{
    __asm
    {
        sub esp, 0x118
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x7E0]
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], bl
        mov dword ptr ss : [esp+0x6C], ebx
        mov byte ptr ss : [esp+0x70], bl
        mov dword ptr ss : [esp+0x9C], ebx
        mov byte ptr ss : [esp+0xA0], bl
        mov dword ptr ss : [esp+0xE0], ebx
        mov byte ptr ss : [esp+0xE4], bl
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x3C]
        mov ebp, eax
        xor esi, esi
        cmp ebp, ebx
        jbe public_497943
        lea ecx, ds:[ecx]
        public_497910 : nop
        mov ecx, dword ptr ds : [edi+0x7E0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        push esi
        call dword ptr ds : [edx+0x40]
        test al, al
        je public_49793e
        lea ecx, ss:[esp+0x14]
        push ecx
        call dword ptr ds : [public_5c6020]
        mov ecx, dword ptr ss : [esp+0x130]
        add esp, 4
        cmp eax, ecx
        je public_497952
        public_49793e : nop
        inc esi
        cmp esi, ebp
        jb public_497910
        public_497943 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x118
        ret 4
        public_497952 : nop
        mov eax, dword ptr ss : [esp+0x98]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x118
        ret 4
        UNREACHABLE_TRAP(0x4978c0)
    }
}

#undef public_497910
#undef public_49793e
#undef public_497943
#undef public_497952
