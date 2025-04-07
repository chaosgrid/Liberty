#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45fd3);
CLANG_FORWARD_PROC_SYMBOL(public_6d46396);
CLANG_FORWARD_PROC_SYMBOL(public_6d463d0);

#define public_6d463e9 _public_6d463e9
#define public_6d46421 _public_6d46421
#define public_6d46432 _public_6d46432
#define public_6d46441 _public_6d46441
#define public_6d46455 _public_6d46455
#define public_6d4645b _public_6d4645b
#define public_6d4645c _public_6d4645c
#define public_6d4645f _public_6d4645f

PROC_DECLARE(0x6d463d0, internal_6d463d0, public_6d463d0);
extern "C" NAKED register_t __cdecl internal_6d463d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi+0x18C]
        xor bl, bl
        cmp byte ptr ds : [edi+0x11], bl
        je public_6d463e9
        push 2
        pop eax
        jmp public_6d4645f
        public_6d463e9 : nop
        mov eax, dword ptr ds : [esi+0x190]
        push ebp
        push esi
        call dword ptr ds : [eax+4]
        mov ebp, eax
        dec eax
        pop ecx
        je public_6d46432
        dec eax
        jne public_6d4645c
        cmp byte ptr ds : [edi+0x14], bl
        mov byte ptr ds : [edi+0x11], 1
        je public_6d46421
        mov eax, dword ptr ds : [esi+0x190]
        cmp byte ptr ds : [eax+0x51], bl
        je public_6d4645c
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x3A
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        jmp public_6d4645b
        public_6d46421 : nop
        lea eax, ds:[esi+0x84]
        mov esi, dword ptr ds : [esi+0x7C]
        cmp dword ptr ds : [eax], esi
        jle public_6d4645c
        mov dword ptr ds : [eax], esi
        jmp public_6d4645c
        public_6d46432 : nop
        cmp byte ptr ds : [edi+0x14], bl
        je public_6d46441
        call public_6d45fd3
        mov byte ptr ds : [edi+0x14], bl
        jmp public_6d4645c
        public_6d46441 : nop
        cmp byte ptr ds : [edi+0x10], bl
        jne public_6d46455
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x22
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d46455 : nop
        push esi
        call public_6d46396
        public_6d4645b : nop
        pop ecx
        public_6d4645c : nop
        mov eax, ebp
        pop ebp
        public_6d4645f : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d463d0)
    }
}

#undef public_6d463e9
#undef public_6d46421
#undef public_6d46432
#undef public_6d46441
#undef public_6d46455
#undef public_6d4645b
#undef public_6d4645c
#undef public_6d4645f
