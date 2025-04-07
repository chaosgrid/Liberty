#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);

#define public_6cf2b32 _public_6cf2b32
#define public_6cf2b34 _public_6cf2b34
#define public_6cf2ba7 _public_6cf2ba7
#define public_6cf2bfd _public_6cf2bfd

PROC_DECLARE(0x6cf2b10, internal_6cf2b10, public_6cf2b10);
extern "C" NAKED register_t __cdecl internal_6cf2b10()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        je public_6cf2b32
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        je public_6cf2b34
        public_6cf2b32 : nop
        xor eax, eax
        public_6cf2b34 : nop
        mov ecx, eax
        call dword ptr ds : [public_6d6419c]
        lea edi, ds:[eax+0x24]
        mov ecx, edi
        call dword ptr ds : [public_6d641a4]
        test al, al
        jne public_6cf2bfd
        push edi
        call dword ptr ds : [public_6d641a0]
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_6cf2bfd
        fld dword ptr ds : [edi+4]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6cf2bfd
        fld dword ptr ds : [edi+8]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6cf2ba7
        fld dword ptr ds : [edi+0xC]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6cf2ba7
        fld dword ptr ds : [edi+0x10]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6cf2bfd
        public_6cf2ba7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], 4
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 4
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edi
        call public_6d0b260
        public_6cf2bfd : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6cf2b10)
    }
}

#undef public_6cf2b32
#undef public_6cf2b34
#undef public_6cf2ba7
#undef public_6cf2bfd
