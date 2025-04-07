#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f011f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f01420);
CLANG_FORWARD_PROC_SYMBOL(public_6f020c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47980);
CLANG_FORWARD_PROC_SYMBOL(public_6f48770);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f01275 _public_6f01275
#define public_6f012b4 _public_6f012b4
#define public_6f012be _public_6f012be
#define public_6f012e2 _public_6f012e2
#define public_6f0132a _public_6f0132a
#define public_6f01338 _public_6f01338
#define public_6f01392 _public_6f01392
#define public_6f0139f _public_6f0139f
#define public_6f013d5 _public_6f013d5
#define public_6f013e0 _public_6f013e0
#define public_6f01410 _public_6f01410

PROC_DECLARE(0x6f011f0, internal_6f011f0, public_6f011f0);
extern "C" NAKED register_t __cdecl internal_6f011f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3294]
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        lea edi, ds:[esi+0x20]
        push edi
/*FIXUP push offset public_6fb7d98 @0x6f01205*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d98
        mov byte ptr ss : [esp+0x1B], 1
        call ebp
        add esp, 8
        test eax, eax
        je public_6f01410
        push edi
/*FIXUP push offset public_6fb7da0 @0x6f0121d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7da0
        call ebp
        add esp, 8
        test eax, eax
        je public_6f01410
        push edi
/*FIXUP push offset public_6fb7dac @0x6f01230*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7dac
        call ebp
        add esp, 8
        test eax, eax
        je public_6f01410
        push edi
/*FIXUP push offset public_6fb7d8c @0x6f01243*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d8c
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f01275
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push esi
        push edx
        call public_6f01420
        mov al, byte ptr ss : [esp+0x23]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f01275 : nop
        mov eax, dword ptr ds : [esi+0x40]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6f49b00
        add esp, 4
        mov edi, eax
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ds:[esi+0x4C]
        push eax
        mov ecx, edi
        call public_6f47980
        mov ecx, dword ptr ds : [eax+0x48]
        push ecx
        mov ecx, edi
        call public_6f48770
        test al, al
        jne public_6f012b4
        mov dword ptr ss : [esp+0x20], 0
        jmp public_6f012be
        public_6f012b4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6f012e2
        public_6f012be : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        push esi
        push ecx
        call public_6f01420
        mov al, byte ptr ss : [esp+0x23]
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f012e2 : nop
        cmp eax, 1
        jne public_6f01338
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [esi+0x44]
        push eax
        push edx
        push esi
        push 0xC
        call public_6f020c0
        add esp, 0x10
        cmp eax, ebx
        je public_6f0132a
        cmp byte ptr ds : [eax], bl
        je public_6f0132a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x218]
        mov dword ptr ds : [ecx+edx*4+0x118], eax
        mov eax, dword ptr ds : [ecx+0x218]
        mov dword ptr ds : [ecx+eax*4+0x198], ebx
        inc dword ptr ds : [ecx+0x218]
        public_6f0132a : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ss : [esp+7], bl
        mov al, bl
        pop ebx
        add esp, 8
        ret 
        public_6f01338 : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f01410
        mov eax, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+0x44]
        cmp eax, 2
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        push ebp
        push ecx
        jne public_6f0139f
        push 0xB
        call public_6f020c0
        mov edi, dword ptr ss : [esp+0x2C]
        add esp, 0x10
        cmp eax, ebx
        je public_6f01392
        cmp byte ptr ds : [eax], bl
        je public_6f01392
        mov ecx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+ecx*4+0x118], eax
        mov edx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+edx*4+0x198], ebx
        inc dword ptr ds : [edi+0x218]
        public_6f01392 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [esi+0x44]
        push eax
        push ebp
        push esi
        push 0x1B
        jmp public_6f013e0
        public_6f0139f : nop
        push 0xA
        call public_6f020c0
        mov edi, dword ptr ss : [esp+0x2C]
        add esp, 0x10
        cmp eax, ebx
        je public_6f013d5
        cmp byte ptr ds : [eax], bl
        je public_6f013d5
        mov ecx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+ecx*4+0x118], eax
        mov edx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+edx*4+0x198], ebx
        inc dword ptr ds : [edi+0x218]
        public_6f013d5 : nop
        mov eax, dword ptr ds : [esi+0x48]
        mov esi, dword ptr ds : [esi+0x44]
        push eax
        push ebp
        push esi
        push 0x14
        public_6f013e0 : nop
        call public_6f020c0
        add esp, 0x10
        cmp eax, ebx
        je public_6f01410
        cmp byte ptr ds : [eax], bl
        je public_6f01410
        mov ecx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+ecx*4+0x118], eax
        mov edx, dword ptr ds : [edi+0x218]
        mov dword ptr ds : [edi+edx*4+0x198], ebx
        inc dword ptr ds : [edi+0x218]
        public_6f01410 : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f011f0)
    }
}

#undef public_6f01275
#undef public_6f012b4
#undef public_6f012be
#undef public_6f012e2
#undef public_6f0132a
#undef public_6f01338
#undef public_6f01392
#undef public_6f0139f
#undef public_6f013d5
#undef public_6f013e0
#undef public_6f01410
