#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d072c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d08740);
CLANG_FORWARD_PROC_SYMBOL(public_6d08890);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b450);

#define public_6d088f6 _public_6d088f6
#define public_6d08932 _public_6d08932

PROC_DECLARE(0x6d08890, internal_6d08890, public_6d08890);
extern "C" NAKED register_t __cdecl internal_6d08890()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebp
        mov edi, ecx
        call public_6d08740
        mov eax, dword ptr ds : [public_6d90260]
        mov esi, ebp
        imul esi, 0x418
        lea ecx, ds:[esi+eax-0x418]
        call public_6d4b450
        mov eax, dword ptr ds : [public_6d90260]
        mov ecx, dword ptr ds : [esi+eax-0x38]
        test ecx, ecx
        je public_6d088f6
        mov dword ptr ds : [esi+eax-0x38], 0
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        push 0x3A
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x18], 0
        call public_6d43650
        add esp, 8
        public_6d088f6 : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6d08932
        mov al, byte ptr ds : [edi+0xFC]
        test al, al
        je public_6d08932
        mov ecx, dword ptr ds : [edi+4]
        mov byte ptr ds : [edi+0xFC], 0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x3D
        call public_6d43650
        add esp, 8
        mov ecx, edi
        call public_6d072c0
        public_6d08932 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d08890)
    }
}

#undef public_6d088f6
#undef public_6d08932
