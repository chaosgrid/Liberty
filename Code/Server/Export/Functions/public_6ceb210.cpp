#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceee20);

#define public_6ceb240 _public_6ceb240
#define public_6ceb25c _public_6ceb25c
#define public_6ceb25e _public_6ceb25e
#define public_6ceb291 _public_6ceb291
#define public_6ceb2bb _public_6ceb2bb
#define public_6ceb2c0 _public_6ceb2c0
#define public_6ceb2dc _public_6ceb2dc
#define public_6ceb2de _public_6ceb2de
#define public_6ceb324 _public_6ceb324

PROC_DECLARE(0x6ceb210, internal_6ceb210, public_6ceb210);
extern "C" NAKED register_t __cdecl internal_6ceb210()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ss : [esp+0x24]
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        push esi
        push edi
        push eax
        push ebx
        mov dword ptr ss : [esp+0x18], ecx
        call public_6ceee20
        push 1
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d642cc]
        mov ebp, dword ptr ds : [public_6d641ec]
        mov edi, edi
        public_6ceb240 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ceb25c
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ceb25e
        public_6ceb25c : nop
        xor eax, eax
        public_6ceb25e : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64200]
        mov esi, eax
        test esi, esi
        je public_6ceb2bb
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_6ceb291
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push 3
        push 0
        mov ecx, ebx
        push eax
        call ebp
        jmp public_6ceb240
        public_6ceb291 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x44]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jp public_6ceb240
        mov eax, dword ptr ds : [esi]
        mov di, word ptr ds : [esi+8]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x3C]
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        mov ecx, ebx
        call ebp
        jmp public_6ceb240
        public_6ceb2bb : nop
        mov byte ptr ss : [esp+0x14], 1
        public_6ceb2c0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ceb2dc
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ceb2de
        public_6ceb2dc : nop
        xor eax, eax
        public_6ceb2de : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[eax+0x144]
        call dword ptr ds : [public_6d64218]
        mov esi, eax
        test esi, esi
        je public_6ceb324
        mov ecx, esi
        call dword ptr ds : [public_6d642c8]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jp public_6ceb2c0
        mov edx, dword ptr ds : [esi+4]
        mov di, word ptr ds : [edx+4]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64210]
        push ecx
        fstp dword ptr ss : [esp]
        push edi
        mov ecx, ebx
        call ebp
        jmp public_6ceb2c0
        public_6ceb324 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x6ceb210)
    }
}

#undef public_6ceb240
#undef public_6ceb25c
#undef public_6ceb25e
#undef public_6ceb291
#undef public_6ceb2bb
#undef public_6ceb2c0
#undef public_6ceb2dc
#undef public_6ceb2de
#undef public_6ceb324
