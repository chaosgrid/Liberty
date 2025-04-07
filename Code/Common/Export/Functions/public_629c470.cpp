#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b540);
CLANG_FORWARD_PROC_SYMBOL(public_62932a0);
CLANG_FORWARD_PROC_SYMBOL(public_629cb70);
CLANG_FORWARD_PROC_SYMBOL(public_62ad4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629c4a8 _public_629c4a8
#define public_629c4b8 _public_629c4b8
#define public_629c4ba _public_629c4ba
#define public_629c4fb _public_629c4fb
#define public_629c544 _public_629c544
#define public_629c58c _public_629c58c
#define public_629c596 _public_629c596

PROC_DECLARE(0x629c470, internal_629c470, public_629c470);
extern "C" NAKED register_t __cdecl internal_629c470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push ebx
        push esi
        push eax
        mov esi, ecx
        call public_62932a0
        mov bl, al
        test bl, bl
        je public_629c58c
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi+0x68]
        mov edx, dword ptr ds : [edi+0x6C]
        cmp ecx, edx
        je public_629c4b8
        public_629c4a8 : nop
        cmp dword ptr ds : [ecx+4], eax
        je public_629c596
        add ecx, 0xC
        cmp ecx, edx
        jne public_629c4a8
        public_629c4b8 : nop
        xor ecx, ecx
        public_629c4ba : nop
        push ecx
        mov ecx, edi
        call public_62ad4c0
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x4C]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi+0x80]
        test ecx, ecx
        je public_629c4fb
        push esi
        call public_629cb70
        mov al, byte ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [esi+0x80]
        test al, al
        mov eax, dword ptr ds : [edx+8]
        sete cl
        push ecx
        push eax
        call public_628b540
        add esp, 8
        public_629c4fb : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x64]
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc204]
        test eax, eax
        jne public_629c544
        call public_6391cf0
        mov dword ptr ds : [public_63fc204], eax
        public_629c544 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        push 1
        push edi
        push eax
        call dword ptr ds : [ecx+0x84]
        pop edi
        public_629c58c : nop
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x18
        ret 4
        public_629c596 : nop
        mov ecx, dword ptr ds : [ecx]
        jmp public_629c4ba
        UNREACHABLE_TRAP(0x629c470)
    }
}

#undef public_629c4a8
#undef public_629c4b8
#undef public_629c4ba
#undef public_629c4fb
#undef public_629c544
#undef public_629c58c
#undef public_629c596
