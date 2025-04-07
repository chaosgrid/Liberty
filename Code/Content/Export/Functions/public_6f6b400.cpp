#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b400);

#define public_6f6b448 _public_6f6b448
#define public_6f6b45c _public_6f6b45c
#define public_6f6b473 _public_6f6b473
#define public_6f6b477 _public_6f6b477

PROC_DECLARE(0x6f6b400, internal_6f6b400, public_6f6b400);
extern "C" NAKED register_t __cdecl internal_6f6b400()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0x6C]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        call esi
        add esp, 8
        test al, al
        lea edx, ss:[esp+0x4C]
        push edx
        je public_6f6b448
        lea eax, ss:[esp+0x30]
        push eax
        call esi
        add esp, 8
        test al, al
        jne public_6f6b473
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        call esi
        add esp, 8
        test al, al
        lea ecx, ss:[esp+0x4C]
        jne public_6f6b477
        lea ecx, ss:[esp+0xC]
        jmp public_6f6b477
        public_6f6b448 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call esi
        add esp, 8
        test al, al
        je public_6f6b45c
        lea ecx, ss:[esp+0xC]
        jmp public_6f6b477
        public_6f6b45c : nop
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call esi
        add esp, 8
        test al, al
        lea ecx, ss:[esp+0x4C]
        jne public_6f6b477
        public_6f6b473 : nop
        lea ecx, ss:[esp+0x2C]
        public_6f6b477 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        mov dx, word ptr ds : [ecx+2]
        mov word ptr ds : [eax+2], dx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dl, byte ptr ds : [ecx+0xC]
        mov byte ptr ds : [eax+0xC], dl
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov dl, byte ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov byte ptr ds : [eax+0x18], dl
        mov dword ptr ds : [eax+0x1C], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f6b400)
    }
}

#undef public_6f6b448
#undef public_6f6b45c
#undef public_6f6b473
#undef public_6f6b477
