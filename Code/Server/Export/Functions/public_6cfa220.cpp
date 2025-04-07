#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00380);
CLANG_FORWARD_PROC_SYMBOL(public_6d00630);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cc00);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d000);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d100);

#define public_6cfa2f0 _public_6cfa2f0
#define public_6cfa2fe _public_6cfa2fe
#define public_6cfa338 _public_6cfa338
#define public_6cfa358 _public_6cfa358
#define public_6cfa361 _public_6cfa361
#define public_6cfa366 _public_6cfa366

PROC_DECLARE(0x6cfa220, internal_6cfa220, public_6cfa220);
extern "C" NAKED register_t __cdecl internal_6cfa220()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        sub esp, 0x6C
        test ecx, 0x3FFFFFFF
        mov eax, 0xFFFFFFFC
        je public_6cfa366
        lea edx, ss:[esp]
        push edx
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cfa361
        mov eax, dword ptr ss : [esp+0x74]
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x78]
        push edx
        push ecx
        call public_6d00630
        add esp, 0xC
        test al, al
        je public_6cfa358
        mov edx, dword ptr ds : [public_6d64388]
        mov ecx, dword ptr ds : [public_6d64384]
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x3C], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x40], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x44], eax
        mov ecx, dword ptr ds : [ecx+8]
        push ebx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ss : [esp+4]
        cmp ecx, ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], 2
        mov byte ptr ss : [esp+0x5C], bl
        mov byte ptr ss : [esp+0x5D], 1
        mov byte ptr ss : [esp+0x66], bl
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        mov byte ptr ss : [esp+0x5E], bl
        je public_6cfa2f0
        cmp dword ptr ss : [esp+0x78], ecx
        je public_6cfa2fe
        lea edx, ss:[esp+0x40]
        push edx
        push esi
        call public_6d0d000
        jmp public_6cfa2fe
        public_6cfa2f0 : nop
        lea eax, ss:[esp+0x40]
        push eax
        push esi
        call public_6d00380
        add esp, 8
        public_6cfa2fe : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call dword ptr ds : [edx+0x250]
        mov ecx, dword ptr ss : [esp+0x78]
        cmp ecx, dword ptr ss : [esp+8]
        je public_6cfa338
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea edx, ss:[esp+0x48]
        push edx
        push esi
        call public_6d0d100
        mov ecx, dword ptr ss : [esp+0x78]
        public_6cfa338 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x80]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        push esi
        call public_6d0cc00
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x6C
        ret 
        public_6cfa358 : nop
        mov eax, 0xFFFFFFFD
        add esp, 0x6C
        ret 
        public_6cfa361 : nop
        mov eax, 0xFFFFFFFE
        public_6cfa366 : nop
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6cfa220)
    }
}

#undef public_6cfa2f0
#undef public_6cfa2fe
#undef public_6cfa338
#undef public_6cfa358
#undef public_6cfa361
#undef public_6cfa366
