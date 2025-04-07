#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f513c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f51ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f526a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52810);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ac90);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f51400 _public_6f51400
#define public_6f51402 _public_6f51402
#define public_6f51439 _public_6f51439
#define public_6f5146d _public_6f5146d
#define public_6f5146f _public_6f5146f
#define public_6f514a0 _public_6f514a0
#define public_6f514d4 _public_6f514d4
#define public_6f514d6 _public_6f514d6
#define public_6f51518 _public_6f51518

PROC_DECLARE(0x6f513c0, internal_6f513c0, public_6f513c0);
extern "C" NAKED register_t __cdecl internal_6f513c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_6fd0cd4]
        sub esp, 0xC
        cmp ecx, edx
        push esi
        jne public_6f51439
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, offset public_6fd0ca4
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6fd0ca8]
        je public_6f51400
        lea esi, ds:[eax+0x10]
        jmp public_6f51402
        public_6f51400 : nop
        xor esi, esi
        public_6f51402 : nop
        mov eax, dword ptr ds : [esi+0xD8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        push 1
        push ecx
        push eax
        mov ecx, esi
        call public_6f51ee0
        mov edx, dword ptr ds : [esi+0xD8]
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[esi+0xD4]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call public_6ecfe80
        pop esi
        add esp, 0xC
        ret 
        public_6f51439 : nop
        cmp ecx, dword ptr ds : [public_6fd0cd0]
        jne public_6f514a0
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, offset public_6fd0ca4
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6fd0ca8]
        je public_6f5146d
        lea esi, ds:[eax+0x10]
        jmp public_6f5146f
        public_6f5146d : nop
        xor esi, esi
        public_6f5146f : nop
        mov ecx, dword ptr ds : [esi+0xE4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[esi+0xA4]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f526a0
        lea ecx, ds:[esi+0xE0]
        call public_6f68e40
        pop esi
        add esp, 0xC
        ret 
        public_6f514a0 : nop
        cmp ecx, dword ptr ds : [public_6fd0ccc]
        jne public_6f51518
        mov edx, dword ptr ds : [eax+4]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_6fd0ca4
        mov dword ptr ss : [esp+0x1C], edx
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_6fd0ca8]
        je public_6f514d4
        lea esi, ds:[eax+0x10]
        jmp public_6f514d6
        public_6f514d4 : nop
        xor esi, esi
        public_6f514d6 : nop
        mov edx, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        push 0
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+8], eax
        push edx
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6f7ac90
        push eax
        lea ecx, ds:[esi+0xC4]
        call public_6f52810
        lea ecx, ds:[esi+0xEC]
        call public_6f68e40
        public_6f51518 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f513c0)
    }
}

#undef public_6f51400
#undef public_6f51402
#undef public_6f51439
#undef public_6f5146d
#undef public_6f5146f
#undef public_6f514a0
#undef public_6f514d4
#undef public_6f514d6
#undef public_6f51518
