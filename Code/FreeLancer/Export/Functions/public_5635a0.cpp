#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c750);
CLANG_FORWARD_PROC_SYMBOL(public_57c7d0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);

#define public_5635c0 _public_5635c0
#define public_563609 _public_563609
#define public_563610 _public_563610
#define public_563612 _public_563612
#define public_56361a _public_56361a
#define public_563623 _public_563623

PROC_DECLARE(0x5635a0, internal_5635a0, public_5635a0);
extern "C" NAKED register_t __cdecl internal_5635a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        sub esp, 0x18
        push esi
        mov esi, dword ptr ds : [edx+4]
        xor al, al
        cmp esi, 2
        jne public_56361a
        push ebx
        push edi
        lea esi, ds:[ecx+0x340]
        mov edi, 5
        nop 
        public_5635c0 : nop
        test al, al
        jne public_563610
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_563623
        push 0
        call public_57c7d0
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_59da70
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        push eax
        call dword ptr ds : [ebx+0x10]
        test al, al
        jne public_563609
        mov edx, dword ptr ds : [esi-4]
        mov ebx, dword ptr ds : [edx]
        lea eax, ss:[esp+0x18]
        push eax
        call public_59da70
        mov ecx, dword ptr ds : [esi-4]
        add esp, 4
        push eax
        call dword ptr ds : [ebx+0x10]
        test al, al
        je public_563623
        public_563609 : nop
        mov ecx, dword ptr ds : [esi]
        call public_57c750
        public_563610 : nop
        mov al, 1
        public_563612 : nop
        add esi, 0xC
        dec edi
        jne public_5635c0
        pop edi
        pop ebx
        public_56361a : nop
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        public_563623 : nop
        xor al, al
        jmp public_563612
        UNREACHABLE_TRAP(0x5635a0)
    }
}

#undef public_5635c0
#undef public_563609
#undef public_563610
#undef public_563612
#undef public_56361a
#undef public_563623
