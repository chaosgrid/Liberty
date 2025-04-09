#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ba430);
CLANG_FORWARD_PROC_SYMBOL(public_4bd4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd39a);

#define public_4ba457 _public_4ba457
#define public_4ba46f _public_4ba46f
#define public_4ba486 _public_4ba486
#define public_4ba49e _public_4ba49e
#define public_4ba4a4 _public_4ba4a4
#define public_4ba4d0 _public_4ba4d0
#define public_4ba540 _public_4ba540
#define public_4ba56a _public_4ba56a
#define public_4ba58d _public_4ba58d

PROC_DECLARE(0x4ba430, internal_4ba430, public_4ba430);
extern "C" NAKED register_t __cdecl internal_4ba430()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd39a @0x4ba438*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd39a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [public_672334]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4ba46f
        public_4ba457 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_672330
        call public_4bd4b0
        cmp esi, edi
        jne public_4ba457
        public_4ba46f : nop
        mov al, byte ptr ds : [public_66d35a]
        xor ebx, ebx
        cmp al, bl
        jne public_4ba4a4
        mov edi, dword ptr ds : [public_672328]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4ba49e
        public_4ba486 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_672324
        call public_4bd4b0
        cmp esi, edi
        jne public_4ba486
        public_4ba49e : nop
        mov byte ptr ds : [public_672404], bl
        public_4ba4a4 : nop
        mov esi, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        sub esi, 8
        mov dword ptr ss : [esp+0x44], esi
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 8
        cmp eax, ebx
        mov dword ptr ss : [esp+0x40], ecx
        jle public_4ba58d
        push ebp
        mov ebp, dword ptr ds : [public_5c6424]
        mov dword ptr ss : [esp+0x10], eax
        public_4ba4d0 : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        mov byte ptr ss : [esp+0x25], bl
        mov byte ptr ss : [esp+0x26], bl
        mov byte ptr ss : [esp+0x27], bl
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x48], ebx
        call ebp
        mov esi, dword ptr ds : [public_672334]
        mov edi, dword ptr ds : [esi+4]
        push 0x20
        call public_5b7e84
        add esp, 0x10
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_4ba540
        mov edi, eax
        public_4ba540 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ecx
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x3C], 1
        je public_4ba56a
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_5c6420]
        public_4ba56a : nop
        inc dword ptr ds : [public_672338]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        dec dword ptr ss : [esp+0x10]
        jne public_4ba4d0
        pop ebp
        public_4ba58d : nop
        mov ecx, dword ptr ss : [esp+0x30]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x4ba430)
    }
}

#undef public_4ba457
#undef public_4ba46f
#undef public_4ba486
#undef public_4ba49e
#undef public_4ba4a4
#undef public_4ba4d0
#undef public_4ba540
#undef public_4ba56a
#undef public_4ba58d
