#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6315f90);

#define public_63142bc _public_63142bc
#define public_63142c4 _public_63142c4
#define public_631430a _public_631430a
#define public_6314329 _public_6314329
#define public_631433d _public_631433d
#define public_6314359 _public_6314359
#define public_631436d _public_631436d
#define public_6314389 _public_6314389
#define public_63143a6 _public_63143a6
#define public_63143aa _public_63143aa
#define public_63143c7 _public_63143c7
#define public_63143f7 _public_63143f7
#define public_631440b _public_631440b
#define public_6314427 _public_6314427
#define public_6314454 _public_6314454
#define public_6314470 _public_6314470
#define public_631448d _public_631448d
#define public_63144a7 _public_63144a7

PROC_DECLARE(0x6314280, internal_6314280, public_6314280);
extern "C" NAKED register_t __cdecl internal_6314280()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_62fcfb0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_63142bc
        mov edx, dword ptr ss : [esp+0x14]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_63142bc
        lea eax, ss:[esp+0x10]
        jmp public_63142c4
        public_63142bc : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x18]
        public_63142c4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x1C]
        jne public_63144a7
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6315f90
        mov ecx, dword ptr ds : [ebx]
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [edi+8], eax
        mov ecx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx+0x14]
        lea esi, ds:[ebx+0xC]
        mov ebx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], edi
        lea ebp, ds:[edi+0xC]
        jae public_631430a
        mov ebx, eax
        public_631430a : nop
        cmp ebp, esi
        jne public_6314329
        push eax
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        jmp public_63143aa
        public_6314329 : nop
        test ebx, ebx
        jbe public_631436d
        cmp ebx, ecx
        jne public_631436d
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_631433d
        mov eax, dword ptr ds : [public_63991d0]
        public_631433d : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_631436d
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6314359
        mov eax, dword ptr ds : [public_63991d0]
        public_6314359 : nop
        mov dword ptr ss : [ebp+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        inc byte ptr ds : [eax-1]
        jmp public_63143aa
        public_631436d : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_63143a6
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6314389
        mov esi, dword ptr ds : [public_63991d0]
        public_6314389 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_63143a6 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_63143aa : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        lea esi, ds:[ecx+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        lea ebp, ds:[edi+0x1C]
        jae public_63143c7
        mov ebx, eax
        public_63143c7 : nop
        cmp ebp, esi
        jne public_63143f7
        push eax
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [edi+0x2C], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_63143f7 : nop
        test ebx, ebx
        jbe public_6314454
        cmp ebx, ecx
        jne public_6314454
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_631440b
        mov eax, dword ptr ds : [public_63991d0]
        public_631440b : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6314454
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6314427
        mov eax, dword ptr ds : [public_63991d0]
        public_6314427 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        mov edx, dword ptr ss : [esp+0x20]
        inc cl
        mov byte ptr ds : [eax-1], cl
        mov eax, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [edi+0x2C], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_6314454 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_631448d
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6314470
        mov esi, dword ptr ds : [public_63991d0]
        public_6314470 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_631448d : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [edi+0x2C], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_63144a7 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6314280)
    }
}

#undef public_63142bc
#undef public_63142c4
#undef public_631430a
#undef public_6314329
#undef public_631433d
#undef public_6314359
#undef public_631436d
#undef public_6314389
#undef public_63143a6
#undef public_63143aa
#undef public_63143c7
#undef public_63143f7
#undef public_631440b
#undef public_6314427
#undef public_6314454
#undef public_6314470
#undef public_631448d
#undef public_63144a7
