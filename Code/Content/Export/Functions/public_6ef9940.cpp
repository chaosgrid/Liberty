#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9940);
CLANG_FORWARD_PROC_SYMBOL(public_6f67440);

#define public_6ef9961 _public_6ef9961
#define public_6ef9975 _public_6ef9975
#define public_6ef99e9 _public_6ef99e9
#define public_6ef9a04 _public_6ef9a04
#define public_6ef9a0c _public_6ef9a0c
#define public_6ef9a3f _public_6ef9a3f
#define public_6ef9a4a _public_6ef9a4a

PROC_DECLARE(0x6ef9940, internal_6ef9940, public_6ef9940);
extern "C" NAKED register_t __cdecl internal_6ef9940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr ds : [public_6fd1c7c], 0xBC23D70A
        mov edi, dword ptr ds : [eax]
        xor bl, bl
        cmp edi, 0xFFFFFFFF
        mov esi, ecx
        jne public_6ef9961
        mov edi, dword ptr ds : [esi]
        public_6ef9961 : nop
        call dword ptr ds : [public_6fb36a0]
        test al, al
        mov eax, offset public_6fcf300
        jne public_6ef9975
        mov eax, offset public_6fcf2fc
        public_6ef9975 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x40]
        push 0
/*FIXUP push offset public_6fcf2f8 @0x6ef997e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fcf2f8
        push eax
        push ecx
        push edx
        call public_6f67440
        add esp, 0x14
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jae public_6ef9a4a
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax]
        fisub dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6fb7ad8]
        fld dword ptr ds : [esi+4]
        fdiv dword ptr ds : [eax]
        fmul dword ptr ds : [public_6fb7ad8]
        fdivp 
        fst dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ef99e9
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 5
        jp public_6ef9a04
        public_6ef99e9 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        je public_6ef9a0c
        mov dword ptr ss : [esp+0x20], 0
        jmp public_6ef9a0c
        public_6ef9a04 : nop
        mov dword ptr ss : [esp+0x20], 0x3F800000
        public_6ef9a0c : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [public_6fd1c7c], eax
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6fb4448]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_6ef9a3f
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 0xC
        public_6ef9a3f : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 8
        ret 0xC
        public_6ef9a4a : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ef9940)
    }
}

#undef public_6ef9961
#undef public_6ef9975
#undef public_6ef99e9
#undef public_6ef9a04
#undef public_6ef9a0c
#undef public_6ef9a3f
#undef public_6ef9a4a
