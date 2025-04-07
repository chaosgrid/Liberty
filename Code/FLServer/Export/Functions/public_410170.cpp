#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410890);
CLANG_FORWARD_PROC_SYMBOL(public_410db0);
CLANG_FORWARD_PROC_SYMBOL(public_4118e0);
CLANG_FORWARD_PROC_SYMBOL(public_411ac0);
CLANG_FORWARD_PROC_SYMBOL(public_411b50);

#define public_4101a5 _public_4101a5
#define public_4101b4 _public_4101b4
#define public_4101cb _public_4101cb

PROC_DECLARE(0x410170, internal_410170, public_410170);
extern "C" NAKED register_t __cdecl internal_410170()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        sub esp, 0x10
        test al, al
        jne public_4101cb
        push ebx
        push esi
        push edi
        lea esi, ds:[ecx+0x78]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_411ac0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov ebx, eax
        call public_4118e0
        mov edi, eax
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], edi
        je public_4101b4
        public_4101a5 : nop
        lea ecx, ss:[esp+0x24]
        call public_411b50
        cmp dword ptr ss : [esp+0x24], ebx
        jne public_4101a5
        public_4101b4 : nop
        push ebx
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_410890
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 8
        public_4101cb : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp]
        mov dword ptr ss : [esp], eax
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        add ecx, 0x78
        mov byte ptr ss : [esp+0xC], 0
        call public_410db0
        mov ecx, dword ptr ss : [esp+8]
        mov byte ptr ds : [ecx+0x10], 1
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x410170)
    }
}

#undef public_4101a5
#undef public_4101b4
#undef public_4101cb
